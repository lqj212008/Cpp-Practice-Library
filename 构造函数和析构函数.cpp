#include<iostream>
using namespace std;

//对象的初始化和清理

class Person {
public: //只有在公共作用域下，外界才能访问到(class默认权限是private)
	//1、构造函数 进行初始化操作
	//构造函数没有返回值 不用写void
	//函数名和类名相同
	//构造函数可以有参数，可以发生重载
	//创建对象时构造函数会自动调用，而且只会调用一次
	Person() {
		cout << "Person构造函数的调用" << endl;
	}
	//2、析构函数 进行清理的操作
	//没有返回值，也不写void
	//函数名和类名相同 在名称前加~
	//析构函数不可以有参数，不可以发生重载
	//对象在销毁前 会自动调用析构函数，而且只会调用一次
	~Person() {
		cout << "Person析构函数的调用" << endl;
	}

private:
};
//构造和析构都是必须有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构
void test01() {
	Person p;//在栈上的数据，test01指向完毕后，自动释放这个对象
}

int main() {
	test01();

	system("pause");
	return 0;
}