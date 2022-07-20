//由编译器自动分配和释放，存放函数的参数值和局部变量等
//注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
#include <iostream>
using namespace std;
int* Add(int b)
{
	cout << &b << endl;
	int z = 10;
	return &z;
}
int main()
{
	int a = 10, b = 20;
	int* c= Add(1);
	cout << b << endl;
	cout << &a << endl;
	int* p = &a;
	cout << &p << endl;
	cout << *c << endl;
	cout << *c << endl;
	return 0;
}