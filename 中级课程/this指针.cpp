#include<iostream>
using namespace std;

// thisָ��

//2.���ض�������*this
class Person {
public:
	//1.������Ƴ�ͻ
	Person(int age) {
		//hisָ��ָ�򱻵��õĳ�Ա���������Ķ���
		this->age = age;
	}
	int age;
	//Ҫʹ�ö����壬Ҫ�����õķ�ʽ���ض���
	//�������&����Ϊֵ���ݣ����ú���ʱ��ʹ�ÿ������캯������һ���µĶ������
	Person& PersonAddAge(Person& p) {
		this->age += p.age;
		//thisָp2��ָ�룬��*thisָ��ľ���p2�������ı���
		return *this;
	}
};

void test01() {
	Person p1(10);

	Person p2(10);

	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//��ʽ���˼��
	cout << "p2������Ϊ��" << p2.age << endl;

}

void test02() {


}

int main() {

	test01();
	//test02();

	system("pause");
	return 0;
}