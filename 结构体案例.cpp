#include<iostream>
#include<string>
using namespace std;

void addPerson(addresbooks* abs) {
	if (abs->size == MAX) {
		cout << "ͨѶ¼�������޷������ϵ�ˣ�" << endl;
		return;
	}

	cout << "��������Ҫ����˵�������";
	cin >> abs->personArray[abs->size].name;
	cout << endl;

	cout << "��������Ҫ����˵��Ա�(���С���Ů��)";
	char sex;
	cin >> sex;
	while (true) {
		if (sex == '��'|| sex == 'Ů') {
			abs->personArray[abs->size].sex = sex;
			break;
		}
		else {
			cout << "�������������롰�С������ǡ�Ů��" << endl;
		}
	}
	cout << endl;

	cout << "��������Ҫ����˵����䣺";
	cin >> abs->personArray[abs->size].age;
	cout << endl;

	cout << "��������Ҫ����˵���ϵ�绰��";
	cin >> abs->personArray[abs->size].phone;
	cout << endl;

	cout << "��������Ҫ����˵ļ�ͥסַ��";
	cin >> abs->personArray[abs->size].addr;
	cout << endl;

	abs->size += 1;

	cout << "��ӳɹ���" << endl;
}



void bubbleSort(Hero heroArray[], int len) {
	for(int i = 0;i<len - 1;i++){
		for (int j = 0; j < len - i - 1; j++) {
			if (heroArray[j].age > heroArray[j + 1].age) {
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}

}

int main() {
	Hero heroArray[5] = {
	{"����",23,"��"},
	{"����",22,"��"},
	{"�ŷ�",20,"��"},
	{"����",21,"��"},
	{"����",19,"Ů"}};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	cout << "����ǰ������Ϊ��" << endl;

	for (int i = 0; i < len; i++) {
		cout << "������" << heroArray[i].name 
			<< " ���䣺" << heroArray[i].age 
			<< " �Ա�" << heroArray[i].sex << endl;
	}

	bubbleSort(heroArray, len);

	cout << "����������Ϊ��" << endl;

	for (int i = 0; i < len; i++) {
		cout << "������" << heroArray[i].name
			<< " ���䣺" << heroArray[i].age
			<< " �Ա�" << heroArray[i].sex << endl;
	}

	return 0;
}
