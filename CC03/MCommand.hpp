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

// binding -> 프로그램 소스에 쓰인 각종 내부 요소
//			  이름 식별자들에 대해 값 또는 속성을 확정하는 과정
//			  - 정적 바인딩 (static binding)
//					- 바인딩 과정이 컴파일 시점에 이루어지는 바인딩
//					- int main()
//					  {
//							int a = 0;
//					  }
//			  - 동적 바인딩 (dynamic binding)
//					- 바인딩 과정이 프로그램 실행중에 이루어지는 바인딩
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
