#pragma once
#include "MCommand.hpp"



class JumpCommand : public Musoeun::MCommand
{
public:
	void Excute()
	{
		std::cout << "점프";
	}
};

class RunCommand : public Musoeun::MCommand
{
public:
	void Excute()
	{
		std::cout << "뛰기";
	}
};

class LeftCommand : public Musoeun::MCommand
{
public:
	void Excute()
	{
		std::cout << "왼쪽";
	}
};

class RightCommand : public Musoeun::MCommand
{
public:
	void Excute()
	{
		std::cout << "오른쪽";
	}
};

class DownCommand : public Musoeun::MCommand
{
public:
	void Excute()
	{
		std::cout << "수구리기";
	}
};