/*Fa�a um programa que solicite ao usu�rio que digite uma palavra de at� 30 caracteres. 
Caso a palavra tenha at� 5 caracteres, o programa escrever� na tela "PALAVRA PEQUENA";
caso contr�rio, se apalavra tiver de 6 a 30 caracteres, escrever� na tela "PALAVRA GRANDE".*/

#include <iostream>
#include <string.h>

using namespace std;

int main (){
	char palavra[31];
	int t;
	cout <<"Digite uma palavra: ";
	cin >> palavra;
	t = strlen (palavra);

	if (t <= 5){
		cout <<"PALAVRA PEQUENA";
	}
	else if (t>=6 && t<=30){
		cout <<"PALAVRA GRANDE";
	}
	
	return 0;
}
