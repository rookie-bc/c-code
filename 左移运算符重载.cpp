#include <iostream>
using namespace std;
//�������������
class Person
{
public:
	//һ�㲻�����ó�Ա�������� �������������Ϊ�޷�ʵ��cout�����
	//void operator<<(cout)
	//{
	//
	//}
	int m_A;
	int m_B;
};
//ֻ������ȫ�ֺ����������������
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
	//��ʽ���
	cout << p << endl;
}
int main()
{
	test1();
	return 0;
}