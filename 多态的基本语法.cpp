//��̬��Ϊ��̬��̬�Ͷ�̬��̬
//��̬��̬���������غ���������أ���������̬��
//��̬��̬����������麯��ʵ������ʱ��̬
//��̬��̬�Ͷ�̬��̬������
//��̬��̬�ĵ�ַ��󶨣�����׶�ȷ��������ַ  ������̬��̬�ĵ�ַ��󶨣����н׶�ȷ��������ַ

#include <iostream>
using namespace std;

//c++��������֮���ת��

//��̬��̬����������
//1.�м̳й�ϵ
//2.����Ҫ��д������麯��

//��̬��̬��ʹ��
//1.�����ָ��������� ָ���������


class Animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

class Cat:public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

//��ַ��󶨣�����׶�ȷ��������ַ
//�����Ҫè˵������������Ͳ�����ǰ�󶨣���Ҫ�����н׶ΰ󶨣�Ҳ���ǵ�ַ���void doSpeak(Animal &animal)

void doSpeak(Animal &animal)  //�����ָ��������� ָ���������
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);
}
int main()
{
	test01();
	return 0;
}