#include<iostream>
using namespace std;

//��������
//�����ú�������ͬ����߸�����

//�������ص���������
//1��ͬһ����������
//2������������ͬ
void func(int a, double b) {
	cout << "����func(int a, double b)�ĵ���" << endl;
}
//��������������ͬ
void func(int a) {
	cout << "����func(int a)�ĵ���" << endl;
}
//�����������Ͳ�ͬ
void func(double a, double b) {
	cout << "����func(double a, double b)�ĵ���" << endl;
}
//��������˳��ͬ
void func(double b ,int a) {
	cout << "����func(double b ,int a)�ĵ���" << endl;
}
//ע������
//�����ķ���ֵ��������Ϊ�������ص�����,�����﷨����
//int func(double b, int a) {
//	cout << "����func(double b ,int a)�ĵ���" << endl;
//	return 0;
//}

int main() {
	
	func(10, 0.2);
	func(10);
	func(0.2,10);

	system("pause");
	return 0;
}