//ʹ�ö�̬ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//����������������е�����������Ϊ���������ߴ�������
// ���������ߴ������������к���ʵ��
//������˴�����������������޷�ʵ���������

#include <iostream>
using namespace std;

class Animal
{
public:
	
	Animal()
	{
		cout << "Animal�Ĺ��캯������" << endl;
	}

	//���������������Խ��  ����ָ���ͷ��������ʱ���ɾ�������
	/*virtual ~Animal()
	{
		cout << "Animal��������������" << endl;
	}*/
	virtual ~Animal() = 0;
 
	virtual void speak() = 0;


};
Animal::~Animal()
{
	cout << "Animal�Ĵ���������������" << endl;
}
class Cat :public Animal
{
public:

	Cat(string name)
	{
		cout << "cat�Ĺ��캯������" << endl;
		m_Name = new string(name);
	}
	
	virtual void speak()
	{
		cout << *m_Name<<"Сè��˵��" << endl;
	}
	string *m_Name;
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat��������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
};
void test1()
{
	Animal* animal = new Cat("Tom");
	animal->speak();

	//����ָ����������ʱ�򣬲�����������е�����������������������ж������ԣ�������ڴ�й©������취���ڸ�������ǰ��virtual
	delete animal;
}
int main()
{
	test1();
	return 0;
}