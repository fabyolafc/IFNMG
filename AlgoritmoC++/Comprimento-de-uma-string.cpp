/*Fa�a um programa que solicite ao usu�rio que digite uma palavra de at� 20 caracteres.
O programa exibir� na tela a quantidade de caracteres da palavra digitada.*/

#include <iostream>
#include <string.h>

using namespace std;

int main (){
	char palavra[20];
	int t;
	cout <<"Digite uma palavra: ";
	cin >> palavra;
	t = strlen (palavra);

	cout << t;
	return 0;
}
