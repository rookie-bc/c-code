#include <iostream>
using namespace std;
//函数调用运算符重载 （）

class MyPrint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void test1() 
{
	MyPrint myPrint;
	myPrint("HElloWorld");       //因为（）运算符重载之后非常类似于函数，因此称为仿函数
}
//由于仿函数非常灵活，没有固定的写法
//加法类
class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test2()
{
	MyAdd myAdd;
	int res = myAdd(100, 200);
	cout << "res = " << res << endl;

	//匿名函数对象
	cout << MyAdd()(100, 200) << endl;
}
int main()
{
	//test1();
	test2();
	return 0;
}