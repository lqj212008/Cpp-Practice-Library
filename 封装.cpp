#include<iostream>
#include<string>
using namespace std;

//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
//���ѧ����
class C_Student {
public://����Ȩ��

	//���е����Ժ���Ϊ����ͳһ��Ϊ��Ա
	// ����		��Ա���� ��Ա����
	// ��Ϊ		��Ա���� ��Ա����
	
	//����
	string m_name;
	int m_sid;
public:
	//��Ϊ
	void showStudent() {
		cout << "������" << m_name << "  ѧ�ţ�" << m_sid << endl;
	}
	void setName(string name) {
		m_name = name;
	}
	void setSid(int id) {
		m_sid = id;
	}
};



int main() {
	//����һ������ѧ������ʵ��������
	C_Student stu;
	//��stu����������Ը�ֵ����
	stu.m_name = "����";
	stu.m_sid = 10086;
	//��ʾѧ������Ϣ
	stu.showStudent();

	system("pause");
	return 0;
}