#include <iostream>
using namespace std;

//�̳��еĶ���ģ��
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class son :public Base
{
public:
	int m_D;
};
void test1()
{
	//16
	//�����е����еķǾ�̬��Ա���ԣ����ᱻ����̳���ȥ
	//������˽�г�Ա���ԣ��Ǳ������������ˣ���˷��ʲ���������ȷʵ���̳���ȥ�� 
	cout << "size of son��" << sizeof(son) << endl;
}
int main()
{
	test1();
	return 0;
}