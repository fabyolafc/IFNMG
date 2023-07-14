/*Faça um procedimento que receba como parâmetro um número inteiro n por referência. O procedimento deve modificar o valor de n para o seu dobro. 
Em seguida, faça um programa que solicite ao usuário que digite um vetor de 10 números inteiros. 
Então o programa deve multiplicar este vetor por 2, utilizando o procedimento que você desenvolveu, e exibir este vetor na tela.*/

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
