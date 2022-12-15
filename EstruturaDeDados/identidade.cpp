/*Faça um programa em C++ que solicite ao usuário que digite uma matriz (4 x 4) de inteiros; 
o programa dará como saída se a matriz é identidade ou não. Uma matriz identidade é aquela que possui todos os elementos 
da sua diagonal principal iguais a um; e os demais elementos iguais a zero.
*/

#include <iostream>
#include <locale.h>

using namespace std;
const int M = 4;

int main () {
	setlocale(LC_ALL, "Portuguese");
	int A[M][M];
	
	//Lendo a matriz
	for (int i=0; i<M; i++){
		for (int j=0; j<M; j++){
			cin >> A[i][j];
		}
	}
	
	if (A[0][0] == 1 && A[0][1] == 0 && A[0][2] == 0 && A[0][3] == 0 && A[1][0] == 0 && A[1][1] == 1 && A[1][2] == 0 && A[1][3] == 0 && 
	A[2][0] == 0 && A[2][1] == 0 && A[2][2] == 1 && A[2][3] == 0 && A[3][0] == 0 && A[3][1] == 0 && A[3][2] == 0 && A[3][3] == 1) {
		cout << "Matriz identidade";
	} else {
		cout <<"Matriz não é identidade";
	}
	
	return 0;
}
