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

	//�����ṹ������
	Student stuArray[3] = {
		{"����",18,100},
		{"����",28,99},
		{"����",38,66}
	};

	//���ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	stuArray[2].age = 25;
	stuArray[2].score = 89;

	//�����ṹ������
	for (int i = 0; i < 3; i++) {
		cout << "������" << stuArray[i].name 
			<< " ���䣺" << stuArray[i].age 
			<< " ������" << stuArray[i].score << endl;
	}


	system("pause");
	return 0;
}