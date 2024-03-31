#include<iostream>
using namespace std;

//函数默认参数

//如果我们自己传入数据，就用自己的数据，如果没有，那么用默认值

int func(int a,int b  = 20,int c = 30) {
	return a + b + c;
}

//注意事项
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
//例：int func（int a,int b=10, int c）这个语法错误
//2.如果函数声明有默认参数了，函数的实现就不能有默认参数了
//例：int fun (int a,int b=0); 
//int fun (int a,int b=0){return a+b;} 这个语法不会报错，但会产生编译错误

int main() {

	cout << "a = 10,结果为：" << func(10) << endl;
	cout << "a = 10,b = 30,结果为：" << func(10, 30) << endl;

	system("pause");
	return 0;
}