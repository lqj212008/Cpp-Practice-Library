#include<iostream>
#include<stdlib.h>
#include<string>
#define MAX 1000

using namespace std;

struct Person {
	string name;
	int sex;
	int age;
	string phone;
	string addr;
};

struct addresbooks {
	struct Person personArray[MAX];
	
	int size;
};

void showMenu() {
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
}

void addPerson(addresbooks* abs) {
	if (abs->size == MAX) {
		cout << "ͨѶ¼�������޷������ϵ�ˣ�" << endl;
		system("pause");
		return;
	}

	cout << "��������Ҫ����˵�������";
	cin >> abs->personArray[abs->size].name;

	cout << "��������Ҫ����˵��Ա�(����������1����Ů������0��)��";
	int sex ;
	while (true) {

	/*	����cin��������ʹ���ʱ���Ὣ�����ֵ��Ϊ0��
	ͬʱ�����ֵ�ᱣ�����������Ļ����У�
	�û��潫���¸�cin�������Զ���Ϊ����ִ�У�
	����֮��Ĵ���������Զ�ִ�����������ʹ���ִ��������
	�γ���ѭ����*/
		cin >> sex; 
		if (cin.fail() == 1) {
			cout << "���������֣�" ;
			cin.clear();		//���cin����״̬��������goodbit״̬λ������������Իָ�cin�������á���״̬
			cin.ignore(1024,'\n');//����Իس����������뻺���������ݣ�������1024�ֽ�
		}
		else if(sex != 1 && sex != 0) {
			cout << "�������������롰0�������ǡ�1����";
		}
		else {
			abs->personArray[abs->size].sex = sex;
			break;
			
		}
	}

	cout << "��������Ҫ����˵����䣺";
	cin >> abs->personArray[abs->size].age;

	cout << "��������Ҫ����˵���ϵ�绰��";
	cin >> abs->personArray[abs->size].phone;

	cout << "��������Ҫ����˵ļ�ͥסַ��";
	cin >> abs->personArray[abs->size].addr;

	abs->size += 1;

	cout << "��ӳɹ���" << endl;

	system("pause");
}

void showPerson(addresbooks* abs) {
	if (abs->size == 0) {
		cout << "ͨѶ¼��Ŀǰû����ϵ�ˡ�" << endl;
	}
	else {
		cout << "����" << "\t"
			<< "�Ա�" << "\t"
			<< "����" << "\t"
			<< "�ֻ���" << "\t\t"
			<< "��ַ" << endl;
		for (int i = 0; i < abs->size; i++) {
			cout << abs->personArray[i].name << "\t"
				<< (abs->personArray[i].sex == 1 ? "��" : "Ů") << "\t"
				<< abs->personArray[i].age << "\t"
				<< abs->personArray[i].phone << "\t"
				<< abs->personArray[i].addr << endl;
		}
	}
	system("pause");
}

int isExist(addresbooks* abs,string name) {
	for (int i = 0; i < abs->size; i++) {
		if (abs->personArray[i].name == name) {
			return i;
		}
	}
	return -1;
}

void DeletePersoon(addresbooks* abs) {
	string inName;
	cout << "��������Ҫɾ������ϵ�˵����֣�";
	cin >> inName;
	int num = isExist(abs, inName);
	if ( num == -1) {
		cout << "�����ڲ��ҵ�����" << endl;
		system("pause");
		return;
	}
	else {
		for (int i = num; i < abs->size ;i++) {
			abs->personArray[num] = abs->personArray[num + 1];
		}
		abs->size--;
		cout << "ɾ���ɹ���" << endl;
		system("pause");
	}

}

void findPerson(addresbooks* abs) {
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	int num = isExist(abs, name);
	if (num == -1) {
		cout << "û�������ҵ���ϵ��" << endl;
		system("pause");
		return;
	}else{
		cout << "����" << "\t"
			<< "�Ա�" << "\t"
			<< "����" << "\t"
			<< "�ֻ���" << "\t\t"
			<< "��ַ" << endl;

		cout << abs->personArray[num].name << "\t"
			<< (abs->personArray[num].sex == 1 ? "��" : "Ů") << "\t"
			<< abs->personArray[num].age << "\t"
			<< abs->personArray[num].phone << "\t"
			<< abs->personArray[num].addr << endl;

		system("pause");
		return;
	}
}

void modifyPerson(addresbooks* abs) {
	string name;
	cout << "������Ҫ�޸ĵ���ϵ�˵�������" << endl;
	cin >> name;
	int num = isExist(abs, name);
	if (num == -1) {
		cout << "���������ϵ�˲�����" << endl;
		system("pause");
	}
	else {
		cout << "������������";
		cin >> abs->personArray[num].name;
		cout << "�������Ա�(����������1����Ů������0��)��";
		cin >> abs->personArray[num].sex;
		cout << "���������䣺";
		cin >> abs->personArray[num].age;
		cout << "������绰��";
		cin >> abs->personArray[num].phone;
		cout << "�������ַ��";
		cin >> abs->personArray[num].addr;

		cout << "��ϵ���޸����" << endl;
		system("pause");
	}

}

void cleanPerson(addresbooks* abs) {
	abs->size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");

}

int main() {

	addresbooks abs;
	abs.size = 0;
	int select=0;

	while (true) {
		
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
			DeletePersoon(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "�˳�ϵͳ��ϣ���´��ټ���" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "�밴������ѡ��������ȷ�����֡�" << endl;
			break;
		}
		system("cls");
	}
	
}



