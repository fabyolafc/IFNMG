/*Fa�a um procedimento capaz de receber dois n�meros inteiros como par�metro (ambos por refer�ncia).
O procedimento deve fazer a troca dos valores destes par�metros. Em seguida fa�a um programa que utilize este procedimento.*/

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
