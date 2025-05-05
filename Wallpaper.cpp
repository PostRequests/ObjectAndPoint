#include "Wallpaper.h"
Wallpaper& Wallpaper::copy(const Wallpaper& o) {
	name = o.name;
	width = o.width;
	height = o.height;
	price = o.price;
	return* this;
}
Wallpaper& Wallpaper::operator=(const Wallpaper& o) {
	copy(o);
	return *this;
}
Wallpaper& Wallpaper::show() {
	std::cout << "\n----------------------------\n"
		<< "�������� ����� : " << name << '\n'
		<< "������ : �:" << width << " �:" << height << '\n'
		<< "���� : " << price << "���"
		<< "\n----------------------------\n";
	return *this;
}

Wallpaper& Wallpaper::setWidth(int w) {
	if (w > 0)
		width = w;
	return* this;
}
Wallpaper& Wallpaper::setHeight(int h) {
	if (h > 0)
		height = h;
	return *this;
}
Wallpaper& Wallpaper::setPrice(double p) {
	if (p > 0)
		price = p;
	return *this;
}
Wallpaper& Wallpaper::input() {
	std::cout << "\n������� �������� �����: ";
	std::string temp;
	std::getline(std::cin, temp);
	name = temp;
	std::cout << "������� ������ ����� � ��.: ";
	std::getline(std::cin, temp);
	width = std::stoi(temp);
	std::cout << "������� ����� ����� � ��.: ";
	std::getline(std::cin, temp);
	height = std::stoi(temp);
	std::cout << "������� ���� ����� � ���.: ";
	std::getline(std::cin, temp);
	price = std::stoi(temp);
	return *this;
}