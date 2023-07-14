/*Fa�a um procedimento que receba como par�metro um n�mero inteiro n por refer�ncia. O procedimento deve modificar o valor de n para o seu dobro. 
Em seguida, fa�a um programa que solicite ao usu�rio que digite um vetor de 10 n�meros inteiros. 
Ent�o o programa deve multiplicar este vetor por 2, utilizando o procedimento que voc� desenvolveu, e exibir este vetor na tela.*/

#include <iostream>

using namespace std;

void lerVetor (int v[], int n) {
	for (int i=0; i<n; i++) {
		cin >> v[i];
	}
}

void dobro (int v[], int n) {
	for (int i=0; i<n; i++) {
		v[i] = v[i] * 2;
	}
}

void mostraDobro (int v[], int n) {
	for (int i=0; i<n; i++) {
		cout << v[i] << " ";
	}
}

int main () {
	
	int a[10];
	
	lerVetor(a, 10);
	dobro(a, 10);
	mostraDobro(a, 10);

	
	return 0;
	
}
