/*Faça um programa que solicite ao usuário que digite uma palavra. O programa exibirá na tela a ÚLTIMA letra da palavra digitada.*/
#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	char palavra[20];
	int t;
	cout <<"Digite uma palavra: ";
	cin >> palavra;
	t = strlen (palavra);

	cout << "\nUltima letra: "<<palavra[t-1];
	return 0;
}
