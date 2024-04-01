#include<iostream>
using namespace std;

int Person::m_A = 100;//3.类内声明，类外初始化
int Person::m_B = 200;

class Person {
public:
	//1.所有对象共享同一份数据
	//2.在编译阶段分配内存
	static int m_A;
	
	//静态成员函数
	static void func() {
		m_A = 100;//静态的成员函数可以访问静态的成员变量
		//m_C = 200;//静态成员函数不可以访问非静态的成员变量
		cout << "static void func调用" << endl;
	}
private:
	static int m_B;//静态成员变量也是有访问权限的
	int m_C;
	////静态成员函数也是有访问权限的
	static void func2() {
		cout << "static void func2调用" << endl;
	}
};

void test01() {
	Person p;
	//100
	cout << p.m_A << endl;
	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;//所有对象共享同一份静态成员的数据

	//成员静态函数也有两种访问方式
	//1.通过对象来进行访问
	p.func();
	//2.通过类名来进行访问
	Person::func;

	//Person::func2;//类外访问不到私有静态成员函数
}

void test02() {
	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式
	//1.通过对象进行访问
	Person p;
	cout << p.m_A << endl;
	//2.通过类名进行访问
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;//类外访问不到私有的静态成员变量

}

int main() {

	test01();
	test02();

	system("pause");
	return 0;
}