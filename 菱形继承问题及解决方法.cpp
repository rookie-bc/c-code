//两个子类继承同一个父类，又有某个类，同时继承这两个子类，被称为菱形继承或者钻石继承

#include <iostream>
using namespace std;

//动物类
class Animal
{
public:
	int m_Age;
};
//羊类   利用虚继承解决菱形继承的问题
//在继承之前加上关键字  virtual变为虚继承
//Animal 类称为  虚基类                               底层实现  继承的不是两份数据，而是两份指针，指针指向同一份数据
class Sheep : virtual public Animal
{

};
//驼类	利用虚继承解决菱形继承的问题
class Tuo :virtual public Animal
{

};
//羊驼类
class SheepTuo :public Sheep, public Tuo
{

};
void test1()
{
	SheepTuo st;
	
	//st.m_Age = 18;//继承了两份m_Age，会造成二义性，不明确所以要加作用域
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//当菱形继承时，两个父类拥有相同名字的属性， 需要加以作用域区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

	//这份数据我们知道，只要有一份就可以了，菱形继承导致数据有两份，资源浪费
	//如果使用了虚继承，这份数据就只有一份了，
	cout << "st.m_Age = " << st.m_Age << endl;    //因为使用了虚继承，数据只有一份，所以不存在不明确的问题
}
int main()
{
	test1();
	return 0;
}