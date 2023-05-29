#pragma once
#include "CarS3H.h"
class SUV : public Car {
private:
	int spareWheels;
	bool NO;
	
public:
	SUV() { NO = 1; seats = 5; };
	void klaxon(int);
	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
	void getSeats();
	void knowNO();
	void oil();
};

