/*A pizzaria da Didi vende 5 tipos de produtos. Veja a tabela:
Produto Preço
Pizza Grande R$ 30,00
Pizza Média R$ 23,00
Pizza Pequena R$ 18,00
Refrigerante 2 Litros R$ 6,50
Refrigerante Lata R$ 3,50
Faça um programa em C++ que solicite ao usuário que digite a quantidade consumida de
cada um dos 5 produtos. O programa calculará e exibirá na tela o valor a pagar.*/
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float pizzaG, pizzaM, pizzaP, refriLitro, refriLata,
	 multG, multM, multP, multR2, multRL, soma;
	
	cout << "Quantidade de pizzas grandes: ";
	cin >> pizzaG;
	cout << "Quantidade de pizzas medias: ";
	cin >> pizzaM;
	cout << "Quantidade de pizzas pequenas: ";
	cin >> pizzaP;
	cout << "Quantidade de refrigerantes de 2 litros: ";
	cin >> refriLitro;
	cout << "Quantidade de refrigerantes de Lata: ";
	cin >> refriLata;
	
	multG = pizzaG*30.00;
	multM = pizzaM*23.00;
	multP = pizzaP*18.00;
	multR2 = refriLitro*6.50;
	multRL = refriLata*3.50;
	
	soma = multG+multM+multP+multR2+multRL;
	
	cout << "O valor a pagar: "<< soma;
	
	return 0;
}
