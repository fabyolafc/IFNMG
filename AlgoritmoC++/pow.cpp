/*Fa�a um programa em C++ que solicite ao usu�rio que digite dois n�meros reais a e b. O programa escrever� na tela o resultado de a^b.*/
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
	
	cout << "Resultado da potencia��o: "<< res;
	
	return 0;
}
