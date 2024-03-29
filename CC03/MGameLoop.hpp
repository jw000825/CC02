#pragma once

namespace Musoeun
{
	MCommand* key[5];

	void intialize()
	{
		key[0] = new LeftCommand();
		key[1] = new RightCommand();
		key[2] = new DownCommand();
		key[3] = new JumpCommand();
		key[4] = new RunCommand();

		//std::cout << "초기화 중...\n";
	}

	void input()
	{
		int input;
		std::cin >> input;

		key[input]->Execute();

		//std::cout << "입력 중...\n";
	}

	void Update()
	{
		//std::cout << "업데이트 중...\n";
	}

	void Render()
	{
		//std::cout << "렌더 중...\n";
	}

	void Release()
	{
		//std::cout << "삭제 중...\n";
		for (size_t i = 0; i < 5; i++)
		{
			delete(key[i]);
		}
		
	}

	class MGameLoop
	{
	public:
		bool isGameRunning = false;
		MGameLoop() {}
		~MGameLoop() {}

		void Run()
		{
			isGameRunning = true;

			intialize();

			while (isGameRunning)
			{
				input();
				Update();
				Render();
			}
			Release();
		}
	};
}