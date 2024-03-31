#include<iostream>
using namespace std;

//函数重载的注意事项

//1、引用作为重载的条件
void func(int& a) { //int &a = 10; 不合法
	cout << "函数func(int& a)的调用" << endl;
}

void func(const int& a) { //const int &a = 10;合法
	cout << "函数func(const int& a)的调用" << endl;
}

//函数重载碰到默认参数
void func2(int a,int b=10) {
	cout << "函数func(int a,int b=10)的调用" << endl;
}
//当函数重载碰到默认参数，出现二义性，报错，尽量避免这种情况的发生
//当使用函数重载时，最好不要有默认参数
void func2(int a) {
	cout << "函数func(double a, double b)的调用" << endl;
}



int main() {
	int a = 10;
	func(a);
	func(10);
	//func2(10);当函数重载碰到默认参数，出现二义性报错
	func2(10, 50);

	system("pause");
	return 0;
}
