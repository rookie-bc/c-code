#include <iostream>
using namespace std;
//左移运算符重载
class Person
{
public:
	//一般不会利用成员函数重载 左移运算符，因为无法实现cout在左侧
	//void operator<<(cout)
	//{
	//
	//}
	int m_A;
	int m_B;
};
//只能利用全局函数重载左移运算符
ostream& operator<<(ostream& cout,Person& p)
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B ;
	return cout;
}
void test1()
{
	Person p;
	p.m_A = 10;
	p.m_B = 10;
	//链式编程
	cout << p << endl;
}
int main()
{
	test1();
	return 0;
}