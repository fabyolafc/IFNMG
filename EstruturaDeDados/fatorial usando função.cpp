/*Usando fun��es, fa�a um programa que solicite ao usu�rio que digite um n�mero. O programa exibir� o fatorial deste n�mero na tela.

DICA: sua fun��o deve ter o seguinte prot�tipo:

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
