/*Fa�a uma fun��o que receba como par�metro um n�mero inteiro positivo. 
A fun��o dever� retornar a soma de todos os n�meros inteiros positivos menores ou iguais a este par�metro.*/

#include <iostream>

using namespace std;


int somaNumeros (int n){
	int soma=0;
	for (int i=1; i<=n; i++){
		soma +=i;	
	}
	
	return soma;
}

int main () {
	
	int num, resultado;
	
	cin >> num;

	resultado = somaNumeros(num);
	
	cout << resultado;
	
	return 0;
}
