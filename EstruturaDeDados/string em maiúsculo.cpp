/*Faça um procedimento em C++ que receba como parâmetro string (vetor de char). O
procedimento converterá cada caractere minúsculo da string para maiúsculo.*/
#include <iostream>
#include <string.h>

using namespace std;

void maiusculo (char p[]) {
	cout << strupr(p);
}

int main () {
	char p[50];
	cin >>p;
	maiusculo(p);
	
	return 0;
}
