#include<iostream>
#include<string>
using namespace std;
//ȫ����
//ȫ�ֱ�������̬����������
//c-const���� g-globalȫ�� l-local�ֲ�

//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main() {

	//������ͨ�ֲ���������ͨ�ֲ����������ջ���У��ɱ������Զ�������ͷ�
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַΪ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << (int)&b << endl;

	//�����κκ����������ı�������ȫ�ֱ�������ŵ�ȫ�����ȫ�ֱ������Ա��κκ�������ʹ�á�
	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << (int)&g_b << endl;

	//��̬����������ͨ����ǰ��static�����ھ�̬������
	//��̬���������������ӳ�����ȫ�ֱ���һ���ĳ��ȣ�
	//�ɱ��������л��գ����������򱣳ֲ��䡣 ��ŵ�ȫ������
	static int s_a = 10;
	static int s_b = 10;
	cout << "��̬����s_a�ĵ�ַΪ��" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ��" << (int)&s_b << endl;

	//����
	//�ַ�������,�ַ�������Ҳ����ȫ������
	cout << "�ַ��������ĵ�ַΪ��" << (int)&"Hello World!" << endl;

	//const���εı���
	//const���ε�ȫ�ֱ�����const���εľֲ�������Ϊȫ�ֳ�������ŵ�ȫ������
	cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ��" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b�ĵ�ַΪ��" << (int)&c_g_b << endl;

	//const���εľֲ��������;ֲ�����һ�������ջ����
	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "�ֲ�����c_l_a�ĵ�ַΪ��" << (int)&c_l_a << endl;
	cout << "�ֲ�����c_l_b�ĵ�ַΪ��" << (int)&c_l_b << endl;


	system("pause");
	return 0;
}