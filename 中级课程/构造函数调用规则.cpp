#include<iostream>
using namespace std;

//构造函数的调用规则
//创建一个类，C++编译器会给每个类都添加至少3个函数
//默认构造（空实现）
//析构函数（空实现）
//拷贝构造（值拷贝）

//如果我们有了有参构造函数，编译器就不在提供默认构造，依然童工拷贝构造
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
		//将传入的对象身上的所有属性，拷贝到新的对象身上
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

	//Person p; 	//当有参数构造没有默认构造时报错：类 "Person" 不存在默认构造函数
	Person p1(20); //当只有拷贝构造函数时，编译器不会提供默认构造函数
	Person p2(p1);//当有参数构造没有拷贝构造时，编译器依然会提供默认拷贝构造函数

}

int main() {
	test01();

	system("pause");
	return 0;
}