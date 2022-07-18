/*Faça um programa em C++ que solicite ao usuário que digite o diâmetro de uma
circunferência, o programa escreverá na tela a ÁREA e o PERÍMETRO desta circunferência.*/
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float diametro, raio, area, perimetro;
	
	cout << "Informe o diâmetro da circunferência: ";
	cin>> diametro;
	
	raio = diametro/2;
	perimetro = 2*3.14*raio;
	area = 3.14*(raio*raio);
	
	cout<< "Valor da area da circunfêrencia: "<<area;
	cout<< "\nValor do perimetro da circufêrencia: "<< perimetro;
	
	return 0;
}
