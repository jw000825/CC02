#pragma once
namespace Musoeun
{
	class MCommand
	{
	public:
		MCommand() {}
		virtual ~MCommand() {}

		virtual void Execute() {	}
	};
}


// overload
// override
// virtual

// binding -> ���α׷� �ҽ��� ���� ���� ���� ���
//			  �̸� �ĺ��ڵ鿡 ���� �� �Ǵ� �Ӽ��� Ȯ���ϴ� ����
//			  - ���� ���ε� (static binding)
//					- ���ε� ������ ������ ������ �̷������ ���ε�
//					- int main()
//					  {
//							int a = 0;
//					  }
//			  - ���� ���ε� (dynamic binding)
//					- ���ε� ������ ���α׷� �����߿� �̷������ ���ε�
//					- class A
//					  {		virtual void print() {}		}
//					  class B : A
//					  {		overrid void print() {}		}
//					  int main()
//					  {		A* a = new A();
//							a -> print();
// 
//							B* b = new B();
//							a = b;
//							a -> print();
//					  }
