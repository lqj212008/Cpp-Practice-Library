#include<iostream>
using namespace std;

int Person::m_A = 100;//3.���������������ʼ��
int Person::m_B = 200;

class Person {
public:
	//1.���ж�����ͬһ������
	//2.�ڱ���׶η����ڴ�
	static int m_A;
	
	//��̬��Ա����
	static void func() {
		m_A = 100;//��̬�ĳ�Ա�������Է��ʾ�̬�ĳ�Ա����
		//m_C = 200;//��̬��Ա���������Է��ʷǾ�̬�ĳ�Ա����
		cout << "static void func����" << endl;
	}
private:
	static int m_B;//��̬��Ա����Ҳ���з���Ȩ�޵�
	int m_C;
	////��̬��Ա����Ҳ���з���Ȩ�޵�
	static void func2() {
		cout << "static void func2����" << endl;
	}
};

void test01() {
	Person p;
	//100
	cout << p.m_A << endl;
	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;//���ж�����ͬһ�ݾ�̬��Ա������

	//��Ա��̬����Ҳ�����ַ��ʷ�ʽ
	//1.ͨ�����������з���
	p.func();
	//2.ͨ�����������з���
	Person::func;

	//Person::func2;//������ʲ���˽�о�̬��Ա����
}

void test02() {
	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ
	//1.ͨ��������з���
	Person p;
	cout << p.m_A << endl;
	//2.ͨ���������з���
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;//������ʲ���˽�еľ�̬��Ա����

}

int main() {

	test01();
	test02();

	system("pause");
	return 0;
}