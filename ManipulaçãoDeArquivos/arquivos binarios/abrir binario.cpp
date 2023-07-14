#include <iostream>
#include <fstream>
using namespace std;
int main () {
	ifstream fin;
	fin.open("dados.bin", ios::binary);
	if (!fin) {
	cout << "Erro ao abrir o arquivo.";
	return 0;
	}
	int w;
	float x;
	int y[3];
	char z[20];
	fin.read ( (char *)&w, sizeof(w) ); // read ler o arquivo;
	fin.read ( (char *)&x, sizeof(x) );
	fin.read ( (char *)y, sizeof(y) ); // y já é vetor não precisa ser referenciado, ou seja, não precisa do &;
	fin.read ( z, sizeof(z) ); // z já é um char, ou seja, não precisa informar char antes;
	fin.close();
	cout << w << "\n" << x << "\n";
	cout << y[0] << " " << y[1] << " " << y[2] <<"\n";
	cout <<z;
	return 0;
}
