/*Uma pessoa decidiu que sairá para passear somente se possuir pelo menos 50 reais e se estiver à noite. 
Esta pessoa também sairá se estiver à tarde e ela possuir pelo menos 20 reais. 
Nas outras situações ela ficará em casa assistindo TV.
Faça um programa que leia:
a quantidade de dinheiro que a pessoa possui; e
e o turno do dia (um caractere podendo ser "M", "T" ou "N", significando respectivamente manhã, tarde ou noite).
O programa escreverá na tela "PODE SAIR" ou "FIQUE EM CASA", dependendo da situação.*/
#include <iostream>
#include <string.h>
using namespace std;
int main () {
	char turno;
	float dinheiro;
	cout << "Quanto dinheiro você possui: ";
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

