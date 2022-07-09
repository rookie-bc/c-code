#include <iostream>
using namespace std;

class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base -- static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base -- static void func(int a)" << endl;
	}
};
int Base::m_A = 100;
class Son :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son -- static void func()" << endl;
	}
};
int Son::m_A = 200;

void test1()
{
	//1.ͨ�������������
	cout << "ͨ���������" << endl;
	Son s;
	cout << "Son �� m_A = " << s.m_A << endl;
	cout << "Base �� m_A = " << s.Base::m_A << endl;

	//2.ͨ��������������
	cout << "ͨ����������" << endl;
	cout << "Son �� m_A = " << Son::m_A << endl;

	cout << "Base �� m_A = " << Base::m_A << endl;     //�����ֱ��ͨ��Base����	���ʵģ�������û�й�ϵ
	
	cout << "Base �� m_A = " << Son::Base::m_A << endl;  //�����ͨ�����࣬���ø����������µ�m_A  //��һ��::��ʾͨ���������ʵڶ���:: ��ʾ�ڸ�����������
	        
}

void test2()
{
	//1.ͨ���������
	cout << "ͨ���������" << endl;
	Son s;
	s.func();
	s.Base::func();
	//2.ͨ����������
	cout << "ͨ����������" << endl;
	Son::func();
	Son::Base::func();
	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ص�����������ͬ����Ա����
	//�������ʸ����б����صĳ�Ա�������������
	Son::Base::func(100);
}
int main()
{
	//test1();
	test2();
	return 0;
}