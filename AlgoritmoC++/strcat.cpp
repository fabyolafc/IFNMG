/*1. Fa�a um programa que solicite ao usu�rio que digite seu nome contendo at� 20 caracteres.
O programa exibir� na tela uma mensagem de boas-vindas, como, por exemplo:
�SEJA BEM-VINDO, Fernando!�
Voc� deve usar a fun��o strcat para formar a mensagem.*/

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
