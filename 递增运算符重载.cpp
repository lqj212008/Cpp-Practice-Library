#include<iostream>
#include<string>
using namespace std;

//�������������
class MyInteger {
	friend ostream& operator<<(ostream& out, MyInteger num);
public:
	MyInteger() {
		m_Num = 0;
	}
	//����ǰ��++�����
	//������������ã��������ڴ��϶Ը������в�����
	MyInteger& operator++() {
		m_Num += 1;
		return *this;
	}
	//���غ���++�����,�ڲ�����ʹ��ռλ������������������ǰ�úͺ��õ���
	//���ص���ֵ
	MyInteger operator++(int) {
		MyInteger temp = *this;
		m_Num += 1;
		return temp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream& out, MyInteger num) {
	out << num.m_Num;
	return out;
}

void test01() {
	MyInteger myint;
	cout << ++myint << endl;
}

void test02() {
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {

	/*test01();*/
	test02();

	system("pause");
	return 0;
}