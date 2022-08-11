/*Usando apenas duas variáveis inteiras, faça um programa em C++ que solicite ao usuário que
digite 5 números. Ao final, o programa escreverá na tela o produto de todos os números
digitados.*/
#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n,p;
	cout << "Digite 5 numeros: ";
	cin >> n;
	p = n;
	cin >> n;
	p = p * n; //p *= n;
	cin >> n;
	p = p * n;
	cin >> n;
	p = p * n;
	cin >> n;
	p = p * n;
	
	cout << "Resultado da multiplicação: " << p;
	
	return 0;
}
