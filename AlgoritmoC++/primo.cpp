/*Tarefa
Dado um inteiro N, verifique se N é primo.

Entrada
A entrada é composta por um único caso de teste, composto por uma única linha que contém o inteiro N.

Saída
Seu programa deve produzir uma única linha, contendo a palavra "sim", se N for primo, e "nao", caso contrário.*/
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
		cout <<"Não";
	}
	
	return 0;
}
