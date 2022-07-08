//运算符重载: 对已有的运算符重新进行定义，赋予其一种功能，以适应不同的数据类型


#include <iostream>
using namespace std;

class Person
{
public:
	//1.通过成员函数实现重载  '+'       //重载’+‘的函数名必须是  operator+
	                                     
	/*Person operator+(Person& p)
	{
		Person temp;
		temp.m_A = m_A+p.m_A;
		temp.m_B = m_B + p.m_B;
		return temp;
	}*/

	int m_A;
	int m_B;
};

Person operator+ (Person& p1, Person& p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
void test1()
{
	Person p1;
	p1.m_A = 10, p1.m_B = 10;
	Person p2;
	p2.m_A = 10; p2.m_B = 10;
	//简化版为p3=p1+p2   实际上是    p3=p1.operator（p2）；
	//成员函数的本质调用是Person p4 = p1.operator+(p2);
	Person p3= p1 + p2;

	cout << p3.m_A << endl << p3.m_B << endl;
}

void test2()
{
	Person p1;
	p1.m_A = 10, p1.m_B = 10;
	Person p2;
	p2.m_A = 10; p2.m_B = 10;
	//全局函数的本质调用  
	//Person p4 = operator+(p1, p2);
	Person p3 = p1 + p2;
	cout << p3.m_A << endl << p3.m_B << endl;
	
}
int main()
{
	//test1();
	test2();
	return 0;
}