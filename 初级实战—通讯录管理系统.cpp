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
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}

void addPerson(addresbooks* abs) {
	if (abs->size == MAX) {
		cout << "通讯录已满，无法添加联系人！" << endl;
		system("pause");
		return;
	}

	cout << "请输入需要添加人的姓名：";
	cin >> abs->personArray[abs->size].name;

	cout << "请输入需要添加人的性别(“男请输入1”或“女请输入0”)：";
	int sex ;
	while (true) {

	/*	当用cin输入的类型错误时，会将输入的值置为0，
	同时输入的值会保存在输入流的缓存中，
	该缓存将在下个cin操作中自动作为输入执行，
	导致之后的次年操作进自动执行且由于类型错误执行跳过，
	形成死循环。*/
		cin >> sex; 
		if (cin.fail() == 1) {
			cout << "请输入数字：" ;
			cin.clear();		//清除cin流的状态，并设置goodbit状态位。这个函数可以恢复cin流到“好”的状态
			cin.ignore(1024,'\n');//清除以回车结束的输入缓冲区的内容，最大清除1024字节
		}
		else if(sex != 1 && sex != 0) {
			cout << "输入有误，请输入“0”或者是“1”：";
		}
		else {
			abs->personArray[abs->size].sex = sex;
			break;
			
		}
	}

	cout << "请输入需要添加人的年龄：";
	cin >> abs->personArray[abs->size].age;

	cout << "请输入需要添加人的联系电话：";
	cin >> abs->personArray[abs->size].phone;

	cout << "请输入需要添加人的家庭住址：";
	cin >> abs->personArray[abs->size].addr;

	abs->size += 1;

	cout << "添加成功！" << endl;

	system("pause");
}

void showPerson(addresbooks* abs) {
	if (abs->size == 0) {
		cout << "通讯录内目前没有联系人。" << endl;
	}
	else {
		cout << "姓名" << "\t"
			<< "性别" << "\t"
			<< "年龄" << "\t"
			<< "手机号" << "\t\t"
			<< "地址" << endl;
		for (int i = 0; i < abs->size; i++) {
			cout << abs->personArray[i].name << "\t"
				<< (abs->personArray[i].sex == 1 ? "男" : "女") << "\t"
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
	cout << "请输入需要删除的联系人的名字：";
	cin >> inName;
	int num = isExist(abs, inName);
	if ( num == -1) {
		cout << "不存在查找的人名" << endl;
		system("pause");
		return;
	}
	else {
		for (int i = num; i < abs->size ;i++) {
			abs->personArray[num] = abs->personArray[num + 1];
		}
		abs->size--;
		cout << "删除成功！" << endl;
		system("pause");
	}

}

void findPerson(addresbooks* abs) {
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	int num = isExist(abs, name);
	if (num == -1) {
		cout << "没有您查找的联系人" << endl;
		system("pause");
		return;
	}else{
		cout << "姓名" << "\t"
			<< "性别" << "\t"
			<< "年龄" << "\t"
			<< "手机号" << "\t\t"
			<< "地址" << endl;

		cout << abs->personArray[num].name << "\t"
			<< (abs->personArray[num].sex == 1 ? "男" : "女") << "\t"
			<< abs->personArray[num].age << "\t"
			<< abs->personArray[num].phone << "\t"
			<< abs->personArray[num].addr << endl;

		system("pause");
		return;
	}
}

void modifyPerson(addresbooks* abs) {
	string name;
	cout << "请输入要修改的联系人的姓名：" << endl;
	cin >> name;
	int num = isExist(abs, name);
	if (num == -1) {
		cout << "您输入的联系人不存在" << endl;
		system("pause");
	}
	else {
		cout << "请输入姓名：";
		cin >> abs->personArray[num].name;
		cout << "请输入性别(“男请输入1”或“女请输入0”)：";
		cin >> abs->personArray[num].sex;
		cout << "请输入年龄：";
		cin >> abs->personArray[num].age;
		cout << "请输入电话：";
		cin >> abs->personArray[num].phone;
		cout << "请输入地址：";
		cin >> abs->personArray[num].addr;

		cout << "联系人修改完成" << endl;
		system("pause");
	}

}

void cleanPerson(addresbooks* abs) {
	abs->size = 0;
	cout << "通讯录已清空" << endl;
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
			cout << "退出系统，希望下次再见！" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "请按照以上选项输入正确的数字。" << endl;
			break;
		}
		system("cls");
	}
	
}



