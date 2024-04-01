#include<iostream>
using namespace std;

int Person::b = 0;

//成员变量 和 成员函数 是分开存储的
class Person {
	int a; //非静态成员变量 属于类的对象上
	static int b; //静态成员变量 不属于类的对象上
	void func() {}	//非静态成员函数 不属于类的对象上
	static void func() {} //静态成员函数 不属于类的对象上

};

void test01() {
	Person p;
	//一个空类占用内存大小为1，C++编译器会给每个空对象也分配1字节空间，是为了区分空对象占内存的位置,每个空对象也应该有一个独一无二的内存空间
	//一个包含int成员变量的类占用内存大小是4，类的大小与非静态成员变量占用的内存总和
	//函数所占的内存空间都不在类的地址上
	cout << "对象P所占用的内存大小为：" << sizeof(p) << endl;
}

void test02() {


}

int main() {

	test01();
	//test02();

	system("pause");
	return 0;
}