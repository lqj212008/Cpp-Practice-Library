#include<iostream>
using namespace std;

int* fun() {
	//ʹ��new�ؼ��֣����Խ����ݿ��ٵ����������ص��ǿ��ٶ����ĵ�ַ����ָ��������
	//ָ�� ����Ҳ�Ǿֲ�����������ջ�ϣ�ָ��ָ��������Ƿ��ڶ���,
	int* p = new int(10);
	return p;
}


int main() {
	int* p = fun();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}