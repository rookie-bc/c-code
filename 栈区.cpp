//�ɱ������Զ�������ͷţ���ź����Ĳ���ֵ�;ֲ�������
//ע�������Ҫ���ؾֲ������ĵ�ַ��ջ�����ٵ������ɱ������Զ��ͷ�
#include <iostream>
using namespace std;
int* Add(int b)
{
	cout << &b << endl;
	int z = 10;
	return &z;
}
int main()
{
	int a = 10, b = 20;
	int* c= Add(1);
	cout << b << endl;
	cout << &a << endl;
	int* p = &a;
	cout << &p << endl;
	cout << *c << endl;
	cout << *c << endl;
	return 0;
}