#include <iostream>
using namespace std;

class A
{
public :
	virtual void dynamic_print()
	{
		cout << "다이나믹조아하하\n";
	}

	void static_print()
	{
		cout << "대면조아하하\n";
	}
};

class B : public A
{
public :
	void dynamic_print()
	{
		cout << "후디니다이나믹채고야\n";
	}

	void static_print()
	{
		cout << "대면개조아하하하하\n";
	}

	void static_print(int a)
	{
		cout << a << "ㅎㅎ\n";
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