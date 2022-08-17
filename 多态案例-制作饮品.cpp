#include <iostream>
using namespace std;

//��̬����2-������Ʒ
class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//���縨������
	virtual void PutSomething() = 0;
	//������Ʒ
	void dodrinking()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee : public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	//���縨������
	virtual void PutSomething()
	{
		cout << "����" << endl;
	}
};

class Tea : public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "�����ɽ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "���벣������" << endl;
	}
	//���縨������
	virtual void PutSomething()
	{
		cout << "�����" << endl;
	}
};
void doWork(AbstractDrinking * abs)
{
	abs->dodrinking();
	delete abs;
}
void test1()
{
	doWork(new Coffee);
	cout << "-----------------" << endl;
	doWork(new Tea);
}
int main()
{
	test1();
	return 0;
}