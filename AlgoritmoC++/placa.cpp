/*Fa�a um programa que receba como entrada uma string capaz de armazenar at� 15 caracteres.
O programa verificar� se o valor digitado corresponde a uma placa de um ve�culo brasileiro.
Para uma placa ser v�lida � necess�rio:
possuir exatamente 8 caracteres; e
os 3 primeiros caracteres devem ser letras mai�sculas; e
o quarto caractere deve ser um h�fen; e
os 4 �ltimos caracteres deve ser num�ricos.
O programa dar� como sa�da "PLACA VALIDA" ou "PLACA INVALIDA".*/

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");	
	char palavra[15];
	int t;
	
	cout <<"Digite a placa do ve�culo: ";
	cin >> palavra;	
	
	t = strlen (palavra);
	
	/*
	if ((t == 8) && (palavra[0] >='A' && palavra[0] <='Z') && (palavra[1] >='A' && palavra[1] <='Z') && 
	(palavra[2] >='A' && palavra[2] <='Z') && (palavra[3] == '-') && (palavra[4] >='0' && palavra[4] <='9') &&
	 (palavra[5] >='0' && palavra[5] <='9') && (palavra[6] >='0' && palavra[6] <='9') && (palavra[7] >='0' && palavra[7] <='9')){	
		cout << "PLACA VALIDA";
	}
	else{
		cout << "PLACA INVALIDA";
	}*/
	
	if ((t == 8) && (palavra[0, 1, 2] >='A' && palavra[0, 1, 2] <='Z') && (palavra[3] == '-') && (palavra[4, 5, 6, 7] >='0' && palavra[4, 5, 6, 7] <='9')){	
		cout << "PLACA VALIDA";
	}
	else{
		cout << "PLACA INVALIDA";
	}
	
	return 0;
}
