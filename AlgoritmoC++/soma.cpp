/* uma lista de N inteiros, encontre a soma de todos eles.

Entrada
A entrada � composta de um �nico caso de teste. A primeira linha cont�m um inteiro positivo N.
As N linhas seguintes cont�m cada uma um inteiro X, representando os N n�meros a serem somados.
Sa�da
Seu programa deve produzir uma �nica linha na sa�da, contendo a soma de todos os N inteiros.
Restri��es
0 = N = 50
|X| = 5000
Exemplo
Entrada
2
2
3

Sa�da
5

Entrada
3
1
5
3

Sa�da
9
*/
#include <iostream>

using namespace std;

int main () {
	
	int n, x, soma=0;
	
	cin >> n;

	for (int i=0; i<n; i++) {
		cin >> x;
		soma+=x;
		
	}
	cout << soma;
	
	return 0;
}
