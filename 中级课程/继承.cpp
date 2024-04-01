#include<iostream>
using namespace std;

//普通实现页面
//JAVA页面
//class Java {
//public:
//	void header() {
//		cout << "首页，公开课，登录，注册……（公共头部）" << endl;
//	}
//	void footer() {
//		cout << "帮助中心，合作交流，站内地图……（公共底部）" << endl;
//	}
//	void left() {
//		cout << "Java,Python,C++……（公共分类列表）" << endl;
//	}
//	void content() {
//		cout << "Java学科视频" << endl;
//	}
//};
//class Python {
//public:
//	void header() {
//		cout << "首页，公开课，登录，注册……（公共头部）" << endl;
//	}
//	void footer() {
//		cout << "帮助中心，合作交流，站内地图……（公共底部）" << endl;
//	}
//	void left() {
//		cout << "Java,Python,C++……（公共分类列表）" << endl;
//	}
//	void content() {
//		cout << "Python学科视频" << endl;
//	}
//};
//
//class Cpp {
//public:
//	void header() {
//		cout << "首页，公开课，登录，注册……（公共头部）" << endl;
//	}
//	void footer() {
//		cout << "帮助中心，合作交流，站内地图……（公共底部）" << endl;
//	}
//	void left() {
//		cout << "Java,Python,C++……（公共分类列表）" << endl;
//	}
//	void content() {
//		cout << "C++学科视频" << endl;
//	}
//};

//继承实现页面
class BasePage {
public:
	void header() {
		cout << "首页，公开课，登录，注册……（公共头部）" << endl;
	}
	void footer() {
		cout << "帮助中心，合作交流，站内地图……（公共底部）" << endl;
	}
	void left() {
		cout << "Java,Python,C++……（公共分类列表）" << endl;
	}
};
//Java页面
class Java :public BasePage {
public:
	void content() {
		cout << "Java学科视频" << endl;
	}
};
//Python页面
class Python :public BasePage {
public:
	void content() {
		cout << "Python学科视频" << endl;
	}
};
//C++页面
class Cpp :public BasePage {
public:
	void content() {
		cout << "Python学科视频" << endl;
	}
};

void test01() {
	cout << "Java下载视频如下" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------------------" << endl;
	cout << "Python下载视频如下" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------------------" << endl;
	cout << "C++下载视频如下" << endl;
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