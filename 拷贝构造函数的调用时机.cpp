#include<iostream>
using namespace std;

//拷贝构造函数调用时机
//1、使用一个已经船舰完毕的对象来初始化一个对象



class Person {
public:
	//无参构造（默认构造
	Person() {
		cout << "Person无参构造函数的调用" << endl;
	}
	//有参构造
	Person(int a) {
		age = a;
		cout << "Person有参构造函数的调用" << endl;
	}
	//拷贝构造
	Person(const Person& p) {

		age = p.age;
		cout << "Person拷贝构造函数的调用" << endl;
	}

	~Person() {
		cout << "Person析构函数的调用" << endl;
	}
	int age;
private:

};

void test01() {
	//1、使用一个已经创建完毕的对象来初始化一个新对象
	Person p1(20);
	Person p2(p1);
	cout << "P2的年龄为：" << p2.age << endl;
}

//2.以值传递的方式给函数传值
void DoWork(Person p) {
}
void test02() {
	Person p;
	DoWork(p);
}
//3.值方式返回局部对象
Person DoWork2() {
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test03() {
	Person p = DoWork2();
	cout << (int*)&p << endl;
}

int main() {
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}
