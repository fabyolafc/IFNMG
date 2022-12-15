/*Entrada
A primeira linha da entrada cont�m dois n�meros inteiros N e S que indicam respectivamente o n�mero de dias do per�odo de interesse e o
saldo da conta no in�cio do per�odo. Cada uma das N linhas seguintes cont�m um n�mero inteiro indicando a movimenta��o de um dia
(valor positivo no caso de dep�sito, valor negativo no caso de retirada). A movimenta��o � dada para um per�odo de N dias consecutivos:
a primeira das N linhas corresponde ao primeiro dia do per�odo de interesse, a segunda linha corresponde ao segundo dia, e assim por diante.

Sa�da
Seu programa deve imprimir uma �nica linha, contendo um �nico n�mero inteiro, o menor valor de saldo da conta no per�odo dado.
Entrada
3 1000
100
-800
50

Sa�da
300

Entrada
6 -200
-100
1000
-2000
100
-50
2000

Sa�da
-1300*/
#include <iostream>

using namespace std;

int main () {
	
	int numeroDias, saldo, valor[50], menor=0, total ;
	
	cin >> numeroDias >> saldo;
	menor = saldo;
	for (int i=0; i<numeroDias; i++) {
		cin >> valor[i];
		menor +=valor[i];
		
		if (menor <= saldo ) {
			saldo=menor;
		}
	}
	cout << saldo;
	
	return 0;
}
