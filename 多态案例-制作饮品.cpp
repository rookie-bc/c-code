#include <iostream>
using namespace std;

//多态案例2-制作饮品
class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯子
	virtual void PourInCup() = 0;
	//假如辅助佐料
	virtual void PutSomething() = 0;
	//制作饮品
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
	//煮水
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯子
	virtual void PourInCup()
	{
		cout << "倒入杯子" << endl;
	}
	//假如辅助佐料
	virtual void PutSomething()
	{
		cout << "加糖" << endl;
	}
};

class Tea : public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮百岁山" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯子
	virtual void PourInCup()
	{
		cout << "倒入玻璃杯子" << endl;
	}
	//假如辅助佐料
	virtual void PutSomething()
	{
		cout << "加枸杞" << endl;
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