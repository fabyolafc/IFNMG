/*Fa�a um programa que solicite ao usu�rio que digite um n�mero inteiro positivo n.
Em seguida o programa solicitar� ao usu�rio que digite n n�meros inteiros. Ao final o programa exibir� na tela duas linhas:
a primeira contendo a quantidade de n�meros pares dentre os n n�meros digitados;
e a segunda linha contendo a quantidade de n�meros �mpares dentre os n n�meros digitados.*/

#include <iostream>
#include <locale.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	int  tamanho, i, num, quantPar = 0, quantImpar = 0;
	
	cout <<"Digite o tamanho do vetor: ";
	cin>>tamanho;
	cout <<"Digite " << tamanho << " n�meros inteiros: ";

	for (i=1; i<=tamanho; i++){
		cin >> num;
		
		if (num%2==0){
			quantPar++;
		}else {
			quantImpar++;
		}
	}
	cout << "Quantidade de n�meros pares "<<quantPar;
	cout <<"\nQunatidade de n�meros impares "<<quantImpar;
	
	return 0;
}

