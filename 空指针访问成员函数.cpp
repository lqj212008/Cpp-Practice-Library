#include<iostream>
using namespace std;

// ��ָ����ó�Ա����

class Person {
public:
	void showClassName() {
		cout << "this is Person Class" << endl;
	}
	void showPersonName() {
		//��ʹ�ó�Ա����ʱ��Ĭ��Ϊthis->m_Age
		//�����ԭ������Ϊ�����ָ����Ϊ��
		//���������
		if (this == NULL) {
			return;
		}
		cout << "age = " << m_Age << endl;
	}
	int m_Age;
};

void test01() {
	Person* p = NULL;
	p->showClassName();//��������
	//p->showPersonName();//�������
}

int main() {

	test01();

	system("pause");
	return 0;
}