/*Fa�a um programa em C++ que solicite ao usu�rio que digite o di�metro de uma
circunfer�ncia, o programa escrever� na tela a �REA e o PER�METRO desta circunfer�ncia.*/
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float diametro, raio, area, perimetro;
	
	cout << "Informe o di�metro da circunfer�ncia: ";
	cin>> diametro;
	
	raio = diametro/2;
	perimetro = 2*3.14*raio;
	area = 3.14*(raio*raio);
	
	cout<< "Valor da area da circunf�rencia: "<<area;
	cout<< "\nValor do perimetro da circuf�rencia: "<< perimetro;
	
	return 0;
}
