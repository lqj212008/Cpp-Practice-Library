#include<iostream>
using namespace std;

//�����������ķ���ֵ
//1.��Ҫ���ؾֲ�����������
int& test01() {
	int a = 10;  //�ֲ���������������е�ջ��
	return a;
}
//�����ĵ��ÿ�����Ϊ��ֵ
int& test02() {
	static int a = 10;  //��̬��������������е�ȫ����
	return a;
}

int main() {
	//int& ref = test01();
	//��Ҫ���ؾֲ�����������
	//cout << "ref = " << ref << endl;//��ͬ�������Ĵ���ʽ��ͬ����Ҫʹ�ã�
	int& ref = test02();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ��������ֵ
	test02() = 1000;

	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

	system("pause");
	return 0;
}
