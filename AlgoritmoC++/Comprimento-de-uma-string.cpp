/*Faça um programa que solicite ao usuário que digite uma palavra de até 20 caracteres.
O programa exibirá na tela a quantidade de caracteres da palavra digitada.*/

#include <iostream>
#include <string.h>

using namespace std;

int main (){
	char palavra[20];
	int t;
	cout <<"Digite uma palavra: ";
	cin >> palavra;
	t = strlen (palavra);

	cout << t;
	return 0;
}
