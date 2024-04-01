#include<iostream>
using namespace std;

//函数重载
//可以让函数名相同，提高复用性

//函数重载的满足条件
//1、同一个作用域下
//2、函数名称相同
void func(int a, double b) {
	cout << "函数func(int a, double b)的调用" << endl;
}
//函数参数个数不同
void func(int a) {
	cout << "函数func(int a)的调用" << endl;
}
//函数参数类型不同
void func(double a, double b) {
	cout << "函数func(double a, double b)的调用" << endl;
}
//函数参数顺序不同
void func(double b ,int a) {
	cout << "函数func(double b ,int a)的调用" << endl;
}
//注意事项
//函数的返回值不可以作为函数重载的条件,下面语法错误
//int func(double b, int a) {
//	cout << "函数func(double b ,int a)的调用" << endl;
//	return 0;
//}

int main() {
	
	func(10, 0.2);
	func(10);
	func(0.2,10);

	system("pause");
	return 0;
}