/*Fa�a um programa em C++ que solicite ao usu�rio que digite o ano de seu nascimento. O
programa calcular� e exibir� na tela a idade a partir do ano digitado.*/
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
	
	cout << "Voc� tem ou vai completar "<<idade<<" anos";
	
	return 0;
}
