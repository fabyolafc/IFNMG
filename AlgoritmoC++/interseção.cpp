/*Faça um programa que solicite ao usuário que digite 2 vetores de 10 elementos cada.
O programa exibirá na tela a interseção entre eles (elementos que estão contidos em ambos os vetores ao mesmo tempo).*/

#include <iostream>
#include <locale.h>

using namespace std;

const int N = 10;

int main () {
	setlocale(LC_ALL, "Portuguese");
	int A[N], B[N];
	
	for (int i=0; i<N; i++) {
		cout << "Digite o 1º vetor elementos " << i+1 <<": ";
		cin >> A[i];
			
	}
	cout << "\n";
	
		for (int i=0; i<N; i++) {
		cout << "Digite o 2º vetor elementos: " << i+1 <<": ";
		cin >> B[i];
			
	}
	cout << "\n";
	
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
				
			if (A[i]==B[j]) {
				cout << A[i] << " ";
			}
		}
	}
	
	return 0;
}
