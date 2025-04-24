#include "Home.h"
Home& Home::clear() {
	if (r) {
		delete[] r;
		r = nullptr;
		count = 0;
	}
	return *this;
}
Home& Home::copy(const Home& o) {
	clear();
	r = new Room[o.count];
	for (size_t i = 0; i < o.count; i++)
		r[i] = o.r[i];
	count = o.count;
	return *this;
}
Home& Home:: operator=(const Home& o) {
	copy(o);
	return *this;
}
Home& Home::addHome(const Home& h) {
	Room* temp = new Room[count + h.count];
	for (size_t i = 0; i < count; i++)
		temp[i] = r[i];
	for (size_t i = count; i < count + h.count; i++)
		temp[i] = h.r[i - count];
	int perC = count;
	clear();
	r = temp;
	count = perC + h.count;
	return *this;
}
Home& Home::addRoom(const Home& h) {
	addHome(h);
	return*this;
}
Home& Home::copyRoom(const Room& r) {
	clear();
	this->r = new Room[1];
	this->r[0] = r;
	this->count = 1;
	return *this;
}

Home& Home::showRoom() {
	int Pricec = 0;
	for (size_t i = 0; i < count; i++)
	{
		std::cout <<  std::endl << r[i].getName();
		int RollWalls = r[i].calcWalls();//������� �� �����
		int RollCeiling = r[i].calcCeiling();//������� �� �������
		int ThisPrice = (RollWalls + RollCeiling)* r[i].getWall().getPri�e(); //���� �������
		std::cout << "\n���������� ������� �� �����: " << r[i].calcWalls();
		if(RollCeiling)
			std::cout << "\n���������� ������� �� �������: " << r[i].calcCeiling() ;
		std::cout << "\n��������� ������� " << ThisPrice << " ���." << "\n";
		Pricec += ThisPrice;
	}
	std::cout << "\n---------------------\n �������� ��������� : " 
		<< Pricec << " ���.";

	return *this;
}