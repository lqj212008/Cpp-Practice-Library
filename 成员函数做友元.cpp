#include<iostream>
#include<string>
using namespace std;

/*
���ඨ��֮ǰ������һ������ȫ����(incompete type)��
����֪��ǰ������������һ�����ͣ�����֪��������Щ��Ա��������ʹ����ǰ������
�ඨ��ǰ��ֻ�ܶ���ָ������͵�ָ�뼰���ö�����ʹ�ø����Ա��
���������޸ģ������к�������������ã����ҷ�����ĺ��漴�ɡ�
*/

class Building;
class GoodGay {
public:
	GoodGay();
	void visit(); //visit���Է���Building��˽�г�Ա
	void visit2();//visit�����Է���Building��˽�г�Ա
private:
	Building* building;
};

class Building {
	friend void GoodGay::visit();
public:
	Building();
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

GoodGay::GoodGay() {
	building = new Building;
}

Building::Building() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

void GoodGay::visit() {
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "ȫ�ֺ������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void GoodGay::visit2() {
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "ȫ�ֺ������ڷ��ʣ�" << building->m_BedRoom << endl;
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