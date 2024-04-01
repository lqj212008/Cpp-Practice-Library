#include<iostream>
#include<string>
using namespace std;

class Building;//调用一个类前必须先声明
class GoodGay {
public:
	GoodGay();
	void visit();
private:
	Building* building;
};

//建筑物类
class Building {
	friend class GoodGay; //GoodGay类是本类的好朋友可以访问本类的私有成员
public:
	Building();

	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};

GoodGay::GoodGay() {

	building = new Building;
};

void GoodGay::visit() {
	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
};

//类外去写成员函数
Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
void test01() {
	GoodGay goodGay;
	goodGay.visit();

}

int main() {

	test01();

	system("pause");
	return 0;
}