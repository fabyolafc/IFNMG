/*Faça um programa que solicite ao usuário que digite sua idade.
O programa escreverá na tela "MAIOR DE IDADE", caso a idade seja maior ou igual a 18.
Caso contrário escreverá na tela "MENOR DE IDADE".*/

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
