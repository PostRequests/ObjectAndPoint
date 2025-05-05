#pragma once
#include <iostream>
#include <string>
class Wallpaper
{
private:
	std::string name; //�������� ������ �����
	unsigned int width; //������ ��
	unsigned int height;//������ ��
	unsigned int price;//����
public:
	Wallpaper() : Wallpaper("", 0, 0, 0) {}
	Wallpaper(const Wallpaper& o) : Wallpaper(o.name, o.width, o.height, o.price) {	}
	Wallpaper(std::string n, int w, int h, double p) : name(n), width(w), height(h), price(p){	}
	//����� �����������
	Wallpaper& copy(const Wallpaper& o);
	//�������� ����������
	Wallpaper& operator=(const Wallpaper& o);
	//����������, ������� ��������� �� ���
	~Wallpaper() { }

	//������� �������������� �����
	Wallpaper& show();
	//������������� ������
	Wallpaper& setWidth(int w);
	//������������� �����
	Wallpaper& setHeight(int h);
	//������������� ����
	Wallpaper& setPrice(double p);
	//���������� ���
	const std::string getName() { return name; };
	//���������� ������.
	int getWidth() { return width; };
	//���������� �����
	int getHeight() { return height; };
	//���������� ����
	int getPri�e() { return price; };
	Wallpaper& input();
};

