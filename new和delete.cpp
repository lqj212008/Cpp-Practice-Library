#include<iostream>
using namespace std;

int* fun() {
	int* p = new int(10);
	return p;
}

void test01() {
	int* p = fun();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//���������ݣ��ɳ���Ա�����٣�����Ա�����ͷ�
	//������ͷŶ��������ݣ����ùؼ���delete
	delete p;
	//cout << *p << endl; ������ȡ����Ȩ�޳�ͻ���޷�����û�з�����ڴ�
}

void test02() {
	int* arr = new int[10];
	for (int i=0 < 0; i < 10; i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	//�ͷŶ�������
	//�ͷ�����ʱ��Ҫ��[]�ſ���
	delete[] arr;
}


int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}