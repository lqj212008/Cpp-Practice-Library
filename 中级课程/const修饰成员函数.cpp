#include<iostream>
using namespace std;

//常函数和常对象

class Person {
public:
	//常函数
	//this指针的本质时指针常量 指针的指向是不可以修改的
	//const Person * const this;
	//在成员函数后面加上const，修饰的是this指针，让指针指向的值也不可以修改
	void showPerson() const {
		this->m_B = 100; //可以修改
		//this->m_A = 100//不可以修改
		//this = NULL;//this指针不可以修改指针的指向
	}
	void func(){
		m_A = 100;
	}
	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable
};

void test01() {
	Person p;
	p.showPerson();
}

void test02() {
	//常对象
	const Person p;//在对象前加const，变为常对象
	//p.m_A = 100;//常对象的普通成员变量无法修改
	p.m_B = 200;//m_B是特殊值，在常对象下也可以修改

	//常对象只能调用常函数
	p.showPerson();
	//p.func();//常对象不可以调用普通成员函数，因为普通成员函数可以修改属性

}

int main() {

	test01();

	system("pause");
	return 0;
}