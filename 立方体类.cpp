#include<iostream>
#include<string>
using namespace std;

//��Ա��������Ϊ˽��
//1.�����Լ����ƶ�дȨ��   
//2.����д���Լ��������Ч��   

class Cube {
public:
	void setL(int L) {
		m_L = L;
	}

	int getL() {
		return m_L;
	}

	void setH(int H) {
		m_H = H;
	}

	int getH() {
		return m_H;
	}

	void setW(int W) {
		m_W = W;
	}

	int getW() {
		return m_W;
	}

	int calculateS() {
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_H * m_L;
	}

	int calculateV() {
		return m_L * m_W * m_H;
	}
	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube& c) {
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			return true;
		}
		else {
			return false;
		}
	}

private:
	int m_L=0;
	int m_W=0;
	int m_H=0;
};

//ʹ��ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube& c1,Cube& c2) {
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW()) {
		return true;
	}
	return false;
}

int main() {

	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	cout << "�����������ǣ�" << c1.calculateS() << endl;
	cout << "�����������ǣ�" << c1.calculateV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	bool ref = isSame(c1, c2);
	if (ref) {
		cout << "��������������ȵġ�" << endl;
	}
	else {
		cout << "�����������ǲ���ȵġ�" << endl;
	}

	bool ret = c1.isSameByClass(c2);
	if (ret) {
		cout << "��Ա�����жϣ���������������ȵġ�" << endl;
	}
	else {
		cout << "��Ա�����жϣ������������ǲ���ȵġ�" << endl;
	}


	system("pause");
	return 0;
}