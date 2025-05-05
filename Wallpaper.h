#pragma once
#include <iostream>
#include <string>
class Wallpaper
{
private:
	std::string name; //Название рулона обоев
	unsigned int width; //Ширина см
	unsigned int height;//Длинна см
	unsigned int price;//Цена
public:
	Wallpaper() : Wallpaper("", 0, 0, 0) {}
	Wallpaper(const Wallpaper& o) : Wallpaper(o.name, o.width, o.height, o.price) {	}
	Wallpaper(std::string n, int w, int h, double p) : name(n), width(w), height(h), price(p){	}
	//Метод копирования
	Wallpaper& copy(const Wallpaper& o);
	//Оператор присвоения
	Wallpaper& operator=(const Wallpaper& o);
	//Деструктор, удаляем указатель на имя
	~Wallpaper() { }

	//Выводит характеристики обоев
	Wallpaper& show();
	//Устанавливаем ширину
	Wallpaper& setWidth(int w);
	//Устанавливаем длину
	Wallpaper& setHeight(int h);
	//Устанавливаем цену
	Wallpaper& setPrice(double p);
	//Возвращаем имя
	const std::string getName() { return name; };
	//Возвращаем ширину.
	int getWidth() { return width; };
	//Возвращаем длину
	int getHeight() { return height; };
	//Возвращаем цену
	int getPriсe() { return price; };
	Wallpaper& input();
};

