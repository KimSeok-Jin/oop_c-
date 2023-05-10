#include <iostream>
#include <fstream>
using namespace std;

class champ {
public:
	champ() { n1 = 0, n2 = 0; a = 1; b = 1; x0 = 1; dx = 1; m = 1; }//아무 초기값
	
	int n1, n2, m;
	float a, b, x0, dx;

	int* f1() {
		int* n;
		n = new int[n2 - n1 + 1];
		for (int i = 0; i < n2 - n1 + 1; i++) {
			n[i] = (n1 + i) * (n1 + i + 1) / 2;
		}
		return n;
	}
	float* f2() {
		float* x;
		x = new float[m];
		for (int i = 0; i < m; i++) {
			if (i == 0) x[0] = a*x0+b;
			else{ 
				x[i] =a*(x0+i*dx)+b;
			}
		}
		return x;
	}
};

int main(){
	champ amumu;
	amumu.n1 = 7; amumu.n2 = 100;
	amumu.a = -3.5; amumu.b = 4; amumu.x0 = 100; amumu.dx = 10; 
	amumu.m = 15;

	ofstream aa("amumu.dat", ios::binary | ios::out);
	int* w1 = amumu.f1();
	float* w2 = amumu.f2();

	/*	
	for(int i=0; i<amumu.m;i++){	//값 확인
		cout << w2[i] << endl;
	}
	*/

	aa.write((char*)&amumu.n1, sizeof(int));
	aa.write((char*)&amumu.n2, sizeof(int));
	aa.write((char*)&amumu.a, sizeof(float));
	aa.write((char*)&amumu.b, sizeof(float));
	aa.write((char*)&amumu.x0, sizeof(float));
	aa.write((char*)&amumu.dx, sizeof(float));
	aa.write((char*)&amumu.m, sizeof(int));
	aa.write((char*)&w1, ((amumu.n1-amumu.n2+1)*sizeof(int)));
	aa.write((char*)&w2, amumu.m*sizeof(float));
	aa.close();


	return 1;
}