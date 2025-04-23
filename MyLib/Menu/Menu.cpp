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
void Menu::show() {
	if (!count) return;
	drawEmptyRectangle2(posX, posY, posX + width, posY + count + 3);
	setCursorPosition(posX + 1, posY + 1);
	centerWord(head.data(), width - 1);
	setCursorPosition(posX, posX + 2);
	system("chcp 866>null");
	printRowChars(width + 1, Board_LV2, Board_H2, Board_RV2);
	system("chcp 1251>null");
	for (int i = 0; i < count; i++)
	{
		setCursorPosition(posX + 1, posY + 3 + i);
		centerWord(elMenu[i].data(), width - 1);
	}
	setCursorPosition(posX + 1, posY + 3 + cur);
	setColor(RedBG);
	centerWord(elMenu[cur].data(), width - 1);
	resetColor();
}