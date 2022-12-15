/*Fa�a um programa em C++ que solicite ao usu�rio que digite uma matriz (4 x 4) de inteiros; 
o programa dar� como sa�da se a matriz � identidade ou n�o. Uma matriz identidade � aquela que possui todos os elementos 
da sua diagonal principal iguais a um; e os demais elementos iguais a zero.
*/

#include <iostream>
#include <locale.h>

using namespace std;
const int M = 4;

int main () {
	setlocale(LC_ALL, "Portuguese");
	int A[M][M], identidade1, identidade0;
	
	//Lendo a matriz
	for (int i=0; i<M; i++){
		for (int j=0; j<M; j++){
			cin >> A[i][j];
		}
	}
	
	cout << "\n\n\n";
	for (int i=0; i<M; i++){
		for (int j=0; j<M; j++){
			if (i == j && A[i][j] == 1) {
				identidade1 = 1;
			} else if (i != j && A[i][j] == 0) {
				identidade0 = 0;
			}
		}
	}
	
	if (identidade1==1 && identidade0==0){
		cout << "Matriz identidade";
	} else {
		cout << "Matriz n�o � identidade";
	}
	
	return 0;
}
