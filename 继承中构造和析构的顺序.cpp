#include <iostream>
using namespace std;

//�̳��й����������˳��
class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯��" << endl;
	}
	~Base()
	{
		cout << "Base����������" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son�Ĺ��캯��" << endl;
	}
	~Son()
	{
		cout << "Son����������" << endl;
	}
};
void test()
{
	//Base b;
	//�̳��еĹ��������˳������
	//�ȹ��츸���ٹ�������
	//������˳���빹���෴
	Son s;
}
int main()
{
	test();
	return 0;
}