/*A cada hora que se passa, um carro consegue percorrer em m�dia 80 quil�metros. Fa�a um
programa em C++ que solicite ao usu�rio que digite a dist�ncia entre duas cidades; o
programa exibir� na tela quantas horas ser�o necess�rias na viagem entre as duas utilizando
este carro com esta velocidade m�dia.*/
#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float distancia, horas;
	
	cout << "Digite a dist�ncia entre as duas cidades: ";
	cin>> distancia;
	
	horas = distancia/80;
	
	cout<< "Ser�o necess�rias na viagem entre as duas cidades: "<<setprecision(2)<<horas<<" horas";
	
	return 0;
}
