/*Usando apenas duas vari�veis inteiras, fa�a um programa em C++ que solicite ao usu�rio que
digite 5 n�meros. Ao final, o programa escrever� na tela o produto de todos os n�meros
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
	
	cout << "Resultado da multiplica��o: " << p;
	
	return 0;
}
