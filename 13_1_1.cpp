#include <iostream>
#include "CarS3H.h"
#include "SuvS3H.h"
using namespace std;
int main() {
	SUV* newSUV = new SUV();
	//newSUV->setPrice(5000);
	//cout << " price " << newSUV->price << "\n";
	//cout << " price " << newSUV->getPrice() << "\n";

	//newSUV->setSparewheels(2);
	//std::cout << "Spare wheels are " << newSUV->getSparewheels() << std::endl;

	//cout << newSUV->seats <<" seats" << endl;

	//newSUV->knowNO();
	newSUV->klaxon(4);
	
	Car cars[5];  // blank constructor
	//for (int i = 0; i < 5; i++) {
	//	std::cout << cars[i].speed << "  " << (cars + i)->getPrice() << "\n";
	//}

	//cars[2] = Car(100.0, 4, 45000.0); // constructor withargument
	//std::cout << cars[2].speed << "  " << (cars + 2)->getPrice() << "\n";

	Car* car1;
	car1 = new Car();
	// public member data
	car1->wheels = 4;
	//std::cout << " car1->wheels " << car1->wheels << "\n";
	car1->setWheels(3);
	//std::cout << " car1->wheels " << car1->wheels << "\n";
	// private member data
	//car1->price = 4500.0;
	//std::cout << " car1->price " << car1->price << "\n";
	//car1->setPrice(45000);
	//std::cout << " car1->price " << car1->getPrice() << "\n";
	// private member function
	car1->speed = 0.0;
	//car1->speedUp(40.0);
	car1->speedChange(100.0);
	//std::cout << " car1->speed " << car1->speed << "\n";

	//car1->numaccident();
	//std::cout << car1->accident << endl;

	//std::cout << car1->seats << endl;
	car1->klaxon(5);

	car1->oil();
	newSUV->oil();
	delete newSUV;
	delete car1;


	Car car2= Car(100, 4, 500);
	Car car3= Car(150, 4, 800);
	Car car4 = car2+car3;
	

	std::cout << car4.wheels << endl;
	std::cout<<car4.getPrice();

	return 0;
}
