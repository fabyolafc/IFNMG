/*Uma empresa est� concedendo aumentos de sal�rios aos seus funcion�rios dependendo do tempo de servi�o:
menos de 1 ano de tempo de servi�o: 10% de aumento;
a partir de 1 ano e menos de 5 anos de tempo de servi�o: 15% de aumento;
a partir de 5 anos e menos de 7 anos de tempo de servi�o: 20% de aumento; e
a partir de 7 anos: 30% de aumento.
Fa�a um programa que solicite ao usu�rio que digite dois n�meros reais: o tempo de servi�o em anos e o sal�rio atual. 
O programa calcular� e escrever� na tela o novo sal�rio.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main () {
	setlocale(LC_ALL, "Portuguese");
	float tempo, salario, aumento, soma;
	cout << "Digite seu tempo de servi�o em anos: ";
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
