#include<iostream>
#include<string>
using namespace std;
//��ϵ���������
class Person {
public:
	Person(string name,int age) {
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int m_Age;

	//���ع�ϵ�����==
	bool operator==(Person& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		return false;
	}
	//���ع�ϵ�����!=
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
		cout << "P1��P2����ȵģ�" << endl;
	}
	else {
		cout << "P1��P2�ǲ���ȵģ�" << endl;
	}
	if (p1 != p2) {
		cout << "P1��P2�ǲ���ȵģ�" << endl;
	}
	else {
		cout << "P1��P2����ȵģ�" << endl;
	}
}

int main() {
	test01();
	system("pause");
	return 0;
}