#include<iostream>
#include<string>
using namespace std;

void addPerson(addresbooks* abs) {
	if (abs->size == MAX) {
		cout << "通讯录已满，无法添加联系人！" << endl;
		return;
	}

	cout << "请输入需要添加人的姓名：";
	cin >> abs->personArray[abs->size].name;
	cout << endl;

	cout << "请输入需要添加人的性别：(“男”或“女”)";
	char sex;
	cin >> sex;
	while (true) {
		if (sex == '男'|| sex == '女') {
			abs->personArray[abs->size].sex = sex;
			break;
		}
		else {
			cout << "输入有误，请输入“男”或者是“女”" << endl;
		}
	}
	cout << endl;

	cout << "请输入需要添加人的年龄：";
	cin >> abs->personArray[abs->size].age;
	cout << endl;

	cout << "请输入需要添加人的联系电话：";
	cin >> abs->personArray[abs->size].phone;
	cout << endl;

	cout << "请输入需要添加人的家庭住址：";
	cin >> abs->personArray[abs->size].addr;
	cout << endl;

	abs->size += 1;

	cout << "添加成功！" << endl;
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
	{"刘备",23,"男"},
	{"关羽",22,"男"},
	{"张飞",20,"男"},
	{"赵云",21,"男"},
	{"貂蝉",19,"女"}};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	cout << "排序前的排列为：" << endl;

	for (int i = 0; i < len; i++) {
		cout << "姓名：" << heroArray[i].name 
			<< " 年龄：" << heroArray[i].age 
			<< " 性别：" << heroArray[i].sex << endl;
	}

	bubbleSort(heroArray, len);

	cout << "排序后的排列为：" << endl;

	for (int i = 0; i < len; i++) {
		cout << "姓名：" << heroArray[i].name
			<< " 年龄：" << heroArray[i].age
			<< " 性别：" << heroArray[i].sex << endl;
	}

	return 0;
}
