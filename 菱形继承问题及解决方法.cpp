//��������̳�ͬһ�����࣬����ĳ���࣬ͬʱ�̳����������࣬����Ϊ���μ̳л�����ʯ�̳�

#include <iostream>
using namespace std;

//������
class Animal
{
public:
	int m_Age;
};
//����   ������̳н�����μ̳е�����
//�ڼ̳�֮ǰ���Ϲؼ���  virtual��Ϊ��̳�
//Animal ���Ϊ  �����                               �ײ�ʵ��  �̳еĲ����������ݣ���������ָ�룬ָ��ָ��ͬһ������
class Sheep : virtual public Animal
{

};
//����	������̳н�����μ̳е�����
class Tuo :virtual public Animal
{

};
//������
class SheepTuo :public Sheep, public Tuo
{

};
void test1()
{
	SheepTuo st;
	
	//st.m_Age = 18;//�̳�������m_Age������ɶ����ԣ�����ȷ����Ҫ��������
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//�����μ̳�ʱ����������ӵ����ͬ���ֵ����ԣ� ��Ҫ��������������
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

	//�����������֪����ֻҪ��һ�ݾͿ����ˣ����μ̳е������������ݣ���Դ�˷�
	//���ʹ������̳У�������ݾ�ֻ��һ���ˣ�
	cout << "st.m_Age = " << st.m_Age << endl;    //��Ϊʹ������̳У�����ֻ��һ�ݣ����Բ����ڲ���ȷ������
}
int main()
{
	test1();
	return 0;
}