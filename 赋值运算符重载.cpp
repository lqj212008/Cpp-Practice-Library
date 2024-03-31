#include<iostream>
#include<string>
using namespace std;
//∏≥÷µ‘ÀÀ„∑˚÷ÿ‘ÿ
class Person {
public:
	Person(int age);
	~Person();
	Person& operator=(Person& p);
	int *m_Age;
	
};
Person::Person(int age) {
	m_Age = new int(age);
}
Person::~Person() {
	if (m_Age != nullptr) {
		delete m_Age;
		m_Age = nullptr;
	}
}
Person& Person::operator=(Person& p) {
	if (m_Age != nullptr) {
		delete m_Age;
		m_Age = nullptr;
	}
	m_Age = new int(*p.m_Age);
	return *this;
}



void test01() {
	Person p1(18);
	Person p2(20);
	Person p3(30);
	p3 = p2 = p1;
	cout << *p1.m_Age<< endl;
	cout << *p2.m_Age << endl;
	cout << *p3.m_Age << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}