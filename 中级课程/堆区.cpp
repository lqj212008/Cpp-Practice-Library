#include<iostream>
using namespace std;

int* fun() {
	//使用new关键字，可以将数据开辟到堆区，返回的是开辟堆区的地址，用指针来接收
	//指针 本质也是局部变量，放在栈上，指针指向的数据是放在堆区,
	int* p = new int(10);
	return p;
}


int main() {
	int* p = fun();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}