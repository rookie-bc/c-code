//��c++�У���ĳ�Ա�����ͳ�Ա�����ֿ��洢
//ֻ�зǾ�̬��Ա������������Ķ�����          �Ǿ�̬��Ա������ռ���ڴ��   ��   ������ռ�ڴ��

#include <iostream>
using namespace std;

class Person
{
public:
	int m_A;			 	 //�Ǿ�̬��Ա����  ������Ķ�����
	static int m_B;			 //��̬��Ա����  ��������Ķ�����
	void func();			 //�Ǿ�̬��Ա����  ��������Ķ�����
	static void func2();	 //��̬��Ա����     ��������Ķ�����
};
int m_B = 10;
void test1()
{
	Person p;
	//�ն���ռ�õ��ڴ�ռ�Ϊ   1 �ֽ�
	//c++���������ÿһ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ռ�λ��  ����������������Ҫ�����Ƿ��䲻ͬ�Ŀռ䣬������������һ���ֽ�
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ

	cout << "sizeof of p = " << sizeof(p) << endl;
}

void test2()
{
	Person p;
	cout << "sizeof of p = " << sizeof(p) << endl;
}
int main()
{
	//test1();
	test2();
	return 0;
}