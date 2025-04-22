#pragma once
#include <string>
#include <vector>
#include <functional>
#include <iostream>
class Menu
{
private:
	int posX;
	int posY;
	int cur;
	int count;
	int width;
	std::string head;
	std::vector<std::string> elMenu;
	std::vector<std::function<void()>> functions;
public:
	Menu() : posX(1), posY(1), cur(0), count(0), width(0), head(), elMenu(), functions() {}
};
