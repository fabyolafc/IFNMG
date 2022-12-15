#include <iostream>

using namespace std;

int main () {
	
	char nomePar[11], nomeImpar[11];
	int num1=0, num2=0, partidas, soma, resultado[1000], cont=0;
	
	cin >> partidas;
	
	while (partidas !=0){
		cin >> nomePar >> nomeImpar;
		
		for (int i=0; i<partidas; i++) {
			cin >> num1 >> num2;
			soma = num1 + num2;	
			
			if (soma % 2 == 0) {
				resultado[i] = 1;
			}else {
				resultado[i] = 2;
			}
		}
		
		cont++;
        cout << "Teste " << cont << endl;
		
		for (int i=0; i<partidas; i++) {
			if (resultado[i] == 1) {
				cout << nomePar << endl;
			}else {
				cout << nomeImpar << endl;
			}
		}
		
		cin >> partidas;
	}
     
	return 0;
}
