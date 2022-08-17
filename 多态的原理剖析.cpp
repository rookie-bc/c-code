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
	//写一个虚函数的时候，类中会有一个4个字节的虚函数指针（vfptr）指向一个虚函数表（vftable） ，
	// 表的内部记录这个虚函数的地址，（&Animal::speak）（在本类的作用域下）
	//如果继承的子类没有重写这个虚函数，那么子类的内部和父类一摸一样，也是（&Animal::speak）
	//但是如果子类重写了这个虚函数，子类的虚函数表内部会替换成子类的虚函数地址 ，子类的虚函数表记录的地址改变  ，变为（&Cat::speak）


	virtual void speak()


	{
		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

//地址早绑定，编译阶段确定函数地址
//如果想要猫说话，这个函数就不能提前绑定，需要在运行阶段绑定，也就是地址晚绑定void doSpeak(Animal &animal)

void doSpeak(Animal& animal)  //父类的指针或者引用 指向子类对象
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