#include<iostream>
using namespace std;

//�����ǳ����

class Person {
public:
	Person() {
		cout << "Person�޲ι��캯���ĵ���" << endl;
	}
	Person(int a,int h) {
		age = a;
		hight =  new int(h);
		cout << "Person�вι��캯���ĵ���" << endl;
	}
	//�Լ�ʵ�ֿ������캯�������ǳ��������������
	Person(const Person& p) {
		age = p.age;
		//hight = p.hight;   ������Ĭ��ʵ�־������д���
		//�������
		hight = new int(*p.hight);
		cout << "Person�������캯���ĵ���" << endl;
	}
	~Person() {
		//���������ٵ������Ƿ�Ϊ�գ������ͷź��ÿյĲ���
		if (hight != NULL) {
			delete hight; //�ͷŶ����ڴ�ռ�
			hight = NULL; //�����ڴ�ռ��ͷź�ָ����Ȼָ���ͷŵĿռ��ΪҰָ�룬ͨ����ָ���ÿ�����ֹҰָ��ĳ���
		}
		
		cout << "Person���������ĵ���" << endl;
	}
	int age;
	int* hight;
private:

};

void test01() {
	Person p1(18,160);
	cout << "P1������Ϊ��" << p1.age << " ���Ϊ��" << *p1.hight << endl;
	Person p2(p1); //�������ṩ�Ŀ������캯������ǳ�����Ĳ���
	cout << "P1������Ϊ��" << p2.age << " ���Ϊ��" << *p2.hight << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}