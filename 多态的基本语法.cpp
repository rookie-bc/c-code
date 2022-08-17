//多态分为静态多态和动态多态
//静态多态：函数重载和运算符重载，（多种形态）
//动态多态：派生类和虚函数实现运行时多态
//静态多态和动态多态的区别：
//静态多态的地址早绑定，编译阶段确定函数地址  ，，动态多态的地址晚绑定，运行阶段确定函数地址

#include <iostream>
using namespace std;

//c++中允许父子之间的转换

//动态多态的满足条件
//1.有继承关系
//2.子类要重写父类的虚函数

//动态多态的使用
//1.父类的指针或者引用 指向子类对象


class Animal
{
public:
	//虚函数
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

class Cat:public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

//地址早绑定，编译阶段确定函数地址
//如果想要猫说话，这个函数就不能提前绑定，需要在运行阶段绑定，也就是地址晚绑定void doSpeak(Animal &animal)

void doSpeak(Animal &animal)  //父类的指针或者引用 指向子类对象
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