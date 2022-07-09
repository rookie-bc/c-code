#include <iostream>
using namespace std;

//继承中构造和析构的顺序
class Base
{
public:
	Base()
	{
		cout << "Base的构造函数" << endl;
	}
	~Base()
	{
		cout << "Base的析构函数" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son的构造函数" << endl;
	}
	~Son()
	{
		cout << "Son的析构函数" << endl;
	}
};
void test()
{
	//Base b;
	//继承中的构造和析构顺序如下
	//先构造父类再构造子类
	//析构的顺序与构造相反
	Son s;
}
int main()
{
	test();
	return 0;
}