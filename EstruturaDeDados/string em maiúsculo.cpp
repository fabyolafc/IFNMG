/*Fa�a um procedimento em C++ que receba como par�metro string (vetor de char). O
procedimento converter� cada caractere min�sculo da string para mai�sculo.*/
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
