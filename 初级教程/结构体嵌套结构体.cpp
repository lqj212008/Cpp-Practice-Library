#include<iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};

void printStudent(student stu) {
	stu.age = 28;
	cout << "子函数中 姓名：" << stu.name << " 年龄：" << stu.age << " 分数：" << stu.score << endl;
}

void printStudent2(student* stu) {
	stu->age = 28;
	cout << "子函数中 姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;
}

int main() {
	student stu = { "张三", 18, 100};
	//值传递
	printStudent(stu);
	cout << "主函数中 姓名：" << stu.name << " 年龄：" << stu.age << " 分数：" << stu.score << endl;
	cout << endl;
	printStudent2(&stu);
	cout << "主函数中 姓名：" << stu.name << " 年龄：" << stu.age << " 分数：" << stu.score << endl;
	cout << endl;

	return 0;
}