/*Fa�a um programa que solicite ao usu�rio que digite 10 n�meros reais.
O programa exibir� na tela a m�dia aritm�tica dos valores digitados.
Em seguida exibir� na tela todos os n�meros (dentre os digitados) que s�o maiores que esta m�dia.*/
#include <iostream>
#include <locale.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	float num[10], soma=0, media=0;
	
	for (int i=0; i<10; i++){
		cout << "Digite o "<< i+1 <<"� n�mero real: ";
		cin >> num[i];
		
		soma+=num[i];
		media=soma/10;	
	}
	cout << "M�dia: " << media << endl;
	cout << "Valores maiores que a m�dia: ";
	
	for (int i=0; i<10; i++){
		if (num[i]>media){
			cout << num[i]<<" ";	
		}
	}
	
	return 0;
}
