//ǰ�õ������ص������ã����õ������ص���ֵ

#include <iostream>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);

public:
	MyInteger()
	{
		m_Num = 0;
	}
	//����ǰ��++�����

	MyInteger& operator++()           //����������Ϊ��һֱ��һ�����ݽ��е�������
	{
		//�Ƚ�������һ��++�Ĳ���
		m_Num++;

		//�ٽ�������һ������
		return *this;
	}
	

	//���غ���++�����
	// 
	//���ص���ֵ���������ã���Ϊtemp�Ǿֲ��������������õĻ� �����ֲ��������ͷ� �ٷ��ʵ�ַ ����ɷǷ�����

	MyInteger operator++(int)             //int ����ռλ����  ��������ǰ�úͺ��õ���      
	{
		//1.�ȼ�¼��ʱ���
		MyInteger temp = *this;
		//2.�ٵ���
		m_Num++;
		//3.�ٷ��ص�ʱ�Ľ��
		return temp;
	}
private:
	int m_Num;
};
//�������������
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}
void test1()
{
	MyInteger myint;
	cout << ++myint << endl;
}
void test2()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	//test1();
	test2();
}