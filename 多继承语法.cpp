#include <iostream>
using namespace std;

//��̳��﷨          //ʵ�ʿ���������ʹ��
class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}

	int m_A;
};
class Base2
{
public:
	Base2()
	{
		m_A = 200;
	}

	int m_A;
};
//��̳�  ��Ҫ�̳�Base1��Base2           //�ö��ŷָ�
//�﷨  : class ���� : �̳з�ʽ ����1 �� �̳з�ʽ ����2 .....
class Son : public Base1, public Base2            
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test1()
{
	Son s;
	cout << "size of s:" << sizeof(s) << endl;

	//cout << "m_A = " << s.m_A << endl;//��������������Բ�ͬ�������ü�������

	//�������г���ͬ����Ա����Ҫ������������
	cout << "Base1 m_A = " << s.Base1::m_A << endl;
	cout << "Base2 m_A = " << s.Base2::m_A << endl;
}
int main()
{
	test1();
	return 0;
}