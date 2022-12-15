/*Usando funções, faça um programa que solicite ao usuário que digite um número. O programa exibirá o fatorial deste número na tela.

DICA: sua função deve ter o seguinte protótipo:

int fatorial (int n){
   ...
}
*/
#include <iostream>

using namespace std;


int fatorial (int n){
	int soma=1;
	for (int i=1; i<=n; i++){
		soma = soma * i;	
	}
	
	return soma;
}

int main () {
	
	int num, resultado;
	
	cin >> num;

	resultado = fatorial(num);
	
	cout << resultado;
	
	return 0;
}
