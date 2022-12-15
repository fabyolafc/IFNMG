/*Faça um programa que solicite ao usuário que digite um número inteiro positivo n.
Em seguida o programa solicitará ao usuário que digite n números inteiros. Ao final o programa exibirá na tela duas linhas:
a primeira contendo a quantidade de números pares dentre os n números digitados;
e a segunda linha contendo a quantidade de números ímpares dentre os n números digitados.*/

#include <iostream>
#include <locale.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	int  tamanho, i, num, quantPar = 0, quantImpar = 0;
	
	cout <<"Digite o tamanho do vetor: ";
	cin>>tamanho;
	cout <<"Digite " << tamanho << " números inteiros: ";

	for (i=1; i<=tamanho; i++){
		cin >> num;
		
		if (num%2==0){
			quantPar++;
		}else {
			quantImpar++;
		}
	}
	cout << "Quantidade de números pares "<<quantPar;
	cout <<"\nQunatidade de números impares "<<quantImpar;
	
	return 0;
}

