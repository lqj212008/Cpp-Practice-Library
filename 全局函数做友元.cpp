#include<iostream>
#include<string>
using namespace std;

//��������
class Building {
	//goodGuyȫ�ֺ�����Building�����ѣ����Է���Building��˽��˽�г�Ա
	friend void goodGuy(Building* building);//д��������ϱߣ�����Ҫ��Ȩ������
public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

//ȫ�ֺ���
void goodGuy(Building* building) {
	cout << "ȫ�ֺ������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "ȫ�ֺ������ڷ��ʣ�" << building->m_BedRoom << endl;
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