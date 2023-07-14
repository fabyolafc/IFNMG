#include <iostream>

using namespace std;

void vetor (int numeros[], int tamanho) {
	int aux, menor, posicao;
	bool troca;
	for (int i=0; i<tamanho-1; i++) {
		menor = numeros[i];
		posicao = i;
		troca = false;		
		for (int j=i+1; j<tamanho; j++) {
			if(numeros[j] < menor) {
				menor = numeros[j];
				posicao = j;
				troca = true;
			}
		}
		if(troca) {
			aux = numeros[i];
			numeros[i] = menor;
			numeros[posicao] = aux;
		}
	}
}

void mostrarVetor (int numeros[], int tamanho) {
	int aux;
	for (int i=0; i<tamanho; i++) 
		cout << numeros[i] << " ";
		
}

int main () {
	int numeros[20] = {5, 6, 3, 7, 2, 1, 4, 9, 10, 8, 20, 11, 13, 12, 15, 14, 18, 19, 17, 16};
	
	vetor(numeros, 20);
	mostrarVetor(numeros, 20);
	
	
	return 0;
}
