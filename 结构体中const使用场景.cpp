#include<iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};

//将函数中的形参改为之战，可以减少内存空间，而且不会复制新的副本出来
void printStudent(const student* stu) {
	//stu->age = 28; //加入const后，一旦有修改的操作就会报错，可以防止我们的误操作
	cout << "子函数中 姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;
}

int main() {
	student stu = { "张三", 18, 100 };


	printStudent(&stu);
	cout << "主函数中 姓名：" << stu.name << " 年龄：" << stu.age << " 分数：" << stu.score << endl;
	cout << endl;

	return 0;
}