#include <iostream>
using namespace std;

class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base -- static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base -- static void func(int a)" << endl;
	}
};
int Base::m_A = 100;
class Son :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son -- static void func()" << endl;
	}
};
int Son::m_A = 200;

void test1()
{
	//1.通过对象访问数据
	cout << "通过对象访问" << endl;
	Son s;
	cout << "Son 下 m_A = " << s.m_A << endl;
	cout << "Base 下 m_A = " << s.Base::m_A << endl;

	//2.通过类名访问数据
	cout << "通过类名访问" << endl;
	cout << "Son 下 m_A = " << Son::m_A << endl;

	cout << "Base 下 m_A = " << Base::m_A << endl;     //这个是直接通过Base类名	访问的，和子类没有关系
	
	cout << "Base 下 m_A = " << Son::Base::m_A << endl;  //这个是通过子类，调用父类作用域下的m_A  //第一个::表示通过类名访问第二个:: 表示在父类作用域下
	        
}

void test2()
{
	//1.通过对象访问
	cout << "通过对象访问" << endl;
	Son s;
	s.func();
	s.Base::func();
	//2.通过类名访问
	cout << "通过类名访问" << endl;
	Son::func();
	Son::Base::func();
	//子类出现和父类同名静态成员函数，也会隐藏掉父类中所有同名成员函数
	//如果想访问父类中被隐藏的成员，必须加作用域
	Son::Base::func(100);
}
int main()
{
	//test1();
	test2();
	return 0;
}