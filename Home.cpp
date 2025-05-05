#include "Home.h"

Home& Home::copy(const Home& o) {
	rooms = o.rooms;
	return *this;
}
Home& Home:: operator=(const Home& o) {
	copy(o);
	return *this;
}
Home& Home::addHome(const Home& h) {
	/*for (const Room& room : h.rooms) {
		rooms.push_back(room);
	}*/
	return *this;
}
Home& Home::addRoom(const Home& h) {
	addHome(h);
	return*this;
}
Home& Home::copyRoom(const Room& r) {
	rooms.clear();
	rooms.push_back(r);
	return *this;
}

Home& Home::showRoom() {
	int Pricec = 0;
	for (Room& room : rooms) {
		std::cout << std::endl << room.getName();
		int RollWalls = room.calcWalls();//������� �� �����
		int RollCeiling = room.calcCeiling();//������� �� �������
		int ThisPrice = (RollWalls + RollCeiling) * room.getWall().getPri�e(); //���� �������
		std::cout << "\n���������� ������� �� �����: " << room.calcWalls();
		if (RollCeiling)
			std::cout << "\n���������� ������� �� �������: " << room.calcCeiling();
		std::cout << "\n��������� ������� " << ThisPrice << " ���." << "\n";
		Pricec += ThisPrice;
	}
	
	std::cout << "\n---------------------\n �������� ��������� : " 
		<< Pricec << " ���.";

	return *this;
}