#include <iostream>

using namespace std;

//fun��o soma recebendo 2 par�metros
int soma (int a, int b) { // A e B s�o par�metros formais
	int c; //variavel local
	c = a+b;
	return c;
}

int main () {
	
	int x, y, z;
	cin >> x >> y; // X e Y s�o par�metros reais
	z = soma (x, y); //chamando a fun��o
	cout << z;
	
	return 0;
}
