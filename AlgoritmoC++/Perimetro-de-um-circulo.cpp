/*Fa�a um programa que solicite ao usu�rio que digite o DI�METRO de um c�rculo.
O programa calcular� e dar� como sa�da o per�metro da deste c�rculo. Considere o valor de pi como sendo 3.1415.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float diametro, raio, perimetro;
	
	//cout << "Digite o di�metro do c�rculo: ";
	cin>> diametro;
	
	raio = diametro/2;
	perimetro = 2*3.1415*raio;

	cout<< perimetro;
	
	return 0;
}
