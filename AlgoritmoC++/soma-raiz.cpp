/*Faça um programa em C++ que solicite ao usuário que digite um número. O programa exibirá na tela a soma da raiz quadrada e da raiz quinta do número digitado.*/
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float n, raiz2, raiz5, res;
	
	cout << "Digite um numero: ";
	cin >> n;
	
	raiz2 = sqrt(n);
	raiz5 = pow (n, 1.0/5);
	res = raiz2 + raiz5;
	
	cout << "Resultado da soma da raiz: "<< res;
	
	return 0;
}
