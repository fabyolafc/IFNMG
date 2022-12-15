/*Faça uma função que receba como parâmetro um número inteiro positivo. 
A função deverá retornar a soma de todos os números inteiros positivos menores ou iguais a este parâmetro.*/

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
