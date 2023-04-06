#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int n=200;
	float f=1000;
	short a, p;
	float* samples1;
	float* samples2;
	float dt = 1. / f / 20.0;
	const float pi = 3.141592;
	float rr[200];
	float RR[200];
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
	a1_2.read((char*)rr, 12);
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

	//asingment3
	float* rd1;
	float* rd2;
	rd1 = new float[n];
	rd2 = new float[n];
	ifstream ai_2("a.dat", ios::binary | ios::in);
	ai_2.read((char*)rd1, sizeof(rr));

	ifstream bi_2("b.dat", ios::binary | ios::in);
	bi_2.read((char*)rd2, sizeof(RR));

	ofstream a3("c_23.txt");
	for (int i = 0.0; i < n; i++) {
		a3 << i << " " << rd1[i] << " " << rd2[i] << endl;
	}
	a3.close();
	
	return 1;
}