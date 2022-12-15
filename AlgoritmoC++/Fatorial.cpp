/*Dado um inteiro N, determine quanto vale N fatorial (escreve-se N!).
O fatorial de um número é o produto de todos os números entre 1 e N, inclusive.
Por exemplo, 5! = 5 × 4 × 3 × 2 × 1 = 120.*/
#include <iostream>

using namespace std;

int main(){
	int n, soma=1;

	cin >> n;
	
	for (int i=1; i<=n; i++){
		soma = soma * i;
		
	}
	
	cout << soma;
	return 0;
	
}
