/*Fa�a um programa que receba quatro n�meros reais como entrada: o raio de uma bola e as dimens�es de uma caixa (altura, largura e profundidade).
O programa escrever� "SIM" se a bola couber dentro da caixa; caso contr�rio, escrever� "NAO".*/
#include <iostream>
#include <locale.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	float raioBola, altura, largura, profundidade, diametro;
	cout <<"Digite o raio da bola: ";
	cin >> raioBola;
	cout <<"Digite as dimen��es de uma caixa - altura, largura, profundidade: ";
	cin >>altura>> largura>> profundidade;
	
	diametro= raioBola*2;
	
	if (diametro<=altura && diametro<=largura && diametro<=profundidade) {
		cout<<"Cabe na caixa: SIM";
	}
	else {
		cout<<"Cabe na caixa: N�O";
	}
	
return 0;	
}

