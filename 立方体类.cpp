#include<iostream>
#include<string>
using namespace std;

//成员属性设置为私有
//1.可以自己控制读写权限   
//2.对于写可以检测数据有效性   

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
	//利用成员函数判断两个立方体是否相等
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

//使用全局函数判断两个立方体是否相等
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
	cout << "立方体的面积是：" << c1.calculateS() << endl;
	cout << "立方体的体积是：" << c1.calculateV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	bool ref = isSame(c1, c2);
	if (ref) {
		cout << "两个立方体是相等的。" << endl;
	}
	else {
		cout << "两个立方体是不相等的。" << endl;
	}

	bool ret = c1.isSameByClass(c2);
	if (ret) {
		cout << "成员函数判断：两个立方体是相等的。" << endl;
	}
	else {
		cout << "成员函数判断：两个立方体是不相等的。" << endl;
	}


	system("pause");
	return 0;
}