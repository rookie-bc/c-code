//���������: �����е���������½��ж��壬������һ�ֹ��ܣ�����Ӧ��ͬ����������


#include <iostream>
using namespace std;

class Person
{
public:
	//1.ͨ����Ա����ʵ������  '+'       //���ء�+���ĺ�����������  operator+
	                                     
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
	//�򻯰�Ϊp3=p1+p2   ʵ������    p3=p1.operator��p2����
	//��Ա�����ı��ʵ�����Person p4 = p1.operator+(p2);
	Person p3= p1 + p2;

	cout << p3.m_A << endl << p3.m_B << endl;
}

void test2()
{
	Person p1;
	p1.m_A = 10, p1.m_B = 10;
	Person p2;
	p2.m_A = 10; p2.m_B = 10;
	//ȫ�ֺ����ı��ʵ���  
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