#include<iostream>
using namespace std;

//引用做函数的返回值
//1.不要返回局部变量的引用
int& test01() {
	int a = 10;  //局部变量存放在四区中的栈区
	return a;
}
//函数的调用可以作为左值
int& test02() {
	static int a = 10;  //静态变量存放在四区中的全局区
	return a;
}

int main() {
	//int& ref = test01();
	//不要返回局部变量的引用
	//cout << "ref = " << ref << endl;//不同编译器的处理方式不同，不要使用，
	int& ref = test02();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	//如果函数的返回值是引用，这个函数调用可以作为左值来接收数值
	test02() = 1000;

	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

	system("pause");
	return 0;
}
