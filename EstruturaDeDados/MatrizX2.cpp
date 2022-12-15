/*Faça um programa em C++ que solicite ao usuário que digite uma matriz de inteiros (4 x 5), 
em em seguida multiplique os elementos desta matriz por 2 e exiba os dados, da matriz resultante, na tela, 
dispostos em linhas e colunas usando tabulações e quebras-de-linha;*/

#include <iostream>

using namespace std;
const int L = 4;
const int C = 5;
int main () {
	
	int A[L][C];
	
	//Lendo a matriz
	for (int i=0; i<L; i++){
		for (int j=0; j<C; j++){
			cin >> A[i][j];
		}
	}
	
	//Mostrando a matriz
	cout << "\n\n\n";
	for (int i=0; i<L; i++){
		for (int j=0; j<C; j++){
			cout << 2 * A[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}
