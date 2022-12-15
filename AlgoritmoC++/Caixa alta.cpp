/*Faça um programa que solicite ao usuário que digite uma palavra de até 50 caracteres.
O programa deverá converter o texto digitado para maiúsculo e exibi-lo na tela.
Caracteres que não forem minúsculos (como números e símbolos) não podem ser convertidos para maiúsculo, logo, devem penas serem exibidos na tela.
Assim, caso a entrada fosse o texto "iFnMG@4" a saída seria "IFNMG@4".*/
/*strupr(); //converte para maiúsculo*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char palavra[51];

    cin >> palavra;

    for(int i=0;i<int(strlen(palavra));i++){

        if( palavra[i] >= 'a' && palavra[i] <= 'z'){
             palavra[i] = palavra[i] - 32;
        }

    }

    cout << palavra;
    return 0;
}

