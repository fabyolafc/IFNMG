/*Faça um programa em C++ que solicite ao usuário que digite duas matrizes (3 x 4) de inteiros; 
o programa dará como saída a matriz resultante da soma destas duas matrizes.
*/

#include <iostream>

using namespace std;
const int L = 3;
const int C = 4;
int main () {
	
	int A[L][C], B[L][C], soma;
	
	//Lendo a matriz A
	cout << "Matriz A: \n";
	for (int i=0; i<L; i++){
		for (int j=0; j<C; j++){
			cin >> A[i][j];
		}
	}
	
	//Lendo a matriz B
	cout << "\n\n\n";
	cout << "\nMatriz B: \n";
	for (int i=0; i<L; i++){
		for (int j=0; j<C; j++){
			cin >> B[i][j];
		}
	}
	
	//Mostrando a soma
	cout << "\n\n\n";
	cout << "Mostrando a soma entre a matriz A e B: \n";
	for (int i=0; i<L; i++){
		for (int j=0; j<C; j++){
			soma = A[i][j] + B[i][j];
			cout << soma << "\t";
		}
		cout << endl;
	}
	
	return 0;
}
