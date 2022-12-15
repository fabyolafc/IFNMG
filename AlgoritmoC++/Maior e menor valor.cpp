/* Usuario digita 10 numeros inteiros. O programa exibe na tela o maior e o menor elemento dentrre os valores digitados*/
#include <iostream>
#include <locale.h>

using namespace std;

const int N = 10;
int main (){
	setlocale(LC_ALL, "Portuguese");
	int A[N], maior, menor;
	
	for (int i=0; i<N; i++){
		cout << "Digite o " << i+1 << char(167) << " número: ";
		cin >> A[i];
	}
	maior = menor = A[0];
	/*maior = A[0];
	menor = A[0];*/
	
	for (int i=1; i<N; i++){
		if (A[i]>maior){
			maior = A[i];
		}
		if (A[i]<menor){
			menor = A[i];
		}
	}
	cout << "Maior: "<<maior<<endl<<"Menor: "<<menor;
	
	return 0;
}
