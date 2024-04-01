#include<iostream>
#include<string>
using namespace std;

//加号运算符重载

class Person {
public:
	Person();
	Person(int a,int b);
	/*Person operator+(Person& person);*/
	int m_A;
	int m_B;
};

Person::Person(int a, int b) {
	m_A = a;
	m_B = b;
}

//1.通过成员函数重载+号
//Person Person::operator+(Person& person) {
//	Person temp(this->m_A+person.m_A,this->m_B+person.m_B);
//	return temp;
//}

//2.通过全局函数重载+号
Person operator+(Person& p1, Person& p2) {
	Person temp(p1.m_A + p2.m_A,p1.m_B + p2.m_B);
	return temp;
}

//函数重载的版本
Person operator+(Person& p1, int a) {
	Person temp(p1.m_A + a, p1.m_B + a);
	return temp;
}

void test01() {
	Person p1(10,10);
	Person p2(20,20);
	//成员函数重载的本质调用：Person p3 = p1.operator+(p2);
	//全局函数重载的本质调用：Person p3 = operator+(p1,p2);
	/*Person p3 = p1 + p2;*/

	//运算符重载也可以发生函数重载
	Person p3 = p1 + 10;

	cout << "P3.m_A = " << p3.m_A << endl;
	cout << "P3.m_B = " << p3.m_B << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}