/*1. Faça um programa que solicite ao usuário que digite seu nome contendo até 20 caracteres.
O programa exibirá na tela uma mensagem de boas-vindas, como, por exemplo:
“SEJA BEM-VINDO, Fernando!”
Você deve usar a função strcat para formar a mensagem.*/

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	cout <<"Digite seu nome: ";
	char nome[21];
	cin >> nome;	
	cout <<'"'<<"SEJA BEM VINDO(A), "<<nome<<'"';
	
	return 0;
}
