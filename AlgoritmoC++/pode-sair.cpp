/*Uma pessoa decidiu que sair� para passear somente se possuir pelo menos 50 reais e se estiver � noite. 
Esta pessoa tamb�m sair� se estiver � tarde e ela possuir pelo menos 20 reais. 
Nas outras situa��es ela ficar� em casa assistindo TV.
Fa�a um programa que leia:
a quantidade de dinheiro que a pessoa possui; e
e o turno do dia (um caractere podendo ser "M", "T" ou "N", significando respectivamente manh�, tarde ou noite).
O programa escrever� na tela "PODE SAIR" ou "FIQUE EM CASA", dependendo da situa��o.*/
#include <iostream>
#include <string.h>
using namespace std;
int main () {
	char turno;
	float dinheiro;
	cout << "Quanto dinheiro voc� possui: ";
	cin >> dinheiro;
	cout << "O turno do dia: ";
	cin >> turno;
	
	if (dinheiro >=50 && turno == 'N'){
		cout <<"PODE SAIR";
	}
	else{
		
		if (dinheiro >=20 && turno == 'T'){
			cout <<"PODE SAIR";
		}
		else{
			cout <<"FIQUE EM CASA";
		}
	}
return 0;
}

