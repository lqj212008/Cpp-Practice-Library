#include<iostream>
using namespace std;

//�������ص�ע������

//1��������Ϊ���ص�����
void func(int& a) { //int &a = 10; ���Ϸ�
	cout << "����func(int& a)�ĵ���" << endl;
}

void func(const int& a) { //const int &a = 10;�Ϸ�
	cout << "����func(const int& a)�ĵ���" << endl;
}

//������������Ĭ�ϲ���
void func2(int a,int b=10) {
	cout << "����func(int a,int b=10)�ĵ���" << endl;
}
//��������������Ĭ�ϲ��������ֶ����ԣ���������������������ķ���
//��ʹ�ú�������ʱ����ò�Ҫ��Ĭ�ϲ���
void func2(int a) {
	cout << "����func(double a, double b)�ĵ���" << endl;
}



int main() {
	int a = 10;
	func(a);
	func(10);
	//func2(10);��������������Ĭ�ϲ��������ֶ����Ա���
	func2(10, 50);

	system("pause");
	return 0;
}
