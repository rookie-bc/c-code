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
	//дһ���麯����ʱ�����л���һ��4���ֽڵ��麯��ָ�루vfptr��ָ��һ���麯����vftable�� ��
	// ����ڲ���¼����麯���ĵ�ַ����&Animal::speak�����ڱ�����������£�
	//����̳е�����û����д����麯������ô������ڲ��͸���һ��һ����Ҳ�ǣ�&Animal::speak��
	//�������������д������麯����������麯�����ڲ����滻��������麯����ַ ��������麯�����¼�ĵ�ַ�ı�  ����Ϊ��&Cat::speak��


	virtual void speak()


	{
		cout << "������˵��" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

//��ַ��󶨣�����׶�ȷ��������ַ
//�����Ҫè˵������������Ͳ�����ǰ�󶨣���Ҫ�����н׶ΰ󶨣�Ҳ���ǵ�ַ���void doSpeak(Animal &animal)

void doSpeak(Animal& animal)  //�����ָ��������� ָ���������
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);
}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}