/*DADINHOS - Compra de Dadinhos
dadinhos

Um Dadinho � um doce muito popular no Brasil, por ser gostoso e barato. � t�o barato que Rodovalho, sempre que toma caf� com seus amigos, 
compra v�rios Dadinhos para serem comidos enquanto o caf� � bebido.

H� N pessoas no grupo de amigos de Rodovalho, e ele quer comprar D dadinhos para cada pessoa. Considerando que cada dadinho custa C centavos,
 quanto Rodovalho ir� gastar?

 

Entrada
A entrada consiste em v�rios casos de teste. Cada caso cont�m uma �nica linha contendo tr�s valores, N, C e D (1 = N, C, D = 100).

A entrada termina com N=C=D=0.

Sa�da
Para cada caso de teste, imprima uma �nica linha contendo um �nico inteiro, indicando quanto Rodovalho ir� gastar, em centavos.

Examplo
Entrada:
3 2 15
1 1 1
0 0 0

Sa�da:
90
1*/

#include <iostream>

using namespace std;

int main () {
	
	int n, c, d, resposta;
	
	cin >> n >> c >> d;
	
	while (n !=0 && c !=0 && d !=0){
		
		resposta = n * c * d;
		cout << resposta << endl;
		
		cin >> n >> c >> d;
		
	}
     
	return 0;
}
