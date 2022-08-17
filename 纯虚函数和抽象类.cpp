//在多态中， 父类虚函数的实现是毫无意义的，主要都是调用子类重写的内容
//因此可以将虚函数改为纯虚函数
//纯虚函数语法:  virtual 返回值类型 函数名 （参数列表）= 0 ;
//当类中有了纯虚函数，这个类也叫抽象类   
//抽象类特点：1.无法实例化对象  2.子类必须重写父类中的纯虚函数，否则也属于抽象类

#include <iostream>
using namespace std;

class Base
{
public:
	virtual void func() = 0;  //纯虚函数，此类为抽象类   目的，想让子类重写纯虚函数
};

class son :public Base
{
public:
	virtual void func()
	{
		cout << "func 的调用" << endl;
	}
};

void test1()
{
	//Base b;//报错，因为抽象类不允许实例化
	//new Base//报错，因为抽象类不允许实例化
	Base* base = new son;
	base->func();
}
int main()
{
	test1();
	return 0;
}