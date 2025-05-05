#include "Room.h"
#include <iostream>
#include <math.h>
Room& Room::copy(const Room& o) {
	name = o.name;
	a = o.a;
	b = o.b;
	h = o.h;
	w = o.w;
	return *this;
}
Room& Room::operator=(const Room& o) {
	copy(o);
	return *this;
}
Room& Room::changeName(const std::string& n) {
	name = n;
	return *this;
}
Room& Room::changeWallpaper(Wallpaper w) {
	this->w = w;
	return *this;
}
Room& Room::setA(int a) {
	if (a > 0)
		this->a = a;
	return *this;
}
Room& Room::setB(int b){
	if (b > 0)
		this->b = b;
	return *this;
}
Room& Room::setHeigth(int h){
	if (h > 0)
		this->h = h;
	return *this;
}
double Room::calcWalls() {
	if (w.getName().empty()) return 0; //Возвращаем 0 если на комнату не назначены обои
	double perimeter = 2 * (a + b);
	int stripRoll = std::floor(w.getHeight() / h); //количество полос из одного рулона
	int totalStrips = std::ceil(perimeter / w.getWidth()); //Необходимое количество полос на комнату
	return std::ceil(totalStrips / stripRoll);//Необходимое количество рулонов на комнату
}
double Room::calcCeiling() {
	if (w.getName().empty()) return 0; //Возвращаем 0 если на комнату не назначены обои
	//Предположим что обои будем клеить горизонтально к широкой стороне
	int hC = std::min(a, b); //Условно высота стены потолка)
	int wC = std::max(a, b); //Условно ширина
	int stripRoll = std::floor(w.getHeight() / hC);//количество полос из одного рулона
	int totalStrips = std::ceil(wC / w.getWidth()); //Необходимое количество полос на потолок
	return std::ceil(totalStrips / stripRoll);//Необходимое количество рулонов на потолок
}
Room& Room::showWallpaper(){
	w.show();
	return *this;
}
Room& Room::inputAB() {
	char s;
	std::cout << "Клеить потолок? (y)Да, (n)Нет.";
	std::cin >> s;
	if (s == 'y') fullWalls = true;
	else fullWalls = false; 
	std::string temp;
	std::cout << "Введите ширину комнаты А в см.: ";
	std::getline(std::cin, temp);
	a = std::stoi(temp);
	std::cout << "Введите ширину комнаты B в см.: ";
	std::getline(std::cin, temp);
	b = std::stoi(temp);
	return *this;
}
Room& Room::setWlls(bool f) {
	fullWalls = f;
	return *this;
}