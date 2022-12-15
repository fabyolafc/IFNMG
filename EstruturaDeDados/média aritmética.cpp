/*Fa�a um programa em C++ que receba como entrada uma matriz 4 x 5 de n�meros reais. O programa dar� como sa�da, 
os elementos da matriz que est�o pelo menos 30% abaixo da m�dia aritm�tica de todos os elementos da matriz lida.
*/

#include <iostream>
#include <locale.h>
using namespace std;
const int L = 4;
const int C = 5;
int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float A[L][C], soma=0, quant=0, media, porcentagem, resultado;
	
	for (int i=0; i<L; i++){
		for (int j=0; j<C; j++){
			cin >> A[i][j];
		}
	}
	
	cout << "\n";
	for (int i=0; i<L; i++){
		for (int j=0; j<C; j++){	
			soma += A[i][j];
			quant ++;
		}
	}
		
	media = soma / quant;
	cout << "\nM�dia aritm�tica: "<< media;
		
	porcentagem = media * 0.30;
		
	cout << "\n\n30% de " << media << " = " << porcentagem << endl;
		
	for (int i=0; i<L; i++){	
		for (int j=0; j<C; j++){
			if (A[i][j]<=porcentagem) {
				resultado = 1;
			}
		}
	}
		
	if (resultado == 1){
		cout << "\nElementos 30% abaixo da m�dia aritm�tica: \n";
		for (int i=0; i<L; i++) {	
			for (int j=0; j<C; j++) {
				if (A[i][j]<=porcentagem) {
					cout << A[i][j] << "\n";
				}
			}
		}
	}
	
	return 0;
}
