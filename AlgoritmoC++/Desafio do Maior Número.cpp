/*Entrada
A entrada é dada em uma única linha contendo uma sequência de números inteiros positivos. O último número da linha é 0 (zero).

Saída
Seu programa deve imprimir o maior número dentre os números da entrada.*/
#include <iostream>

using namespace std;

int main () {
	
	int num, maiorValor = 0;
	
	do {
		cin >> num;
		
		if (num >= maiorValor) {
			maiorValor = num;
			
		}
	} while (num != 0);
	
	cout << maiorValor;
	
	return 0;
}
