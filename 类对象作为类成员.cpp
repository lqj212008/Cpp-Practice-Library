#include<iostream>
#include<string>
using namespace std;

class Phone {
public:
	Phone(string pName) {
		cout << "Phone的构造函数调用" << endl;
		m_PName = pName;
	}
	~Phone() {
		cout << "Phone的析构函数调用" << endl;
	}
	string m_PName;
};
class Person {
public:
	//Phone m_Phone = pName	//隐式转化法
	Person(string name, string pName):m_Name(name),m_Phone(pName) {
		cout << "Person的构造函数调用" << endl;
	}
	~Person() {
		cout << "Person的析构函数调用" << endl;
	}
	string m_Name;
	Phone m_Phone; //当其他类对象作为本类成员，构造时候先构造类对象，再构造自身，析构时按压栈的顺序依次析构，后创建的先析构
};

void test01() {
	Person p("张三", "华为");
	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;

}

int main() {
	test01();
	system("pause");
	return 0;
}