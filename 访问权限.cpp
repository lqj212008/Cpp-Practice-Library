#include<iostream>
using namespace std;

//三种访问权限
//公共权限 public		成员在类内可以访问，类外可以访问
//保护权限 protected	成员在类内可以访问，类外不可以访问，子类可以访问
//私有权限 private		成员在类内可以访问，类外不可以访问，子类不可以访问

class Person {
public:
	string name;
protected:
	string car;
private:
	int password;
public:
	void func() {
		name = "张三";
		car = "拖拉机";
		password = 123456;
	}
};

int main() {
	Person p1;
	p1.name = "李四";
	//p1.car = "";			//保护权限内容，类外访问不到
	//p1.password = 123;	//私有权限内容，类外访问不到

	system("pause");
	return 0;
}