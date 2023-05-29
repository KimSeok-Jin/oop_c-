#pragma once
class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2), seats(4) {};
	Car(float, int, float);
	void setPrice(float);
	float getPrice();
	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();
	void klaxon(int);
	virtual void oil();
	int seats;
	
	Car& operator+(const Car&);

protected:
	float price;
	void speedUp(float);
	void speedDown(float);	
	float accident;
	void numaccident();
private:

};

