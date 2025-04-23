#include "Menu.h"
Menu& Menu::addItem(std::string el, std::function<void()> f){
	if (!el.empty() && f && !visible) {
		elMenu.push_back(el);
		func.push_back(f);
		count++;
		calcWidth(el);
}
	return*this;
}
Menu& Menu::setHead(std::string h) {
	if (!h.empty() && !visible) {
		head = h;
		calcWidth(h);
	}
	return*this;
}
void Menu::drawBorder() {
	system("chcp 1251> nul");
	setCursorPosition(posX, posY);
	std::cout << Board_LT2;
	for (int i = 0; i < length; i++)
	{

	}
}