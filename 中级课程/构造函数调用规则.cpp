#include<iostream>
using namespace std;

//���캯���ĵ��ù���
//����һ���࣬C++���������ÿ���඼�������3������
//Ĭ�Ϲ��죨��ʵ�֣�
//������������ʵ�֣�
//�������죨ֵ������

//������������вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼͯ����������
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
		//������Ķ������ϵ��������ԣ��������µĶ�������
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

	//Person p; 	//���в�������û��Ĭ�Ϲ���ʱ������ "Person" ������Ĭ�Ϲ��캯��
	Person p1(20); //��ֻ�п������캯��ʱ�������������ṩĬ�Ϲ��캯��
	Person p2(p1);//���в�������û�п�������ʱ����������Ȼ���ṩĬ�Ͽ������캯��

}

int main() {
	test01();

	system("pause");
	return 0;
}