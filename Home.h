#pragma once
#include "Wallpaper.h"
#include "Room.h"
class Home
{
private:
	Room* r; //Массив из комнат
	size_t count; //Количество комнат
public:
	Home(Room& r) : r(nullptr), count(0) {
		copyRoom(r);
	}
	//Конструктор по умолчанию
	Home() : r(nullptr), count(0){}
	
	//Деструктор
	~Home() { clear(); }

	Home& copyRoom(const Room& r);
	//Метод очистки указатели
	Home& clear();
	//Метод копирования, plus - для добавления объекта
	Home& copy(const Home& o, int plus = 0);
	//Оператор присвоения
	Home& operator=(const Home& o);
	//Метод добавления комнаты
	Home& addHome(const Home& h);
	//Метод добавления комнаты
	Home& addRoom(const Home& h);
};

