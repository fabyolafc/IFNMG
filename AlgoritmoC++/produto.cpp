/*Usando apenas duas vari�veis inteiras, fa�a um programa em C++ que solicite ao usu�rio que
digite 5 n�meros. Ao final, o programa escrever� na tela o produto de todos os n�meros
digitados.*/
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	float n3, n4, n5,res;
	
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;
	cout << "Digite outro numero: ";
	cin >> n3;
	cout << "Digite outro numero: ";
	cin >> n4;
	cout << "Digite outro numero: ";
	cin >> n5;
	
	res = n1*n2*n3*n4*n5;
	
	cout << "Resultado do produto: "<< res;
	
	return 0;
}
