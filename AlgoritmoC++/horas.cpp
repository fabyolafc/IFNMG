/*A cada hora que se passa, um carro consegue percorrer em média 80 quilômetros. Faça um
programa em C++ que solicite ao usuário que digite a distância entre duas cidades; o
programa exibirá na tela quantas horas serão necessárias na viagem entre as duas utilizando
este carro com esta velocidade média.*/
#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float distancia, horas;
	
	cout << "Digite a distância entre as duas cidades: ";
	cin>> distancia;
	
	horas = distancia/80;
	
	cout<< "Serão necessárias na viagem entre as duas cidades: "<<setprecision(2)<<horas<<" horas";
	
	return 0;
}
