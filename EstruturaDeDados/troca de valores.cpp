/*Faça um procedimento capaz de receber dois números inteiros como parâmetro (ambos por referência).
O procedimento deve fazer a troca dos valores destes parâmetros. Em seguida faça um programa que utilize este procedimento.*/

#include <iostream>

using namespace std;

void troca (int &a, int &b) {
	int c;
	c = a;
	a = b;
	b = c;
}


int main () {
	
	int a=50, b=100;
	
	cout << "A = " << a << " B = " << b;
	troca(a,b);
	cout << "\nA = " << a << " B = " << b;
	
	return 0;
	
}
