#include <iostream>
using namespace std;

class A
{
public :
	virtual void dynamic_print()
	{
		cout << "���̳�����������\n";
	}

	void static_print()
	{
		cout << "�����������\n";
	}
};

class B : public A
{
public :
	void dynamic_print()
	{
		cout << "�ĵ�ϴ��̳���ä����\n";
	}

	void static_print()
	{
		cout << "��鰳������������\n";
	}

	void static_print(int a)
	{
		cout << a << "����\n";
	}
};

void mian() {
	A* tempA;
	B* tempB = new B();
	tempA = tempB;
	tempA->static_print();
	tempB->static_print();

	tempA->dynamic_print();
	tempB->dynamic_print();
}