/*Faça um programa que solicite ao usuário que digite o DIÂMETRO de um círculo.
O programa calculará e dará como saída o perímetro da deste círculo. Considere o valor de pi como sendo 3.1415.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float diametro, raio, perimetro;
	
	//cout << "Digite o diâmetro do círculo: ";
	cin>> diametro;
	
	raio = diametro/2;
	perimetro = 2*3.1415*raio;

	cout<< perimetro;
	
	return 0;
}
