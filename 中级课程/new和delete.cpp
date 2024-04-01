#include<iostream>
using namespace std;

int* fun() {
	int* p = new int(10);
	return p;
}

void test01() {
	int* p = fun();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据，由程序员管理开辟，程序员管理释放
	//如果想释放堆区的数据，利用关键字delete
	delete p;
	//cout << *p << endl; 出错：读取访问权限冲突。无法访问没有分配的内存
}

void test02() {
	int* arr = new int[10];
	for (int i=0 < 0; i < 10; i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	//释放堆区数组
	//释放数组时，要加[]才可以
	delete[] arr;
}


int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}