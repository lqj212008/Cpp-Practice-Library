#include<iostream>
#include<string>
using namespace std;

//��Ա��������Ϊ˽��
//1.�����Լ����ƶ�дȨ��   
//2.����д���Լ��������Ч��   

class Person {
public:
	//��������
	void setName(string name) {
		m_Name = name;
	}

	string getName() {
		return m_Name;
	}

	//2.������Ч������
	void setAge(int age) {
		if (age < 0 || age>100) {
			cout << "���䷶Χ������,��ֵʧ�ܡ�" << endl;
			return;
		}
		m_Age = age;
	}

	int getAge() {
		return m_Age;
	}

	void setIdol(string idol) {
		m_Idol = idol;
	}

private:
	string m_Name;	//����	�ɶ���д
	int m_Age = 18;		//����	ֻ��	2.����ֻ����0��100��֮��
	string m_Idol;	//ż��	ֻд
};



int main() {

	Person p;
	//���úͻ�ȡ������������
	p.setName("����");
	cout << "������" << p.getName() << endl;

	//�������������䣬���ǿ��Է�������
	p.setAge(160);
	//p.m_Age = 20;
	cout << "���䣺" << p.getAge() << endl;

	//�����������䣬���ǲ����Է���
	p.setIdol("С��");
	//cout << "ż��" << p.setIdol() << endl;

	system("pause");
	return 0;
}