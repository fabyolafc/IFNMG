/*Fa�a um programa que solicite ao usu�rio que digite uma palavra de at� 20 caracteres e um caractere.
O programa escrever� na tela a palavra ao contr�rio.*/
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
