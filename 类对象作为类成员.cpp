#include<iostream>
#include<string>
using namespace std;

class Phone {
public:
	Phone(string pName) {
		cout << "Phone�Ĺ��캯������" << endl;
		m_PName = pName;
	}
	~Phone() {
		cout << "Phone��������������" << endl;
	}
	string m_PName;
};
class Person {
public:
	//Phone m_Phone = pName	//��ʽת����
	Person(string name, string pName):m_Name(name),m_Phone(pName) {
		cout << "Person�Ĺ��캯������" << endl;
	}
	~Person() {
		cout << "Person��������������" << endl;
	}
	string m_Name;
	Phone m_Phone; //�������������Ϊ�����Ա������ʱ���ȹ���������ٹ�����������ʱ��ѹջ��˳�������������󴴽���������
};

void test01() {
	Person p("����", "��Ϊ");
	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;

}

int main() {
	test01();
	system("pause");
	return 0;
}