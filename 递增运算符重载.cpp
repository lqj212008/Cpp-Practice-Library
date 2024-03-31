#include<iostream>
#include<string>
using namespace std;

//自增运算符重载
class MyInteger {
	friend ostream& operator<<(ostream& out, MyInteger num);
public:
	MyInteger() {
		m_Num = 0;
	}
	//重载前置++运算符
	//返回自身的引用，才能在内存上对该数进行操作。
	MyInteger& operator++() {
		m_Num += 1;
		return *this;
	}
	//重载后置++运算符,在参数里使用占位参数，可以用于区分前置和后置递增
	//返回的是值
	MyInteger operator++(int) {
		MyInteger temp = *this;
		m_Num += 1;
		return temp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream& out, MyInteger num) {
	out << num.m_Num;
	return out;
}

void test01() {
	MyInteger myint;
	cout << ++myint << endl;
}

void test02() {
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {

	/*test01();*/
	test02();

	system("pause");
	return 0;
}