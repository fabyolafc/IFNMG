/*Uma função que calcula o fatorial de um número inteiro pode ser implementada da seguinte forma:

int fatorial (int n){
   int f = 1;
   for (int i = 1; i <= n; i++){
      f *= i;
   }
   return f;
}

Desenvolva uma outra versão do cálculo do fatorial, mas desta vez usando um procedimento que receba como parâmetro uma variável n 
por valor e uma variável r por referência. O procedimento deve atribuir a r o fatorial de n. Em seguida, faça um programa que use o 
seu procedimento e exiba na tela o fatorial dos números inteiros positivos menores ou iguais a 10.
*/

#include <iostream>

using namespace std;

void fatorial (int n, int &r){
   int f = 1;
   for (int i = 1; i <= n; i++){
      r = f *= i;
   }
}


int main () {
	
	int n=10, r;
	
	fatorial(n, r);
	cout << r;
	
	return 0;
	
}
