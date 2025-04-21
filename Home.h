#pragma once
#include "Wallpaper.h"
#include "Room.h"
class Home
{
private:
	Room* r; //������ �� ������
	size_t count; //���������� ������
public:
	Home(Room& r) : r(nullptr), count(0) {
		copyRoom(r);
	}
	//����������� �� ���������
	Home() : r(nullptr), count(0){}
	
	//����������
	~Home() { clear(); }

	Home& copyRoom(const Room& r);
	//����� ������� ���������
	Home& clear();
	//����� �����������, plus - ��� ���������� �������
	Home& copy(const Home& o, int plus = 0);
	//�������� ����������
	Home& operator=(const Home& o);
	//����� ���������� �������
	Home& addHome(const Home& h);
	//����� ���������� �������
	Home& addRoom(const Home& h);
};

