/*Em um sistema de leil�o um produto � vendido pelo pre�o da maior oferta. 
Fa�a um programa que receba como entrada 3 n�meros reais representando os valores das ofertas de compra de um produto.
O programa escrever� na tela o valor do pre�o de venda do produto (o lance vencedor).*/

#include <iostream>
#include <string.h>
using namespace std;
int main () {
	float a, b, c;
	cout << "Digite as 3 ofertas: ";
	cin >> a>>b>>c;
	
	if (a > b && a > c){
		cout <<a;
	}	
	else if (b > a && b > c){
		cout <<b;
	}
	else{
		cout <<c;
		}
return 0;
}

