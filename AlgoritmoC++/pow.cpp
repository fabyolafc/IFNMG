/*Faça um programa em C++ que solicite ao usuário que digite dois números reais a e b. O programa escreverá na tela o resultado de a^b.*/
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float a, b, res;
	
	cout << "Digite um numero: ";
	cin >> a;
	cout << "Digite outro numero: ";
	cin >> b;
	
	res = pow(a,b);
	
	cout << "Resultado da potenciação: "<< res;
	
	return 0;
}
