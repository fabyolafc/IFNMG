#include <iostream>

using namespace std;

//função soma recebendo 2 parâmetros
int soma (int a, int b) { // A e B são parâmetros formais
	int c; //variavel local
	c = a+b;
	return c;
}

int main () {
	
	int x, y, z;
	cin >> x >> y; // X e Y são parâmetros reais
	z = soma (x, y); //chamando a função
	cout << z;
	
	return 0;
}
