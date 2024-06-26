#include<iostream>
#include<string>
using namespace std;
//关系运算符重载
class Person {
public:
	Person(string name,int age) {
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int m_Age;

	//重载关系运算符==
	bool operator==(Person& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		return false;
	}
	//重载关系运算符!=
	bool operator!=(Person p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return false;
		}
		return true;
	}
};



void test01() {
	Person p1("Tom", 18);
	Person p2("Tom", 18);
	if (p1 == p2) {
		cout << "P1和P2是相等的！" << endl;
	}
	else {
		cout << "P1和P2是不相等的！" << endl;
	}
	if (p1 != p2) {
		cout << "P1和P2是不相等的！" << endl;
	}
	else {
		cout << "P1和P2是相等的！" << endl;
	}
}

int main() {
	test01();
	system("pause");
	return 0;
}