//�ڶ�̬�У� �����麯����ʵ���Ǻ�������ģ���Ҫ���ǵ���������д������
//��˿��Խ��麯����Ϊ���麯��
//���麯���﷨:  virtual ����ֵ���� ������ �������б�= 0 ;
//���������˴��麯���������Ҳ�г�����   
//�������ص㣺1.�޷�ʵ��������  2.���������д�����еĴ��麯��������Ҳ���ڳ�����

#include <iostream>
using namespace std;

class Base
{
public:
	virtual void func() = 0;  //���麯��������Ϊ������   Ŀ�ģ�����������д���麯��
};

class son :public Base
{
public:
	virtual void func()
	{
		cout << "func �ĵ���" << endl;
	}
};

void test1()
{
	//Base b;//������Ϊ�����಻����ʵ����
	//new Base//������Ϊ�����಻����ʵ����
	Base* base = new son;
	base->func();
}
int main()
{
	test1();
	return 0;
}