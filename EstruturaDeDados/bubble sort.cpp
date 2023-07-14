#include <iostream>

using namespace std;

void vetor (int numeros[], int tamanho) {
	int aux;
	for (int i=0; i<tamanho; i++) {
		for(int j=0; j<tamanho-1; j++) {
			if(numeros[j] > numeros[j+1]) {
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
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
