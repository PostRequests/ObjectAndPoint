#pragma once
class Wallpaper
{
private:
	char* name; //Название рулона обоев
	unsigned int width; //Ширина см
	unsigned int height;//Длинна см
	double price;//Цена
public:
	Wallpaper() : Wallpaper(nullptr, 0, 0, 0) {}
	Wallpaper(const Wallpaper& o) : Wallpaper(nullptr, o.width, o.height, o.price) {
		changeName(o.name);
	}
	Wallpaper(const char* n, int w, int h, double p) : name(nullptr), width(w), height(h), price(p){
		changeName(n);
	}
	//Метод копирования
	Wallpaper& copy(const Wallpaper& o);
	//Оператор присвоения
	Wallpaper& operator=(const Wallpaper& o);
	//Деструктор, удаляем указатель на имя
	~Wallpaper() { clearName(); }
	//Изменяет имя объекта
	Wallpaper& changeName(const char* n);
	//Очистить указатель на имя
	Wallpaper& clearName();
	//Выводит характеристики обоев
	Wallpaper& show();
	//Устанавливаем ширину
	Wallpaper& setWidth(int w);
	//Устанавливаем длину
	Wallpaper& setHeight(int h);
	//Устанавливаем цену
	Wallpaper& setPrice(double p);
	//Возвращаем имя
	const char* getName() { return name; };
	//Возвращаем ширину.
	int getWidth() { return width; };
	//Возвращаем длину
	int getHeight() { return height; };
	//Возвращаем цену
	int getPriсe() { return price; };
};

