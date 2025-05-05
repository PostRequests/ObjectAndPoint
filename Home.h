#pragma once
#include <iostream>
#include "Wallpaper.h"
#include "Room.h"
#include <vector>
class Home
{
private:
	std::vector<Room> rooms; //Массив из комнат
public:
	Home(Room& r) : rooms() {
		copyRoom(r);
	}
	
	//Конструктор по умолчанию
	Home() : rooms(){}
	
	//Деструктор
	~Home() {  }

	Home& copyRoom(const Room& r);
	//Метод копирования, plus - для добавления объекта
	Home& copy(const Home& o);
	//Оператор присвоения
	Home& operator=(const Home& o);
	//Метод добавления комнаты
	Home& addHome(const Home& h);
	//Метод добавления комнаты
	Home& addRoom(const Home& h);
	Home& showRoom();
};

