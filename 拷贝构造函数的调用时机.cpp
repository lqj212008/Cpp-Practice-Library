#include<iostream>
using namespace std;

//�������캯������ʱ��
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ������



class Person {
public:
	//�޲ι��죨Ĭ�Ϲ���
	Person() {
		cout << "Person�޲ι��캯���ĵ���" << endl;
	}
	//�вι���
	Person(int a) {
		age = a;
		cout << "Person�вι��캯���ĵ���" << endl;
	}
	//��������
	Person(const Person& p) {

		age = p.age;
		cout << "Person�������캯���ĵ���" << endl;
	}

	~Person() {
		cout << "Person���������ĵ���" << endl;
	}
	int age;
private:

};

void test01() {
	//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
	Person p1(20);
	Person p2(p1);
	cout << "P2������Ϊ��" << p2.age << endl;
}

//2.��ֵ���ݵķ�ʽ��������ֵ
void DoWork(Person p) {
}
void test02() {
	Person p;
	DoWork(p);
}
//3.ֵ��ʽ���ؾֲ�����
Person DoWork2() {
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test03() {
	Person p = DoWork2();
	cout << (int*)&p << endl;
}

int main() {
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}
