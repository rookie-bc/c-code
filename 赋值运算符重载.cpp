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
	//���ظ�ֵ�����
	Person& operator=(Person& p)
	{
		//�������ṩ����ǳ����	
		//m_Age = p.m_Age;

		//Ӧ�����ж������Ƿ������ԣ���������ͷŸɾ����ٽ������
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//�������
		m_Age = new int(*p.m_Age);
		return *this;
	}
};
void test1()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);

	p3 = p2 = p1;  //��ֵ��������p1�����丳ֵ��p2

	cout << "p1 �����䣺" << *p1.m_Age << endl;
	cout << "p2 �����䣺" << *p2.m_Age << endl;
	cout << "p3 �����䣺" << *p3.m_Age << endl;
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