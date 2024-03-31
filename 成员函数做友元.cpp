#include<iostream>
#include<string>
using namespace std;

/*
在类定义之前，类是一个不完全类型(incompete type)，
即已知向前声明过的类是一个类型，但不知道包含哪些成员，所以在使用向前声明后，
类定义前，只能定义指向该类型的指针及引用而不能使用该类成员。
所以做出修改，让所有函数都用类外调用，并且放在类的后面即可。
*/

class Building;
class GoodGay {
public:
	GoodGay();
	void visit(); //visit可以访问Building中私有成员
	void visit2();//visit不可以访问Building中私有成员
private:
	Building* building;
};

class Building {
	friend void GoodGay::visit();
public:
	Building();
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};

GoodGay::GoodGay() {
	building = new Building;
}

Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

void GoodGay::visit() {
	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
	cout << "全局函数正在访问：" << building->m_BedRoom << endl;
}

void GoodGay::visit2() {
	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
	//cout << "全局函数正在访问：" << building->m_BedRoom << endl;
}

void test01() {
	GoodGay goodGay;
	goodGay.visit();
	goodGay.visit2();

}

int main() {

	test01();

	system("pause");
	return 0;
}