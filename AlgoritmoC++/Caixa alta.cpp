/*Fa�a um programa que solicite ao usu�rio que digite uma palavra de at� 50 caracteres.
O programa dever� converter o texto digitado para mai�sculo e exibi-lo na tela.
Caracteres que n�o forem min�sculos (como n�meros e s�mbolos) n�o podem ser convertidos para mai�sculo, logo, devem penas serem exibidos na tela.
Assim, caso a entrada fosse o texto "iFnMG@4" a sa�da seria "IFNMG@4".*/
/*strupr(); //converte para mai�sculo*/

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

