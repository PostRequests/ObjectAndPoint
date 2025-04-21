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
	int lasRooms = count;
	copy(*this);
	for (size_t i = lasRooms; i < h.count; i++)
		this->r[i] = h.r[i - lasRooms];
	return *this;
}
Home& Home::copyRoom(const Room& r) {
	clear();
	this->r = new Room[1];
	this->r[0] = r;
	this->count = 1;
	return *this;
}
Home& Home::addRoom(const Home& h) { 
	addHome(h); 
	return* this;
}