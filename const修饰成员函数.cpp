#include<iostream>
using namespace std;

//�������ͳ�����

class Person {
public:
	//������
	//thisָ��ı���ʱָ�볣�� ָ���ָ���ǲ������޸ĵ�
	//const Person * const this;
	//�ڳ�Ա�����������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
	void showPerson() const {
		this->m_B = 100; //�����޸�
		//this->m_A = 100//�������޸�
		//this = NULL;//thisָ�벻�����޸�ָ���ָ��
	}
	void func(){
		m_A = 100;
	}
	int m_A;
	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable
};

void test01() {
	Person p;
	p.showPerson();
}

void test02() {
	//������
	const Person p;//�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;//���������ͨ��Ա�����޷��޸�
	p.m_B = 200;//m_B������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();//�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����

}

int main() {

	test01();

	system("pause");
	return 0;
}