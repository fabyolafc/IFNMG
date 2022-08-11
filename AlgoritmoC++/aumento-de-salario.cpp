/*Uma empresa está concedendo aumentos de salários aos seus funcionários dependendo do tempo de serviço:
menos de 1 ano de tempo de serviço: 10% de aumento;
a partir de 1 ano e menos de 5 anos de tempo de serviço: 15% de aumento;
a partir de 5 anos e menos de 7 anos de tempo de serviço: 20% de aumento; e
a partir de 7 anos: 30% de aumento.
Faça um programa que solicite ao usuário que digite dois números reais: o tempo de serviço em anos e o salário atual. 
O programa calculará e escreverá na tela o novo salário.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main () {
	setlocale(LC_ALL, "Portuguese");
	float tempo, salario, aumento, soma;
	cout << "Digite seu tempo de serviço em anos: ";
	cin >> tempo;
	cout << "Digite seu salario: ";
	cin >> salario;	
	

	if (tempo <1){
		aumento = salario * 0.10;
		soma = salario + aumento;
		cout<<"Novo salario: "<<soma;
	}
	else if (tempo >=1 && tempo <5){
		aumento = salario * 0.15;
		soma = salario + aumento;
		cout<<"Novo salario: "<<soma;
	}
	else if (tempo >=5 && tempo <7){
		aumento = salario * 0.20;
		soma = salario + aumento;
		cout<<"Novo salario: "<<soma;
	}
	else{
		aumento = salario * 0.30;
		soma = salario + aumento;
		cout<<"Novo salario: "<<soma;
	}
	return 0;
}
