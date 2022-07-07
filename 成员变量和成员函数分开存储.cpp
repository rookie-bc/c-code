//在c++中，类的成员变量和成员函数分开存储
//只有非静态成员变量才属于类的对象上          非静态成员变量所占的内存和   是   对象所占内存和

#include <iostream>
using namespace std;

class Person
{
public:
	int m_A;			 	 //非静态成员变量  属于类的对象上
	static int m_B;			 //静态成员变量  不属于类的对象上
	void func();			 //非静态成员函数  不属于类的对象上
	static void func2();	 //静态成员函数     不属于类的对象上
};
int m_B = 10;
void test1()
{
	Person p;
	//空对象占用的内存空间为   1 字节
	//c++编译器会给每一个空对象也分配一个字节空间，是为了区分空对象占空间位置  ，比如两个对象，需要给他们分配不同的空间，编译器分配了一个字节
	//每个空对象也应该有一个独一无二的内存地址

	cout << "sizeof of p = " << sizeof(p) << endl;
}

void test2()
{
	Person p;
	cout << "sizeof of p = " << sizeof(p) << endl;
}
int main()
{
	//test1();
	test2();
	return 0;
}