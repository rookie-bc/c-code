#include <iostream>
using namespace std;

//ͬ����Ա����
//��������ͬ����Ա   ֱ�Ӽ̳�
//���ʸ���ͬ����Ա   ��������

class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base �µĳ�Ա����func����" << endl;
	}
	void func(int a)
	{
		cout << "Base �µĳ�Ա����func��int a��" << endl;
	}
	int m_A;
};

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son �µĳ�Ա����func����" << endl;
	}
	int m_A;
};

//ͬ����Ա���Դ���ʽ
void test1()
{
	Son s;
	cout << "Son �� m_A = " << s.m_A << endl;
	//���ͨ��������� ���ʵ�����ͬ����Ա���ԣ���Ҫ��������
	cout << "Base �� m_A = " << s.Base::m_A << endl;
}

//ͬ����Ա��������ʽ
void test2()
{
	Son s;
	s.func();  //ֱ�ӵ��ã����õ��������ͬ������
	s.Base::func();  // Ҫ���ø����ͬ�������������������

	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص����и����ͬ����Ա�����������������صģ�
	//�������ʵ������б����ص�ͬ����Ա��������Ҫ��������
	//s.func(100);
	s.Base::func(100);
}
int main()
{
	//test1();
	test2();
	return 0;
}