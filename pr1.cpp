#include <iostream>
#include <fstream>
using namespace std;

class champ {
public:
	champ();
	champ(int n1, int n2, float a, float b, float x0, float dx, int m) {
		N1 = n1;	N2 = n2;
		A = a;	B = b;	X0 = x0;	DX = dx;	M = m;
	}
	int N1, N2, M;
	float A, B, X0, DX;

	int f1() {
		int n;
		n = N1 + N2;
		return n;
	}
	float f2() {
		float x=X0;
		for (int i = 0; i < M; i++) {
			x += DX;
		}
		return A*x + B;
	}

};

int main(){
	champ akali(5, 10, 2, 3, -5, 0.1, 10);
	ofstream aa("akali.dat", ios::binary | ios::out);
	int w1 = akali.f1();
	float w2 = akali.f2();

	aa.write((char*)&w1, sizeof(w1));
	aa.write((char*)&w2, sizeof(w2));
	aa.close();
	
	ifstream bb("akali.dat", ios::binary | ios::in);
	int r1[1];
	float r2[1];
	bb.read((char*)&r1, sizeof(int));
	bb.read((char*)&r2, sizeof(float));
	bb.close();
	cout << r1[0] << endl;
	cout << r2[0] << endl;
	
	return 1;
}