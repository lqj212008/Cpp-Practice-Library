#include<iostream>
#include<string>
using namespace std;

//����ṹ��
struct Student
{
	string name;
	int age;
	int score;

};

int main() {

	//�����ṹ�����
	Student stuArray[3] = {
		{"����",18,100},
		{"����",28,99},
		{"����",38,66}
	};

	//ͨ��ָ��ָ��ṹ�����
	Student* p = stuArray;

	cout << "������" << p->name << "���䣺" << p->age << "�ɼ���" << p->score << endl;
	cout << "��ӡ���ṹ���������е����ݣ�" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "������" << (p+i)->name << "���䣺" << (p+i)->age << "�ɼ���" << (p+i)->score << endl;
	}



	system("pause");
	return 0;
}