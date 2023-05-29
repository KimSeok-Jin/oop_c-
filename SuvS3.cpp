#include "SuvS3H.h"
#include <iostream>
void SUV::setSparewheels(int ii) {
	spareWheels = ii;
}
int SUV::getSparewheels() {
	return spareWheels;
};
float SUV::getTotalPrice() {
	return (this->wheels * 100.0 + this->price);
}
void SUV::klaxon(int ii) {
	for (int i = 0; i < ii; i++) {
		std::cout << "Beep\n";
		//numaccident();
	}
}
void SUV::getSeats() {
	seats = 5;
	std::cout << seats << " seats\n";
}
void SUV::knowNO() {
	std::cout << NO<<" it's new car\n";
}
void SUV::oil() {
	std::cout << "Oil: Diesel\n";
}