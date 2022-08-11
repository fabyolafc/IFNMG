/*Faça um programa que receba como entrada uma palavra de até 20 caracteres.
O programa escreverá na tela "SIM", caso a palavra termine com uma vogal. Caso contrário, escreverá "NAO".*/
 
#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");	
	char palavra[20];
	int t;
	
	cout <<"Digite uma palavra: ";
	cin >> palavra;	
	
	t = strlen (palavra);
	
	if (palavra[t-1] == 'a' || palavra[t-1] == 'e' || palavra[t-1] == 'i' || palavra[t-1] == 'o' || palavra[t-1] == 'u' || 
		palavra[t-1] == 'A' || palavra[t-1] == 'E' || palavra[t-1] == 'I' || palavra[t-1] == 'O' || palavra[t-1] == 'U'){
		cout << "SIM";
	}
	else {
		cout << "NAO";
	}
	
	return 0;
}
