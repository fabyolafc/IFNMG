/*Faça um programa em C++ que solicite ao usuário que digite os dados de uma matriz (4 x 3) de inteiros; 
o programa exibirá na tela as somas das colunas desta matriz. Por exemplo, se a entrada for a seguinte:

10	20	1
2	1	10
1	1	1
0	5	3

a saída será:

Coluna 1: 13
Coluna 2: 27
Coluna 3: 15 
*/
#include <iostream>

using namespace std;
const int L = 4;
const int C = 3;
int main () {
	
	int A[L][C], soma, somaColuna[C];
	
	for (int i=0; i<L; i++){
		for (int j=0; j<C; j++){
			cin >> A[i][j];
		}
	}
	
	cout << "\n\n\n";
	
		for (int j=0; j<C; j++){
			soma = 0;
			for (int i=0; i<L; i++){
				soma += A[i][j];
			}
			somaColuna[j]=soma;	
		}
	
	for (int j=0; j<C; j++){			
			cout << somaColuna[j] << endl;
		}
	
	return 0;
}
