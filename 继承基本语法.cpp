#include <iostream>
using namespace std;

//ʵ����ͨҳ��

////Javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��c++��...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//
//};
//
////Python ҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��c++��...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//
//};
//
////c++ҳ��
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��c++��...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "cppѧ����Ƶ" << endl;
//	}
//
//};
//void test1()
//{
//	cout << "Java ��Ƶҳ������" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "----------------------" << endl;
//
//	cout << "Python ��Ƶҳ������" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//}

//�̳�ʵ��
//�̳еĺô�: �����ظ��Ĵ���
//�﷨  :   class ���� : �̳з�ʽ ����
//����  Ҳ��Ϊ  ������
//����  Ҳ��Ϊ  ����



//����ҳ����
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python��c++��...�����������б�" << endl;
	}
};

//Javaҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Java��Ƶ" << endl;
	}
};
//Pythonҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python��Ƶ" << endl;
	}
};
//CPPҳ��
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "CPP��Ƶ" << endl;
	}
};
void test2()
{
	cout << "Java ��Ƶҳ������" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "----------------------" << endl;

	cout << "Python ��Ƶҳ������" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

}
int main()
{
	//test1();
	test2();
	return 0;
}