/*Faça um programa que solicite ao usuário que digite uma palavra de até 20 caracteres e um caractere.
O programa escreverá na tela a palavra ao contrário.*/
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char p[21];
	
	cout << "Digite uma palavra: ";
	cin >> p;
	
	int i=strlen(p)-1;
	while (i>=0){
		cout <<p[i];
		i--;
	}
	return 0;
}
