/*Faça um programa que solicite ao usuario que digite uma palavra de até 50 caracteres.
O programa exibirá na tela a soma dos códigos ASCII da palavra digitada*/

#include <iostream>
#include <string.h>
using namespace std;

int main () {
	
	/*char p [51];
	int codigo, soma = 0;
	
	cout << "Digite um palavra: ";
	cin >> p;
	
	for (int i=0; i<strlen(p); i++) {
	
	codigo = p[i];	
	
	soma +=p[i];
	}
	
	cout << p << " = " << soma;*/
	
	char p[51];
	int soma = 0;
	cin >>p;
	for (int i=0; i<strlen(p); i++) {
		soma += p[i];
	}	
	cout << soma;
	return 0;
	
	return 0;
}
