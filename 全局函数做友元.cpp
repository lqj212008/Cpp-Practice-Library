#include<iostream>
#include<string>
using namespace std;

//建筑物类
class Building {
	//goodGuy全局函数是Building好朋友，可以访问Building中私有私有成员
	friend void goodGuy(Building* building);//写在类的最上边，不需要有权限修饰
public:
	Building() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};

//全局函数
void goodGuy(Building* building) {
	cout << "全局函数正在访问：" << building->m_SittingRoom << endl;
	cout << "全局函数正在访问：" << building->m_BedRoom << endl;
}

void test01() {
	Building building;
	goodGuy(&building);
}

int main() {

	test01();

	system("pause");
	return 0;
}