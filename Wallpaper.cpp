#include "Wallpaper.h"
#include <iostream>
Wallpaper& Wallpaper::copy(const Wallpaper& o) {
	changeName(o.name);
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
		<< "Название обоев : " << name << '\n'
		<< "Размер : Ш:" << width << " В:" << height << '\n'
		<< "Цена : " << price << "руб"
		<< "\n----------------------------\n";
	return *this;
}
Wallpaper& Wallpaper::changeName(const char* n) {
	if (!n || (name && strcmp(n, name) == 0)) return *this;
	clearName();
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	return *this;
}
Wallpaper& Wallpaper::clearName() {
	if (name) {
		delete[] name;
		name = nullptr;
	}
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