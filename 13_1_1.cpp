#include <iostream>
using namespace std;
#include "CarS3H.h"
#include "SuvS3H.h"
int main() {
	SUV* newSUV = new SUV();
	newSUV->setPrice(5000);
	//cout << " price " << newSUV->price << "\n";
	cout << " price " << newSUV->getPrice() << "\n";

	newSUV->setSparewheels(2);
	std::cout << "Spare wheels are " << newSUV->getSparewheels() << std::endl;

	cout << newSUV->seats <<" seats" << endl;
	newSUV->knowNO();

	delete newSUV;

	Car cars[5];  // blank constructor
	for (int i = 0; i < 5; i++) {
		std::cout << cars[i].speed << "  " << (cars + i)->getPrice() << "\n";
	}

	cars[2] = Car(100.0, 4, 45000.0); // constructor withargument
	std::cout << cars[2].speed << "  " << (cars + 2)->getPrice() << "\n";

	Car* car1;
	car1 = new Car();
	// public member data
	car1->wheels = 4;
	std::cout << " car1->wheels " << car1->wheels << "\n";
	car1->setWheels(3);
	std::cout << " car1->wheels " << car1->wheels << "\n";
	// private member data
	//car1->price = 4500.0;
	//std::cout << " car1->price " << car1->price << "\n";
	car1->setPrice(45000);
	std::cout << " car1->price " << car1->getPrice() << "\n";
	// private member function
	car1->speed = 0.0;
	//car1->speedUp(40.0);
	car1->speedChange(100.0);
	std::cout << " car1->speed " << car1->speed << "\n";
	//car1->numaccident();
	//cout << car1->accident << endl;
	cout << car1->seats << endl;

	return 0;
}
