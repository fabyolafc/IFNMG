/*Faça um programa que receba quatro números reais como entrada: o raio de uma bola e as dimensões de uma caixa (altura, largura e profundidade).
O programa escreverá "SIM" se a bola couber dentro da caixa; caso contrário, escreverá "NAO".*/
#include <iostream>
#include <locale.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	float raioBola, altura, largura, profundidade, diametro;
	cout <<"Digite o raio da bola: ";
	cin >> raioBola;
	cout <<"Digite as dimenções de uma caixa - altura, largura, profundidade: ";
	cin >>altura>> largura>> profundidade;
	
	diametro= raioBola*2;
	
	if (diametro<=altura && diametro<=largura && diametro<=profundidade) {
		cout<<"Cabe na caixa: SIM";
	}
	else {
		cout<<"Cabe na caixa: NÃO";
	}
	
return 0;	
}

