#include <iostream>
using namespace std;

class Person
{
public:

	Person(int age)
	{
		m_Age = new int(age);
	}
	int* m_Age;
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//重载赋值运算符
	Person& operator=(Person& p)
	{
		//编译器提供的是浅拷贝	
		//m_Age = p.m_Age;

		//应该先判读堆区是否有属性，如果有先释放干净，再进行深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//深拷贝操作
		m_Age = new int(*p.m_Age);
		return *this;
	}
};
void test1()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);

	p3 = p2 = p1;  //赋值操作，将p1的年龄赋值给p2

	cout << "p1 的年龄：" << *p1.m_Age << endl;
	cout << "p2 的年龄：" << *p2.m_Age << endl;
	cout << "p3 的年龄：" << *p3.m_Age << endl;
}
int main()
{
	test1();
	
	
	/*int a = 10;
	int b = 20;
	int c = 30;
	c = b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;*/

	return 0;
}