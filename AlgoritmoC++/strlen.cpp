/*Fa�a um programa que solicite ao usu�rio que digite uma frase (texto com espa�os). O programa exibir� esta frase na tela e a sua 
quantidade de caracteres.*/
#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	char frase[100];
	int tamanho;
	cout <<"Escreva uma frase: ";
	cin.getline(frase, 100);	
	cout <<frase;
	tamanho = strlen (frase);
	cout << "\nQuantidade de caracteres: "<<tamanho;
	return 0;
}
