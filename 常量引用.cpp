#include<iostream>
using namespace std;

//��ӡ���ݺ���

void show( const int& val) {

	//val = 1000;//���󣬼���const�󣬾Ϳ��Է�ֹ��ʹ������ʱ���β����޸�ʵ��
	cout << val << endl;
}

int main() {
	int a = 10;
	//int& ref = 10;//�������ñ�������һ��Ϸ����ڴ�ռ�

	const int& ref = 10;//��ȷ������const֮�󣬱������������޸�Ϊ��
						//int temp = 10��const int& ref = temp;
						//ͨ�����ַ�ʽֻ���ñ����������ڴ棬ԭ���Ǳ�������ģ������޷���֪
	//ref = 20;//���󣬼���const֮���Ϊֻ�����������޸�

	int a = 100;
	show(a);

	system("pause");
	return 0;
}