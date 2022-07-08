//前置递增返回的是引用，后置递增返回的是值

#include <iostream>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);

public:
	MyInteger()
	{
		m_Num = 0;
	}
	//重载前置++运算符

	MyInteger& operator++()           //返回引用是为了一直对一个数据进行递增操作
	{
		//先将自身做一个++的操作
		m_Num++;

		//再将自身做一个返回
		return *this;
	}
	

	//重载后置++运算符
	// 
	//返回的是值而不是引用，因为temp是局部变量，返回引用的话 ，当局部变量被释放 再访问地址 会造成非法操作

	MyInteger operator++(int)             //int 代表占位参数  用于区分前置和后置递增      
	{
		//1.先记录当时结果
		MyInteger temp = *this;
		//2.再递增
		m_Num++;
		//3.再返回当时的结果
		return temp;
	}
private:
	int m_Num;
};
//重载左移运算符
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}
void test1()
{
	MyInteger myint;
	cout << ++myint << endl;
}
void test2()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	//test1();
	test2();
}