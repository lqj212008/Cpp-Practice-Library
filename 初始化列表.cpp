#include<iostream>
using namespace std;

//深拷贝和浅拷贝

class Person {
public:
	//传统初始化操作
	//Person(int a, int b,int c) {
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//	cout << "Person有参构造函数的调用" << endl;
	//}
	//初始化列表初始化属性
	Person(int a,int b,int c):m_A(a),m_B(b),m_C(c) {

		cout << "Person有参构造函数的调用" << endl;
	}
	~Person() {
	

		cout << "Person析构函数的调用" << endl;
	}
	int m_A;
	int m_B;
	int m_C;
private:

};

void test01() {
	Person p;
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}