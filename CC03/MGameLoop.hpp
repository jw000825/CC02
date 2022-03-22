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

		//std::cout << "�ʱ�ȭ ��...\n";
	}

	void input()
	{
		int input;
		std::cin >> input;

		key[input]->Execute();

		//std::cout << "�Է� ��...\n";
	}

	void Update()
	{
		//std::cout << "������Ʈ ��...\n";
	}

	void Render()
	{
		//std::cout << "���� ��...\n";
	}

	void Release()
	{
		//std::cout << "���� ��...\n";
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