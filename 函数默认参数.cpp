#include<iostream>
using namespace std;

//����Ĭ�ϲ���

//��������Լ��������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ

int func(int a,int b  = 20,int c = 30) {
	return a + b + c;
}

//ע������
//1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
//����int func��int a,int b=10, int c������﷨����
//2.�������������Ĭ�ϲ����ˣ�������ʵ�־Ͳ�����Ĭ�ϲ�����
//����int fun (int a,int b=0); 
//int fun (int a,int b=0){return a+b;} ����﷨���ᱨ����������������

int main() {

	cout << "a = 10,���Ϊ��" << func(10) << endl;
	cout << "a = 10,b = 30,���Ϊ��" << func(10, 30) << endl;

	system("pause");
	return 0;
}