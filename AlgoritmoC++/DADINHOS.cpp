/*DADINHOS - Compra de Dadinhos
dadinhos

Um Dadinho é um doce muito popular no Brasil, por ser gostoso e barato. É tão barato que Rodovalho, sempre que toma café com seus amigos, 
compra vários Dadinhos para serem comidos enquanto o café é bebido.

Há N pessoas no grupo de amigos de Rodovalho, e ele quer comprar D dadinhos para cada pessoa. Considerando que cada dadinho custa C centavos,
 quanto Rodovalho irá gastar?

 

Entrada
A entrada consiste em vários casos de teste. Cada caso contém uma única linha contendo três valores, N, C e D (1 = N, C, D = 100).

A entrada termina com N=C=D=0.

Saída
Para cada caso de teste, imprima uma única linha contendo um único inteiro, indicando quanto Rodovalho irá gastar, em centavos.

Examplo
Entrada:
3 2 15
1 1 1
0 0 0

Saída:
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
