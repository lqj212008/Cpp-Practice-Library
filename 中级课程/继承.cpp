#include<iostream>
using namespace std;

//��ͨʵ��ҳ��
//JAVAҳ��
//class Java {
//public:
//	void header() {
//		cout << "��ҳ�������Σ���¼��ע�ᡭ��������ͷ����" << endl;
//	}
//	void footer() {
//		cout << "�������ģ�����������վ�ڵ�ͼ�����������ײ���" << endl;
//	}
//	void left() {
//		cout << "Java,Python,C++���������������б�" << endl;
//	}
//	void content() {
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//class Python {
//public:
//	void header() {
//		cout << "��ҳ�������Σ���¼��ע�ᡭ��������ͷ����" << endl;
//	}
//	void footer() {
//		cout << "�������ģ�����������վ�ڵ�ͼ�����������ײ���" << endl;
//	}
//	void left() {
//		cout << "Java,Python,C++���������������б�" << endl;
//	}
//	void content() {
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
//class Cpp {
//public:
//	void header() {
//		cout << "��ҳ�������Σ���¼��ע�ᡭ��������ͷ����" << endl;
//	}
//	void footer() {
//		cout << "�������ģ�����������վ�ڵ�ͼ�����������ײ���" << endl;
//	}
//	void left() {
//		cout << "Java,Python,C++���������������б�" << endl;
//	}
//	void content() {
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};

//�̳�ʵ��ҳ��
class BasePage {
public:
	void header() {
		cout << "��ҳ�������Σ���¼��ע�ᡭ��������ͷ����" << endl;
	}
	void footer() {
		cout << "�������ģ�����������վ�ڵ�ͼ�����������ײ���" << endl;
	}
	void left() {
		cout << "Java,Python,C++���������������б�" << endl;
	}
};
//Javaҳ��
class Java :public BasePage {
public:
	void content() {
		cout << "Javaѧ����Ƶ" << endl;
	}
};
//Pythonҳ��
class Python :public BasePage {
public:
	void content() {
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
//C++ҳ��
class Cpp :public BasePage {
public:
	void content() {
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

void test01() {
	cout << "Java������Ƶ����" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------------------" << endl;
	cout << "Python������Ƶ����" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------------------" << endl;
	cout << "C++������Ƶ����" << endl;
	Cpp cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();
	cout << "--------------------------------" << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}