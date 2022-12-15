/*Sabemos que uma imagem pode ser representada por uma matriz de pixels, onde cada pixel
possui 3 valores inteiros (R, G e B), do inglês Red, Green, Blue. Crie uma variável que possa
armazenar uma imagem de 200 pixels de altura e 300 pixels de largura. Utilize matrizes e structs
para isto.*/

#include <iostream>

using namespace std;

struct Pixel {
	short int R; // short = int com um bit
	short int G;
	short int B;
};

int main () {
	Pixel imagem[200][300];
	
	for (int i=0; i<200; i++) {
		for (int j=0; j<300; j++) {
			cin >> imagem[i][j].R >> imagem[i][j].G >> imagem[i][j].B;
		}
	}
	
	for (int i=0; i<200; i++) {
		for (int j=0; j<300; j++) {
			cout << "(" << imagem[i][j].R << ", "<< imagem[i][j].G <<", " << imagem[i][j].B << ")" << "\t";
		}
		cout << endl;
	}
	
	return 0;
}
