/*Faça um programa que solicite ao usuário que digite um número inteiro positivo.
O programa escreverá na tela a soma de todos os inteiros positivos menores ou iguais ao número digitado.*/
#include <iostream>

using namespace std;

int main(){
	int n, i, soma=0;
	cout << "Digite um numero: ";
	cin >> n;
	
	for (i=1; i<=n; i++){
		soma +=i; //soma = n * (n + 1) / 2;
		cout << i;	
	}
	cout <<"\n"<< soma;
	return 0;
	
}
