#include <iostream>
using namespace std;

//同名成员处理
//访问子类同名成员   直接继承
//访问父类同名成员   加作用域

class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base 下的成员函数func（）" << endl;
	}
	void func(int a)
	{
		cout << "Base 下的成员函数func（int a）" << endl;
	}
	int m_A;
};

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son 下的成员函数func（）" << endl;
	}
	int m_A;
};

//同名成员属性处理方式
void test1()
{
	Son s;
	cout << "Son 下 m_A = " << s.m_A << endl;
	//如果通过子类对象， 访问到父类同名成员属性，需要加作用域
	cout << "Base 下 m_A = " << s.Base::m_A << endl;
}

//同名成员函数处理方式
void test2()
{
	Son s;
	s.func();  //直接调用，调用的是子类的同名函数
	s.Base::func();  // 要调用父类的同名函数，必须加作用域

	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉所有父类的同名成员函数（包括函数重载的）
	//如果想访问到父类中被隐藏的同名成员函数，需要加作用域
	//s.func(100);
	s.Base::func(100);
}
int main()
{
	//test1();
	test2();
	return 0;
}