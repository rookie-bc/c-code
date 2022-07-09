#include <iostream>
using namespace std;
//继承方式 : 1.公共继承（public）       父类的公共，子类还是公共；父类的保护，子类还是保护；父类的私有，子类访问不到
//           2.保护继承（protected）    父类的公共，子类变为保护；父类的保护，子类还是保护；父类的私有，子类访问不到
//           3.私有继承（private）      父类的公共，子类变为私有；父类的保护，子类变为私有；父类的私有，子类访问不到



//1.公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//父类的公共权限成员，到子类中依然是公共权限
		m_B = 10;//父类的保护权限成员，到子类中依然是保护权限
		//m_C = 10;//父类的私有权限成员，子类访问不到
	}
};
void test1()
{
	Son1 s1;
	s1.m_A = 100;//不报错，因为Son1是公共继承，继承父类的公共权限成员后依然为公共权限，所以类外可以访问
	//s1.m_B = 100;//报错，因为父类中的m_B是保护权限，公共继承后，仍然为保护权限，类外不可以访问
}

//2.保护继承
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 10;   //父类公共成员，到子类变为保护权限
		m_B = 10;   //父类保护成员，到子类变为保护权限
		//m_C = 10;  //父类私有成员，子类访问不到
	}
};

void test2()
{
	Son2 s2;
	//s2.m_A = 10;        //父类公共成员，到子类变为保护权限    类外访问不到
	//s2.m_B = 10;		//父类保护成员，到子类变为保护权限    类外访问不到
}

//3.私有继承
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 10;         //父类公共成员，到子类变为私有权限
		m_B = 10;         //父类保护成员，到子类变为私有权限
		//m_C = 10;       //父类私有成员，子类访问不到
	}
	
};
class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 10;   //因为Son3继承方式是私有继承，所以Son3中的属性全部变为私有属性，再让GrandSon3继承Son3是继承不了私有属性的
		//m_B = 10;
		//m_C = 10;
	}
};
void test3()
{
	Son3 s3;
	//s3.m_A = 10;       //父类公共成员，到子类变为私有权限    类外访问不到
	//s3.m_B = 10;       //父类公共成员，到子类变为私有权限    类外访问不到
}
int main()
{
	return 0;
}