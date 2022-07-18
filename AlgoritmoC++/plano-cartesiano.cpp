/*10.	Faça um programa em C++ que solicite ao usuário que digite os valores de dois pontos (A e B) em um plano cartesiano (cada ponto é representado por suas coordenadas x e y). O programa dará como saída a distância entre os dois pontos digitados.
DICA: o primeiro ponto pode ser representado pelas variáveis XA e YA e o segundo ponto pode ser representado pelas variáveis XB e YB. Observe a imagem:
A distância entre os dois pontos A e B pode ser dada pela fórmula:*/
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	double xa, xb, ya,yb, potencia1, potencia2, soma, raiz;
	
	cout << "Digite o valor do ponto Xa: ";
	cin >> xa;
	cout << "Digite o valor do ponto Xb: ";
	cin >> xb;
	cout << "Digite o valor de Ya: ";
	cin >> ya;
	cout << "Digite o valor de Yb: ";
	cin >> yb;
	
	potencia1 = pow(xa-xb,2);
	potencia2 = pow(ya-yb,2);
	soma = potencia1+potencia2;
	raiz = sqrt(soma);
	
	cout << "Distância entre os dois pontos A e B: "<< raiz;
	
	return 0;
}

