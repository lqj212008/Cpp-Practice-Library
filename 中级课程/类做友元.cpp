#include<iostream>
#include<string>
using namespace std;

class Building;//����һ����ǰ����������
class GoodGay {
public:
	GoodGay();
	void visit();
private:
	Building* building;
};

//��������
class Building {
	friend class GoodGay; //GoodGay���Ǳ���ĺ����ѿ��Է��ʱ����˽�г�Ա
public:
	Building();

	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

GoodGay::GoodGay() {

	building = new Building;
};

void GoodGay::visit() {
	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
};

//����ȥд��Ա����
Building::Building() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
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