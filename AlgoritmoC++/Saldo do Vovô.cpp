/*Entrada
A primeira linha da entrada contém dois números inteiros N e S que indicam respectivamente o número de dias do período de interesse e o
saldo da conta no início do período. Cada uma das N linhas seguintes contém um número inteiro indicando a movimentação de um dia
(valor positivo no caso de depósito, valor negativo no caso de retirada). A movimentação é dada para um período de N dias consecutivos:
a primeira das N linhas corresponde ao primeiro dia do período de interesse, a segunda linha corresponde ao segundo dia, e assim por diante.

Saída
Seu programa deve imprimir uma única linha, contendo um único número inteiro, o menor valor de saldo da conta no período dado.
Entrada
3 1000
100
-800
50

Saída
300

Entrada
6 -200
-100
1000
-2000
100
-50
2000

Saída
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
