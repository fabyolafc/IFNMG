/*Modifique o programa da questão anterior de modo que o programa facilite o cálculo do troco.
Ou seja, após exibir o valor a pagar, o programa solicitará ao usuário que informe o valor
pago e então exibirá o troco na tela.*/
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float pizzaG, pizzaM, pizzaP, refriLitro, refriLata,
	 multG, multM, multP, multR2, multRL, soma, desconto, totalPagar, valor, troco;
	
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
	desconto = soma*0.10;	
	totalPagar = soma-desconto;
	
	cout << "O valor a pagar: "<< soma;
	
	cout << "\nValor total do desconto: "<< desconto;
	
	cout << "\nNovo valor a pagar com desconto de 10%: "<< totalPagar;
	
	cout << "\nInforme o valor de deseja pagar: ";
	cin >> valor;
	
	troco = valor-totalPagar;
	
	cout << "O seu troco é R$" << troco;
	
	return 0;
}
