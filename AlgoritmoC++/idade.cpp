/*Faça um programa em C++ que solicite ao usuário que digite o ano de seu nascimento. O
programa calculará e exibirá na tela a idade a partir do ano digitado.*/
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float ano, anoAtual, idade;
	
	cout << "Informe o ano atual: ";
	cin >> anoAtual;
	cout << "Informe seu ano de nascimento: ";
	cin >> ano;
	
	idade = anoAtual-ano;
	
	cout << "Você tem ou vai completar "<<idade<<" anos";
	
	return 0;
}
