#include <iostream>
#include <string>
using namespace std;

//分别利用普通写法和多态写法实现计算器

//1.普通写法
class Calculator
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//如果想要扩展新的功能，需要修改源码
		//在真实的开发环境中， 提倡  开闭原则
		//开闭原则：对扩展进行开放，对修改进行关闭
	}

	int m_Num1;
	int m_Num2;
};
void test1()
{
	Calculator c;
	c.m_Num1 = 10, c.m_Num2 = 10;
	cout << c.m_Num1 << '+' << c.m_Num2 << '=' << c.getResult("+") << endl;
	cout << c.m_Num1 << '-' << c.m_Num2 << '=' << c.getResult("-") << endl;
	cout << c.m_Num1 << '*' << c.m_Num2 << '=' << c.getResult("*") << endl;
}

//2.利用多态实现计算器

//多态的优点
//1.组织结构清晰
//2.可读性强
//3.对于前期和后期的扩展维护性很高

//实现计算机抽象类
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//减法计算器类
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//乘法计算器类
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test2()
{
	//多态使用条件
	//父类指针或者引用指向子类对象
	
	//加法运算
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 100, abc->m_Num2 = 100;
	cout << abc->m_Num1 << '+' << abc->m_Num2 << '=' << abc->getResult() << endl;
	delete abc;//堆区数据用完记得销毁

	//减法运算
	abc = new SubCalculator;
	abc->m_Num1 = 100, abc->m_Num2 = 100;
	cout << abc->m_Num1 << '-' << abc->m_Num2 << '=' << abc->getResult() << endl;
	delete abc;//堆区数据用完记得销毁


}
int main()
{
	test1();
	test2();
	return 0;
}