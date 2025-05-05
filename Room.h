#pragma once
#include <iostream>
#include "Wallpaper.h"
#include <string>
class Room
{
private:
	int a; //Сторона А
	int b; //Сторона Б
	int h; //Высота комнаты
	Wallpaper w; //Используемые обои
	std::string name;
	bool fullWalls;
public:
	Room() : Room("", 0, 0, 0, Wallpaper("", 0, 0, 0)) {}
	Room(const Room& o) : Room(o.name, o.a, o.b, o.h, o.w) {}
	Room(const std::string& n, int a, int b, int h) : Room(n, a, b, h, Wallpaper("", 0, 0, 0)) {}
	Room(const std::string n, int a, int b, int h, Wallpaper w) : name(n), a(a), b(b), h(h), w(w), fullWalls(false){	}
	~Room() {  }
	//Метод копирования
	Room& copy(const Room& o);
	//Оператор копирования
	Room& operator=(const Room& o);
	//Оператор смены обоев
	Room& changeWallpaper(Wallpaper w);
	//Изменить имя
	Room& changeName(const std::string& n);
	//Получить ширину стороны A
	int getA() { return a; }
	//Получить ширину стороны Б
	int getB(){ return b; }
	//Получить высоту комнаты
	int getH() { return h; }
	//Возвращает ссылку на  обои
	Wallpaper& getWall() { return w; }
	const std::string& getName() { return name; }
	//Установить ширину А
	Room& setA(int a);
	//Установить ширину Б
	Room& setB(int b);
	//Установить высоту
	Room& setHeigth(int h);
	//Рассчитываем необходимый размер обоев по ширине
	double calcWalls();
	//Рассчитываем необходимый размер обоев потолок
	double calcCeiling();
	Room& showWallpaper();
	//Ручной ввод ширины комнат
	Room& inputAB();
	Room& setWlls(bool f);
};

