/*Faça um programa em c++ que solicite ao usuario que digite uma string ate 20 caracteres 
numericos. O programa exibira na tela a soma dos numeros digitados. 
Deste modo, se a entrada for a string "12345", a saida sera 15.*/
/*Subtrair 48 ou '0' em cada caractere*/

#include <iostream>
#include <string.h>

using namespace std;

int main () {
	
	char p[21];
	int soma=0;
	
	cin >> p;
	
	for (int i=0; i<strlen(p); i++) {
		
		soma += p[i] - 48;
	
	}
	
	cout << soma;
	
	return 0;
}
