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
		int RollWalls = room.calcWalls();//Рулонов на стены
		int RollCeiling = room.calcCeiling();//Рулонов на потолок
		int ThisPrice = (RollWalls + RollCeiling) * room.getWall().getPriсe(); //Цена рулонов
		std::cout << "\nНеобходимо рулонов на стены: " << room.calcWalls();
		if (RollCeiling)
			std::cout << "\nНеобходимо рулонов на потолок: " << room.calcCeiling();
		std::cout << "\nСтоимость рулонов " << ThisPrice << " руб." << "\n";
		Pricec += ThisPrice;
	}
	
	std::cout << "\n---------------------\n Итоговая стоимость : " 
		<< Pricec << " руб.";

	return *this;
}