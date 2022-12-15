/*� poss�vel a partir de uma data composta por um dia, um m�s e um ano, calcular o dia da semana desta data.

Suponha que um programa receba como entra uma data em tr�s vari�veis inteiras: dia , mes e ano.

Um dia da semana pode ser calculado seguindo os seguintes passos:

Seja f uma vari�vel inteira;

Calcule f como o resultado da seguinte express�o:
ano + dia + 3 * ( mes - 1 ) - 1;

Se o m�s for menor que 3, decremente a vari�vel ano em 1;

Se o m�s for maior ou igual a 3, subtraia da vari�vel f a seguinte express�o: 
int ( 0.4 * mes + 2.3 );

Adicione � vari�vel f o resultado da seguinte express�o: 
int (ano / 4) - int (( ano / 100 + 1) * 0.75 );

Calcule f como sendo o resultado da seguinte express�o:
f % 7

Neste momento f possui um valor inteiro compreendido entre 0 e 6 (inclusive), onde 0 representa Domingo, 1 representa Segunda-feira, 2 representa Ter�a-feira, e assim por diante...

Seguindo estes passos, fa�a um programa em C++ que solicite ao usu�rio que digite um dia, um m�s e um ano. O programa dever� calcular e exibir na tela o dia da semana equivalente � data digitada.
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
			cout <<"TER�A-FEIRA";
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
			cout <<"S�BADO";
		break;
	}

	return 0;
}
