#include<iostream>
using namespace std;

//深拷贝和浅拷贝

class Person {
public:
	Person() {
		cout << "Person无参构造函数的调用" << endl;
	}
	Person(int a,int h) {
		age = a;
		hight =  new int(h);
		cout << "Person有参构造函数的调用" << endl;
	}
	//自己实现拷贝构造函数，解决浅拷贝带来的问题
	Person(const Person& p) {
		age = p.age;
		//hight = p.hight;   编译器默认实现就是这行代码
		//深拷贝操作
		hight = new int(*p.hight);
		cout << "Person拷贝构造函数的调用" << endl;
	}
	~Person() {
		//检查堆区开辟的数据是否为空，进行释放和置空的操作
		if (hight != NULL) {
			delete hight; //释放堆区内存空间
			hight = NULL; //堆区内存空间释放后，指针依然指向释放的空间成为野指针，通过将指针置空来防止野指针的出现
		}
		
		cout << "Person析构函数的调用" << endl;
	}
	int age;
	int* hight;
private:

};

void test01() {
	Person p1(18,160);
	cout << "P1的年龄为：" << p1.age << " 身高为：" << *p1.hight << endl;
	Person p2(p1); //编译器提供的拷贝构造函数会做浅拷贝的操作
	cout << "P1的年龄为：" << p2.age << " 身高为：" << *p2.hight << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}