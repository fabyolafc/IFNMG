/*Fa�a uma fun��o que receba como par�metros: um vetor v, o seu tamanho n e um elemento
x (todos inteiros). A fun��o retornar� true se x estiver contido em v, caso contr�rio retornar�
false. Desenvolva na fun��o principal um algoritmo capaz de verificar o funcionamento da
fun��o desenvolvida.*/

#include <iostream>
#include <locale.h>

using namespace std;

void lerVetor (int V[], int n) {
	cout << "Digite um vetor de " << n << " elementos: ";
	for (int i = 0; i < n; i ++) {
		cin >> V[i];
	}
}

int contidoX (int V[], int n, int x) {
	bool resultado = false;
	for (int i = 0; i < n; i ++) {
		if (V[i] == x) {
			resultado = true;
		}
	}
	cout << x << " est� contido no vetor: ";
	if (resultado == true) {
		cout << "true";
	} else {
		cout << "false";
	}
	return x;
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	cout << "Digite o tamanho de vetor: ";
	cin >> n;
	int A[n];
	lerVetor(A, n);
	
	int x;
	cout << "Digite um n�mero inteiro: ";
	cin >> x;
	contidoX(A, n, x);

	return 0;
}
