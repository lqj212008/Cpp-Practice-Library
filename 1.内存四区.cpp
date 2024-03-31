#include<iostream>
#include<string>
using namespace std;
//全局区
//全局变量、静态变量、常量
//c-const常量 g-global全局 l-local局部

//全局变量
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main() {

	//创建普通局部变量，普通局部变量存放在栈区中，由编译器自动分配和释放
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;

	//不在任何函数里声明的变量就是全局变量，存放到全局区里，全局变量可以被任何函数共享使用。
	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;

	//静态变量，在普通变量前加static，属于静态变量，
	//静态变量的生命周期延长到与全局变量一样的长度，
	//由编译器进行回收，但是作用域保持不变。 存放到全局区里
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;

	//常量
	//字符串常量,字符串常量也放在全局区里
	cout << "字符串常量的地址为：" << (int)&"Hello World!" << endl;

	//const修饰的变量
	//const修饰的全局变量，const修饰的局部变量称为全局常量，存放到全局区里
	cout << "全局常量c_g_a的地址为：" << (int)&c_g_a << endl;
	cout << "全局常量c_g_b的地址为：" << (int)&c_g_b << endl;

	//const修饰的局部变量，和局部变量一样存放在栈区里
	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "局部常量c_l_a的地址为：" << (int)&c_l_a << endl;
	cout << "局部常量c_l_b的地址为：" << (int)&c_l_b << endl;


	system("pause");
	return 0;
}