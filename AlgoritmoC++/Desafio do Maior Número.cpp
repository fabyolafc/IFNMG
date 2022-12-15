/*Entrada
A entrada � dada em uma �nica linha contendo uma sequ�ncia de n�meros inteiros positivos. O �ltimo n�mero da linha � 0 (zero).

Sa�da
Seu programa deve imprimir o maior n�mero dentre os n�meros da entrada.*/
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
