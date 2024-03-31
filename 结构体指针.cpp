#include<iostream>
#include<string>
using namespace std;

//定义结构体
struct Student
{
	string name;
	int age;
	int score;

};

int main() {

	//创建结构体变量
	Student stuArray[3] = {
		{"张三",18,100},
		{"李四",28,99},
		{"王五",38,66}
	};

	//通过指针指向结构体变量
	Student* p = stuArray;

	cout << "姓名：" << p->name << "年龄：" << p->age << "成绩：" << p->score << endl;
	cout << "打印出结构体数组所有的内容：" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << (p+i)->name << "年龄：" << (p+i)->age << "成绩：" << (p+i)->score << endl;
	}



	system("pause");
	return 0;
}