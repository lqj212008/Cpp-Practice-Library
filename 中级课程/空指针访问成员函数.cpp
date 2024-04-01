#include<iostream>
using namespace std;

// 空指针调用成员函数

class Person {
public:
	void showClassName() {
		cout << "this is Person Class" << endl;
	}
	void showPersonName() {
		//在使用成员变量时，默认为this->m_Age
		//报错的原因是因为传入的指针是为空
		//解决方法：
		if (this == NULL) {
			return;
		}
		cout << "age = " << m_Age << endl;
	}
	int m_Age;
};

void test01() {
	Person* p = NULL;
	p->showClassName();//正常运行
	//p->showPersonName();//代码崩溃
}

int main() {

	test01();

	system("pause");
	return 0;
}