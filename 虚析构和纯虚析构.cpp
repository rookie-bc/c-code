//使用多态时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决方法：将父类中的析构函数改为虚析构或者纯虚析构
// 虚析构或者纯虚析构必须有函数实现
//如果有了纯虚析构，这个类是无法实例化对象的

#include <iostream>
using namespace std;

class Animal
{
public:
	
	Animal()
	{
		cout << "Animal的构造函数调用" << endl;
	}

	//利用虚析构，可以解决  父类指针释放子类对象时不干净的问题
	/*virtual ~Animal()
	{
		cout << "Animal的析构函数调用" << endl;
	}*/
	virtual ~Animal() = 0;
 
	virtual void speak() = 0;


};
Animal::~Animal()
{
	cout << "Animal的纯虚析构函数调用" << endl;
}
class Cat :public Animal
{
public:

	Cat(string name)
	{
		cout << "cat的构造函数调用" << endl;
		m_Name = new string(name);
	}
	
	virtual void speak()
	{
		cout << *m_Name<<"小猫在说话" << endl;
	}
	string *m_Name;
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat的析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
};
void test1()
{
	Animal* animal = new Cat("Tom");
	animal->speak();

	//父类指针在析构的时候，不会调用子类中的析构函数，导致子类如果有堆区属性，会出现内存泄漏，解决办法，在父类析构前加virtual
	delete animal;
}
int main()
{
	test1();
	return 0;
}