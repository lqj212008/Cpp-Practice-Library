#include<iostream>
#include<string>
using namespace std;
//�������������
class Person {
	friend ostream& operator<<(ostream& out, Person& p);
public:
	Person();
	Person(int a, int b);
private:
	int m_A;
	int m_B;

	//һ�㲻��ʹ�ó�Ա��������<<���������Ϊ�޷�ʵ��cout����ࡣ
	//ostream & operator<<(ostream &cout){
	//	cout << "m_A = " << this->m_A << " m_B = " << this->m_B;
	//	return cout;
	//}
	// ����ʱ�﷨Ϊ	p << cout << endl;,�������ҿɶ��Բ�
	
};
Person::Person() {}
Person::Person(int a, int b) {
	m_A = a;
	m_B = b;
}

//ֻ������ȫ�ֺ����������������
//cout�����������������(ostream)��ʹ����ʽ���˼��
ostream& operator<<(ostream &out,Person& p) {		//����Ϊ operator<<(cout, p) �򻯳� cout<<p
	out << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return out;
}

void test01() {
	Person p(10,10);
	cout << p << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}