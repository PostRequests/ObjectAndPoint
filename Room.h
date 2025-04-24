#pragma once
#include <iostream>
#include "Wallpaper.h"
class Room
{
private:
	int a; //������� �
	int b; //������� �
	int h; //������ �������
	Wallpaper w; //������������ ����
	char* name;
	bool fullWalls;
public:
	Room() : Room(nullptr,0,0,0, Wallpaper(nullptr, 0, 0, 0)){}
	Room(Room& o) : Room(o.name, o.a, o.b, o.h, o.w) {}
	Room(const char* n, int a, int b, int h) : Room(n, a, b, h, Wallpaper(nullptr, 0, 0, 0)) {}
	Room(const char* n, int a, int b, int h, Wallpaper w) : name(nullptr), a(a), b(b), h(h), w(w), fullWalls(false){
		changeName(n);
	}
	~Room() { clearName(); }
	//����� �����������
	Room& copy(const Room& o);
	//�������� �����������
	Room& operator=(const Room& o);
	//�������� ����� �����
	Room& changeWallpaper(Wallpaper w);
	//�������� ���
	Room& changeName(const char* n);
	//�������� ��������� �����
	Room& clearName();
	//�������� ������ ������� A
	int getA() { return a; }
	//�������� ������ ������� �
	int getB(){ return b; }
	//�������� ������ �������
	int getH() { return h; }
	//���������� ������ ��  ����
	Wallpaper& getWall() { return w; }
	const char* getName() { return name; }
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

