#include<iostream>
using namespace std;

// this指针

//2.返回对象本身用*this
class Person {
public:
	//1.解决名称冲突
	Person(int age) {
		//his指针指向被调用的成员函数所属的对象
		this->age = age;
	}
	int age;
	//要使用对象本体，要用引用的方式返回对象。
	//如果不加&，则为值传递，调用函数时会使用拷贝构造函数拷贝一个新的对象出来
	Person& PersonAddAge(Person& p) {
		this->age += p.age;
		//this指p2的指针，而*this指向的就是p2这个对象的本体
		return *this;
	}
};

void test01() {
	Person p1(10);

	Person p2(10);

	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//链式编程思想
	cout << "p2的年龄为：" << p2.age << endl;

}

void test02() {


}

int main() {

	test01();
	//test02();

	system("pause");
	return 0;
}