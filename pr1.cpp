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
	champ akali;
	akali.n1 = 5; akali.n2 = 10;
	akali.a = 2; akali.b = 3; akali.x0 = -5; akali.dx = 0.1; 
	akali.m = 10;

	ofstream aa("akali.dat", ios::binary | ios::out);
	aa << akali.n1 << endl;
	aa << akali.n2 << endl;
	aa << akali.a << endl;
	aa << akali.b << endl;
	aa << akali.x0 << endl;
	aa << akali.dx << endl;
	aa << akali.m << endl;
	for (int i = 0; i < (akali.n2 - akali.n1 + 1); i++) {
		aa << akali.f1()[i] << endl;
	}
	for (int i = 0; i < (akali.m); i++) {
		aa << akali.f2()[i] << endl;
	}
	aa.close();

	return 1;
}