#include<iostream>
using namespace std;

//打印数据函数

void show( const int& val) {

	//val = 1000;//错误，加入const后，就可以防止在使用引用时，形参来修改实参
	cout << val << endl;
}

int main() {
	int a = 10;
	//int& ref = 10;//错误，引用必须引用一块合法的内存空间

	const int& ref = 10;//正确，加上const之后，编译器将代码修改为：
						//int temp = 10；const int& ref = temp;
						//通过这种方式只能用别名来操作内存，原名是编译器起的，我们无法得知
	//ref = 20;//错误，加上const之后变为只读，不可以修改

	int a = 100;
	show(a);

	system("pause");
	return 0;
}