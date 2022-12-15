/*É possível a partir de uma data composta por um dia, um mês e um ano, calcular o dia da semana desta data.

Suponha que um programa receba como entra uma data em três variáveis inteiras: dia , mes e ano.

Um dia da semana pode ser calculado seguindo os seguintes passos:

Seja f uma variável inteira;

Calcule f como o resultado da seguinte expressão:
ano + dia + 3 * ( mes - 1 ) - 1;

Se o mês for menor que 3, decremente a variável ano em 1;

Se o mês for maior ou igual a 3, subtraia da variável f a seguinte expressão: 
int ( 0.4 * mes + 2.3 );

Adicione à variável f o resultado da seguinte expressão: 
int (ano / 4) - int (( ano / 100 + 1) * 0.75 );

Calcule f como sendo o resultado da seguinte expressão:
f % 7

Neste momento f possui um valor inteiro compreendido entre 0 e 6 (inclusive), onde 0 representa Domingo, 1 representa Segunda-feira, 2 representa Terça-feira, e assim por diante...

Seguindo estes passos, faça um programa em C++ que solicite ao usuário que digite um dia, um mês e um ano. O programa deverá calcular e exibir na tela o dia da semana equivalente à data digitada.
*/
#include <iostream>

using namespace std;

int main () {
	
	int f, dia, mes, ano;
	cout <<"Digite o dia: ";
	cin >> dia;
	cout <<"Digite o mes: ";
	cin >> mes;
	cout <<"Digite o ano: ";
	cin >> ano;

	f = ano + dia + 3 * (mes - 1) - 1;
	
	if (mes < 3) {
		ano = ano - 1;
	}
	else if (mes>=3) {
		f = f - int (0.4 * mes + 2.3);
	}
	
	f = f - int (ano / 4) - int ((ano / 100 + 1) * 0.75);
	
	f = f%7;
	
	switch (f) {
		case 0:
			cout <<"DOMINGO";
		break;
		case 1:
			cout <<"SEGUNDA-FEIRA";
		break;
		case 2:
			cout <<"TERÇA-FEIRA";
		break;
		case 3:
			cout <<"QUARTA-FEIRA";
		break;
		case 4:
			cout <<"QUINTA-FEIRA";
		break;
		case 5:
			cout <<"SEXTA-FEIRA";
		break;
		case 6:
			cout <<"SÁBADO";
		break;
	}

	return 0;
}
