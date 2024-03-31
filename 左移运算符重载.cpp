#include<iostream>
#include<string>
using namespace std;
//左移运算符重载
class Person {
	friend ostream& operator<<(ostream& out, Person& p);
public:
	Person();
	Person(int a, int b);
private:
	int m_A;
	int m_B;

	//一般不会使用成员函数重载<<运算符，因为无法实现cout在左侧。
	//ostream & operator<<(ostream &cout){
	//	cout << "m_A = " << this->m_A << " m_B = " << this->m_B;
	//	return cout;
	//}
	// 调用时语法为	p << cout << endl;,不美观且可读性差
	
};
Person::Person() {}
Person::Person(int a, int b) {
	m_A = a;
	m_B = b;
}

//只能利用全局函数重载左移运算符
//cout的类型是输出流类型(ostream)，使用链式编程思想
ostream& operator<<(ostream &out,Person& p) {		//本质为 operator<<(cout, p) 简化成 cout<<p
	out << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return out;
}

void test01() {
	Person p(10,10);
	cout << p << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}