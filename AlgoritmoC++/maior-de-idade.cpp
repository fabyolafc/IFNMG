/*Fa�a um programa que solicite ao usu�rio que digite sua idade.
O programa escrever� na tela "MAIOR DE IDADE", caso a idade seja maior ou igual a 18.
Caso contr�rio escrever� na tela "MENOR DE IDADE".*/

#include <iostream>

using namespace std;

int main () {
	int idade;
	cout << "Digite sua idade: ";
	cin >> idade;	

	if (idade >= 18){
		cout <<"MAIOR DE IDADE";
	}
	else{
		cout <<"MENOR DE IDADE";
	}
	
}
