#include<iostream>
using namespace std;

//�����ǳ����

class Person {
public:
	//��ͳ��ʼ������
	//Person(int a, int b,int c) {
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//	cout << "Person�вι��캯���ĵ���" << endl;
	//}
	//��ʼ���б��ʼ������
	Person(int a,int b,int c):m_A(a),m_B(b),m_C(c) {

		cout << "Person�вι��캯���ĵ���" << endl;
	}
	~Person() {
	

		cout << "Person���������ĵ���" << endl;
	}
	int m_A;
	int m_B;
	int m_C;
private:

};

void test01() {
	Person p;
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}