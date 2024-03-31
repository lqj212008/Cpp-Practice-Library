#include<iostream>
using namespace std;

//构造函数的分类及调用

//分类
//按照参数分类  无参构造（默认构造）和有参构造
//按照类型分类  普通构造和拷贝构造
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
	//1.括号法
	//Person p1;//默认构造函数调用
	//Person p2(20);//有参构造函数
	//Person p3(p2);
	////注意事项
	////调用默认构造函数时候，不要加（）
	////Person p1();//这行代码，编译器认为是一个函数的声明

	//cout << "p2的年龄是：" << p2.age << endl;
	//cout << "p3的年龄是：" << p3.age << endl;
	//2.显示法
	Person p1;
	Person p2 = Person(20);//有参构造
	Person p3 = Person(p2);//拷贝构造

	//Person(20);//匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
	//cout << "aaaaa" << endl;
	// 注意事项2
	// 不要利用拷贝构造函数初始化匿名对象, 编译器会认为Person(p3)等价于Person p3;是一个对象声明
	//Person(p3);
	 
	//3.隐式转换法
	Person p4 = 10;//相当与写了 Person p4 = Person(10);有参构造
	Person p5 = p4;//拷贝构造


}

int main() {
	test01();

	system("pause");
	return 0;
}