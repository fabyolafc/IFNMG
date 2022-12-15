/*Fa�a um programa em C++ que solicite ao usu�rio que digite uma matriz de inteiros (3 x 3), em
seguida o programa exibir� na tela qual o determinante desta matriz.
DICA: veja como � feito o c�lculo do determinante de uma matriz 3 x 3 no v�deo:
[ https://www.youtube.com/watch?v=XaZZNxj26qU ].*/

#include <iostream>

using namespace std;
const int L = 3;
const int C = 3;
int main () {
	
	int A[L][C], d;
	
	//Lendo a matriz
	for (int i=0; i<L; i++){
		for (int j=0; j<C; j++){
			cin >> A[i][j];
		}
	}
	
	// Calculando o determinante
	d = A[0][0] * A[1][1] * A[2][2] + 
	A[0][1] * A[1][2] * A[2][0] + A[0][2] * A[1][0] * A[2][1] - 
	A[0][1] * A[1][0] * A[2][2] - A[0][0] * A[1][2] * A[2][1] - 
	A[0][2] * A[1][1] * A[2][0];
	
	cout << "Determinante: " << d;
	
	return 0;
}
