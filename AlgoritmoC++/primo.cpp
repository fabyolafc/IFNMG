/*Tarefa
Dado um inteiro N, verifique se N � primo.

Entrada
A entrada � composta por um �nico caso de teste, composto por uma �nica linha que cont�m o inteiro N.

Sa�da
Seu programa deve produzir uma �nica linha, contendo a palavra "sim", se N for primo, e "nao", caso contr�rio.*/
#include <iostream>
#include <locale.h>

using namespace std;

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, resultado=0;
	
	cin >> num;
	
	for (int i=2; i<=num/2; i++) {
		if (num%i==0) {
			resultado++;
		}	
	}
	
	if (resultado ==0) {
		cout <<"Sim";
	} else {
		cout <<"N�o";
	}
	
	return 0;
}
