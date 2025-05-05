#pragma once
#include <iostream>
#include "Wallpaper.h"
#include <string>
class Room
{
private:
	int a; //������� �
	int b; //������� �
	int h; //������ �������
	Wallpaper w; //������������ ����
	std::string name;
	bool fullWalls;
public:
	Room() : Room("", 0, 0, 0, Wallpaper("", 0, 0, 0)) {}
	Room(const Room& o) : Room(o.name, o.a, o.b, o.h, o.w) {}
	Room(const std::string& n, int a, int b, int h) : Room(n, a, b, h, Wallpaper("", 0, 0, 0)) {}
	Room(const std::string n, int a, int b, int h, Wallpaper w) : name(n), a(a), b(b), h(h), w(w), fullWalls(false){	}
	~Room() {  }
	//����� �����������
	Room& copy(const Room& o);
	//�������� �����������
	Room& operator=(const Room& o);
	//�������� ����� �����
	Room& changeWallpaper(Wallpaper w);
	//�������� ���
	Room& changeName(const std::string& n);
	//�������� ������ ������� A
	int getA() { return a; }
	//�������� ������ ������� �
	int getB(){ return b; }
	//�������� ������ �������
	int getH() { return h; }
	//���������� ������ ��  ����
	Wallpaper& getWall() { return w; }
	const std::string& getName() { return name; }
	//���������� ������ �
	Room& setA(int a);
	//���������� ������ �
	Room& setB(int b);
	//���������� ������
	Room& setHeigth(int h);
	//������������ ����������� ������ ����� �� ������
	double calcWalls();
	//������������ ����������� ������ ����� �������
	double calcCeiling();
	Room& showWallpaper();
	//������ ���� ������ ������
	Room& inputAB();
	Room& setWlls(bool f);
};

