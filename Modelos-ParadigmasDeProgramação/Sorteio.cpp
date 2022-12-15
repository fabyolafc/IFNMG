#include <iostream>
#include <locale.h>
//Utilizada para o srand
#include <stdlib.h>
//Utilicada para o time
#include <time.h>

using namespace std;

int main (void) {
	setlocale(LC_ALL, "Portuguese");
	
	int aposta = 0;
	
	cout << "Quantos n�meros voc� quer apostar: ";
	cin >> aposta;
	
	cout << "Digite " << aposta << " n�meros: ";
	int nEscolhidos[aposta];
	
	for (int i=0; i<aposta; i++) {
		cin >> nEscolhidos[i];
	}
	
	srand(time(0));
	int vetor[6];
	int temp = 0;
	
	for (int i=0; i<6; i++) {
		vetor[i] = rand() % 60;
	}
	
	cout << "\nN�meros sorteados: " << endl;
	for (int i=0; i<6; i++) {
		cout << vetor[i] << " | ";
	}
	
	int nAcertos = 0;
	for (int i=0; i<aposta; i++) {
		for (int j=0; j<6; j++) {
			if (nEscolhidos[i] == vetor[j]) {
				nAcertos ++;
			}
		}
	}
	
	cout << "\n\nVoc� acertou " << nAcertos << " n�meros";
	
	return 0;
}
