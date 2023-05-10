#include <iostream>
#include <fstream>
using namespace std;

class champ {
public:
	champ() { n1 = n2 = a = b = x0 = dx = m = 1; }
	champ(int N1, int N2, float A, float B, float X0, float DX, int M, string SS) {
		n1 = N1;	n2 = N2;
		a = A;	b = B;	x0 = X0;	dx = DX;
		m = M;
		ss = SS;
		filemake();
	}

	int n1, n2, m;
	float a, b, x0, dx;
	string ss;

	int* f1() {
		int* n;
		n = new int[(n2 - n1 + 1)];
		for (int i = 0; i < n2 - n1 + 1; i++) {
			n[i] = (n1 + i) * (n1 + i + 1) / 2;
		}
		return n;
	}
	float* f2() {
		float* x;
		x = new float[m];
		for (int i = 0; i < m; i++) {
			if (i == 0) x[0] = a * x0 + b;
			else {
				x[i] = a * (x0 + i * dx) + b;
			}
		}
		return x;
	}

	void filemake() {
		ofstream outf(ss);
		outf << n1 << endl;
		outf << n2 << endl;
		outf << a << endl;
		outf << b << endl;
		outf << x0 << endl;
		outf << dx << endl;
		outf << m << endl;
		for (int i = 0; i < (n2 - n1 + 1); i++) {
			outf << f1()[i] << endl;
		}
		for (int i = 0; i < m; i++) {
			outf << f2()[i] << endl;
		}
		outf.close();
		
	}
	~champ() {
		delete[] f1();
		delete[] f2();
	}
};

int main() {
	champ akali(5, 10, 2, 3, -5, 0.1, 10,"akali_3.dat");
	return 1;
}