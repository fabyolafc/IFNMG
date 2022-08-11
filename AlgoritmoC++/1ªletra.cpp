/*Faça um programa que solicite ao usuário que digite uma palavra. O programa exibirá na tela a primeira letra da palavra digitada.*/
#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	char palavra[20];
	cout <<"Digite uma palavra: ";
	cin >> palavra;
	cout << "\nPrimeira letra: "<<palavra[0];
	return 0;
}
