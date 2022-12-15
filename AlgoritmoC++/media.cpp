/*Faça um programa que solicite ao usuário que digite 10 números reais.
O programa exibirá na tela a média aritmética dos valores digitados.
Em seguida exibirá na tela todos os números (dentre os digitados) que são maiores que esta média.*/
#include <iostream>
#include <locale.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	float num[10], soma=0, media=0;
	
	for (int i=0; i<10; i++){
		cout << "Digite o "<< i+1 <<"º número real: ";
		cin >> num[i];
		
		soma+=num[i];
		media=soma/10;	
	}
	cout << "Média: " << media << endl;
	cout << "Valores maiores que a média: ";
	
	for (int i=0; i<10; i++){
		if (num[i]>media){
			cout << num[i]<<" ";	
		}
	}
	
	return 0;
}
