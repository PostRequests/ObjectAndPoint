#pragma once
#include <iostream>
#include "Wallpaper.h"
#include "Room.h"
#include <vector>
class Home
{
private:
	std::vector<Room> rooms; //������ �� ������
public:
	Home(Room& r) : rooms() {
		copyRoom(r);
	}
	
	//����������� �� ���������
	Home() : rooms(){}
	
	//����������
	~Home() {  }

	Home& copyRoom(const Room& r);
	//����� �����������, plus - ��� ���������� �������
	Home& copy(const Home& o);
	//�������� ����������
	Home& operator=(const Home& o);
	//����� ���������� �������
	Home& addHome(const Home& h);
	//����� ���������� �������
	Home& addRoom(const Home& h);
	Home& showRoom();
};

