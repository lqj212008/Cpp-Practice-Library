#include<iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊ֮ս�����Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudent(const student* stu) {
	//stu->age = 28; //����const��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵ������
	cout << "�Ӻ����� ������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;
}

int main() {
	student stu = { "����", 18, 100 };


	printStudent(&stu);
	cout << "�������� ������" << stu.name << " ���䣺" << stu.age << " ������" << stu.score << endl;
	cout << endl;

	return 0;
}