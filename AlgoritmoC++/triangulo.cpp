/*Faça um programa que solicite ao usuário que digite 3 números inteiros representando os lados de um triângulo. Então:
se o triângulo tiver 3 lados iguais, o programa escreverá na tela: "EQUILATERO";
se o triângulo tiver 3 lados diferentes, o programa escreverá na tela: "ESCALENO";
se o triângulo tiver 2 lados iguais e um diferente, o programa escreverá na tela: "ISOCELES";*/

#include <iostream>
#include <locale.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	cout << "Digite os 3 lados do triângulo: ";
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

