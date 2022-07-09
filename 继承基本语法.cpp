#include <iostream>
using namespace std;

//实现普通页面

////Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、合作交流、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、c++、...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//
//};
//
////Python 页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、合作交流、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、c++、...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//
//};
//
////c++页面
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、合作交流、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、c++、...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "cpp学科视频" << endl;
//	}
//
//};
//void test1()
//{
//	cout << "Java 视频页面如下" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "----------------------" << endl;
//
//	cout << "Python 视频页面如下" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//}

//继承实现
//继承的好处: 减少重复的代码
//语法  :   class 子类 : 继承方式 父类
//子类  也成为  派生类
//父类  也成为  基类



//公共页面类
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、合作交流、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python、c++、...（公共分类列表）" << endl;
	}
};

//Java页面
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Java视频" << endl;
	}
};
//Python页面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python视频" << endl;
	}
};
//CPP页面
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "CPP视频" << endl;
	}
};
void test2()
{
	cout << "Java 视频页面如下" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "----------------------" << endl;

	cout << "Python 视频页面如下" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

}
int main()
{
	//test1();
	test2();
	return 0;
}