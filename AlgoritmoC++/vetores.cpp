/*
Vetores
- Saõ variáveis homogênias.
- Para declararmos um vetor devemos especificar o seu tamanho entre colchetes.
- Strings são vetores de char.
- Vetores de char podem ser lids e exibidos com cin e cout diretamente.
  Para outros tipos, precisamos acessar cada elementos individualmente, normalmente usando uma estrututa de rrepetição.
  
  int A[10];
		
	for (int i=0; i<10; i++){
		cout << "Digite um numero: ";
		cin >> A[i];
	}
	for (int i=9; i>0; i--){
		cout << A[i]<<" ";
	}
*/
/* Usuario digita dois vetores de 10 elementos (A e B). O programa exibirá na tela a soma de A e B.*/
#include <iostream>

using namespace std;
int main () {
	int A[10], B[10], c;
	
	for (int i=0; i<10; i++){
		cout << "Digite os valores de A: ";
		cin >> A[i];
	}
	for (int i=0; i<10; i++){
		cout << "Digite os valores de B: ";
		cin >> B[i];
	}
	for (int i=0; i<10; i++){
		c = A[i] + B[i];
		cout << "Soma dos vetores: " << c << endl;
	}	
	
	return 0;
}
