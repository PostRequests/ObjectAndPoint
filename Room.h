#pragma once
#include "Wallpaper.h"
class Room
{
private:
	int a; //Сторона А
	int b; //Сторона Б
	int h; //Высота комнаты
	Wallpaper w; //Используемые обои
	char* name;
public:
	Room() : Room(nullptr,0,0,0, Wallpaper(nullptr, 0, 0, 0)){}
	Room(Room& o) : Room(o.name, o.a, o.b, o.h, o.w) {}
	Room(const char* n, int a, int b, int h) : Room(n, a, b, h, Wallpaper(nullptr, 0, 0, 0)) {}
	Room(const char* n, int a, int b, int h, Wallpaper w) : name(nullptr), a(a), b(b), h(h), w(w) {
		changeName(n);
	}
	~Room() { clearName(); }
	//Метод копирования
	Room& copy(const Room& o);
	//Оператор копирования
	Room& operator=(const Room& o);
	//Оператор смены обоев
	Room& changeWallpaper(Wallpaper w);
	//Изменить имя
	Room& changeName(const char* n);
	//Очистить указатель имени
	Room& clearName();
	//Получить ширину стороны A
	int getA() { return a; }
	//Получить ширину стороны Б
	int getB(){ return b; }
	//Получить высоту комнаты
	int getH() { return h; }
	//Установить ширину А
	Room& setA(int a);
	//Установить ширину Б
	Room& setB(int b);
	//Установить высоту
	Room& setH(int h);
	//Рассчитываем необходимый размер обоев по ширине
	double calcWalls();
	//Рассчитываем необходимый размер обоев потолок
	double calcCeiling();
};

