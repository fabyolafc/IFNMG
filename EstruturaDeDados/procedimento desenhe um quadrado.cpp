/*Faça um procedimento que receba como parâmetro um número inteiro. Este procedimento fará o desenho de um quadrado na tela. 
Um quadrado pode ser desenhado usando os caracteres “espaço”, “adição”, “subtração” e “pipe” (barra vertical). 
Veja o exemplo de um quadrado de lado 8:

+------+
|      |
|      |
|      |
|      |
|      |
|      |
+------+

Após fazer o seu procedimento, utilize-o para desenhar quadrados de lados 4, 10 e 12.*/
#include <iostream>

using namespace std;

void quadrado (int n) {
	cout << "+";
	for(int i=3;i<=n;i++) {
		cout << "-";
	}
	cout << "+\n";
	for(int i=3;i<=n;i++) {
		cout << "|";
		for(int j=3;j<=n;j++) {
			cout << " ";
		}
		cout << "|\n";
	}
	cout << "+";
	for(int i=3;i<=n;i++) {
		cout << "-";
	}
	cout << "+\n";
	return;
}


int main () {
	
	cout << "Quadrado com 8 lados: \n";
	quadrado(8);
	cout << "Quadrado com 4 lados: \n";
	quadrado(4);
	cout << "Quadrado com 10 lados: \n";
	quadrado(10);
	cout << "Quadrado com 12 lados: \n";
	quadrado(12);
	
	return 0;
}
