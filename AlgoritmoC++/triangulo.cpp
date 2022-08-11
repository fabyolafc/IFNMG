/*Fa�a um programa que solicite ao usu�rio que digite 3 n�meros inteiros representando os lados de um tri�ngulo. Ent�o:
se o tri�ngulo tiver 3 lados iguais, o programa escrever� na tela: "EQUILATERO";
se o tri�ngulo tiver 3 lados diferentes, o programa escrever� na tela: "ESCALENO";
se o tri�ngulo tiver 2 lados iguais e um diferente, o programa escrever� na tela: "ISOCELES";*/

#include <iostream>
#include <locale.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	cout << "Digite os 3 lados do tri�ngulo: ";
	cin >> a >> b >> c;
	
	if (a==b && b==c){
		cout << "EQUILATERO";
	}
	if (a!=b && b!=c && c!=a){
		cout << "ESCALENO";
	}
	if((a==b && c!= a)||(b==c && b!=a)||(a==c && a!=b)){
		cout << "ISOCELES";
	}
	
return 0;	
}

