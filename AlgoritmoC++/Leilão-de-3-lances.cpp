/*Em um sistema de leilão um produto é vendido pelo preço da maior oferta. 
Faça um programa que receba como entrada 3 números reais representando os valores das ofertas de compra de um produto.
O programa escreverá na tela o valor do preço de venda do produto (o lance vencedor).*/

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

