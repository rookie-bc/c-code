#include <iostream>
using namespace std;
//����������������� ����

class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void test1() 
{
	MyPrint myPrint;
	myPrint("HElloWorld");       //��Ϊ�������������֮��ǳ������ں�������˳�Ϊ�º���
}
//���ڷº����ǳ���û�й̶���д��
//�ӷ���
class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test2()
{
	MyAdd myAdd;
	int res = myAdd(100, 200);
	cout << "res = " << res << endl;

	//������������
	cout << MyAdd()(100, 200) << endl;
}
int main()
{
	//test1();
	test2();
	return 0;
}