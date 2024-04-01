#include<iostream>
#include<string>
using namespace std;

//设计一个学生类，属性有姓名课学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
//设计学生类
class C_Student {
public://公共权限

	//类中的属性和行为我们统一称为成员
	// 属性		成员属性 成员变量
	// 行为		成员函数 成员方法
	
	//属性
	string m_name;
	int m_sid;
public:
	//行为
	void showStudent() {
		cout << "姓名：" << m_name << "  学号：" << m_sid << endl;
	}
	void setName(string name) {
		m_name = name;
	}
	void setSid(int id) {
		m_sid = id;
	}
};



int main() {
	//创建一个具体学生对象，实例化对象
	C_Student stu;
	//给stu对象进行属性赋值操作
	stu.m_name = "张三";
	stu.m_sid = 10086;
	//显示学生的信息
	stu.showStudent();

	system("pause");
	return 0;
}