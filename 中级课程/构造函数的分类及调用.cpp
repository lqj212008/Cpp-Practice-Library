#include<iostream>
using namespace std;

//���캯���ķ��༰����

//����
//���ղ�������  �޲ι��죨Ĭ�Ϲ��죩���вι���
//�������ͷ���  ��ͨ����Ϳ�������
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
	//1.���ŷ�
	//Person p1;//Ĭ�Ϲ��캯������
	//Person p2(20);//�вι��캯��
	//Person p3(p2);
	////ע������
	////����Ĭ�Ϲ��캯��ʱ�򣬲�Ҫ�ӣ���
	////Person p1();//���д��룬��������Ϊ��һ������������

	//cout << "p2�������ǣ�" << p2.age << endl;
	//cout << "p3�������ǣ�" << p3.age << endl;
	//2.��ʾ��
	Person p1;
	Person p2 = Person(20);//�вι���
	Person p3 = Person(p2);//��������

	//Person(20);//�������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//cout << "aaaaa" << endl;
	// ע������2
	// ��Ҫ���ÿ������캯����ʼ����������, ����������ΪPerson(p3)�ȼ���Person p3;��һ����������
	//Person(p3);
	 
	//3.��ʽת����
	Person p4 = 10;//�൱��д�� Person p4 = Person(10);�вι���
	Person p5 = p4;//��������


}

int main() {
	test01();

	system("pause");
	return 0;
}