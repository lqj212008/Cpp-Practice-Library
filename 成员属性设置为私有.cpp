#include<iostream>
#include<string>
using namespace std;

//成员属性设置为私有
//1.可以自己控制读写权限   
//2.对于写可以检测数据有效性   

class Person {
public:
	//姓名设置
	void setName(string name) {
		m_Name = name;
	}

	string getName() {
		return m_Name;
	}

	//2.设置有效性年龄
	void setAge(int age) {
		if (age < 0 || age>100) {
			cout << "年龄范围不符合,赋值失败。" << endl;
			return;
		}
		m_Age = age;
	}

	int getAge() {
		return m_Age;
	}

	void setIdol(string idol) {
		m_Idol = idol;
	}

private:
	string m_Name;	//姓名	可读可写
	int m_Age = 18;		//年龄	只读	2.年龄只能在0到100岁之间
	string m_Idol;	//偶像	只写
};



int main() {

	Person p;
	//设置和获取姓名，都可以
	p.setName("张三");
	cout << "姓名：" << p.getName() << endl;

	//不可以设置年龄，但是可以访问年龄
	p.setAge(160);
	//p.m_Age = 20;
	cout << "年龄：" << p.getAge() << endl;

	//可以设置年龄，但是不可以访问
	p.setIdol("小米");
	//cout << "偶像：" << p.setIdol() << endl;

	system("pause");
	return 0;
}