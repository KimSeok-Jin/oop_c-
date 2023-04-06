#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int n = 200;
	float f = 1000;
	short a, p;
	float* samples1;
	float* samples2;
	float dt = 1. / f / 20.0;
	const float pi = 3.141592;
	float* rr;
	rr = new float[n];
	float* RR;
	RR = new float[n];
	samples1 = new float[n];
	samples2 = new float[n];

	//기초값 설정
	a = 30; p = 10;

	//assignment1
	for (int i = 0; i < n; i++) {
		samples1[i] = (float)a * sin(2 * pi * f * i * dt);
	}
	ofstream a1("a.dat", ios::binary | ios::out);
	a1.write((char*)samples1, n * sizeof(float));
	a1.close();

	//assingment2
	ifstream a1_2("a.dat", ios::binary | ios::in);
	a1_2.read((char*)rr, sizeof(float) * n);
	for (int i = 0; i < 3; i++) {
		cout << rr[i] << endl;
	}
	a1_2.close();

	float dt2 = dt;
	f = 200;
	for (int i = 0; i < n; i++) {
		samples2[i] = (float)a * sin(2 * pi * f * i * dt);
	}
	ofstream a2("b.dat", ios::binary | ios::out);
	a2.write((char*)samples2, n * sizeof(float));
	a2.close();

	ifstream a2_2("b.dat", ios::binary | ios::in);
	a2_2.read((char*)RR, sizeof(float) * n);
	a2_2.close();


	//asingment3
	ofstream a3("c_7.txt");
	for (int i = 0.0; i < n; i++) {
		a3 << i << " " << rr[i] << " " << RR[i] << endl;
	}
	a3.close();
	

	return 1;
}