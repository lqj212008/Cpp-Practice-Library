#include<iostream>
using namespace std;

//���ַ���Ȩ��
//����Ȩ�� public		��Ա�����ڿ��Է��ʣ�������Է���
//����Ȩ�� protected	��Ա�����ڿ��Է��ʣ����ⲻ���Է��ʣ�������Է���
//˽��Ȩ�� private		��Ա�����ڿ��Է��ʣ����ⲻ���Է��ʣ����಻���Է���

class Person {
public:
	string name;
protected:
	string car;
private:
	int password;
public:
	void func() {
		name = "����";
		car = "������";
		password = 123456;
	}
};

int main() {
	Person p1;
	p1.name = "����";
	//p1.car = "";			//����Ȩ�����ݣ�������ʲ���
	//p1.password = 123;	//˽��Ȩ�����ݣ�������ʲ���

	system("pause");
	return 0;
}