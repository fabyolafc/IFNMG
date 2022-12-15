/*Fa�a um programa que solicite ao usu�rio que digite uma string de at� 11 
caracteres contendo os d�gitos num�ricos de um CPF. O programa exibir� na tela se o 
CPF digitado � v�lido ou n�o (escrever� SIM ou NAO). 
Para verificar se um CPF � v�lido utilize o algoritmo de verifica��o dos d�gitos 
verificadores descrito https://www.geradorcpf.com/algoritmo_do_cpf.htm.*/

#include <iostream>

using namespace std;

int main()
{
    int penultimoDigito, ultimoDigito, soma1 = 0, soma2 = 0;
    char CPF[12];

    cin >> CPF;

    /*
    soma1 recebe o primeiro somat�rio, 10 vezes primeiro digito, 9 vezes segundo digito... at� 2 vezes nono digito

    soma2 recebe o segundo somat�rio, 11 vezes primeiro digito, 10 vezes segundo digito... at� 3 vezes nono digito
     e fica faltando 2 vezes o d�cimo digito (penultimo digito do cpf) que ser� calculado posteriormente pois depende
     do calculo de soma1 para descobrir o penultimo digito do cpf;
    */


    int j = 10, y = 11;
    for(int i = 0; i < 9; i++){
        soma1 += (CPF[i] - '0') * j;
        soma2 += (CPF[i] - '0') * y;
        j--;
        y--;
    }


    //descobre o penultimo digito do cpf
    if(soma1 % 11 < 2){
        penultimoDigito = 0;
    }
    else{
        penultimoDigito = 11 - (soma1 % 11);
    }

    //acrescenta na soma2 o calculo que faltava: 2 * penultimo digito do cpf
    soma2 += penultimoDigito * 2;


    //descobre o ultimo digito cpf
    if(soma2 % 11 < 2){
        ultimoDigito = 0;
    }
    else{
        ultimoDigito = 11 - (soma2 % 11);
    }



    //veririca se os �ltimos digitos do cpf s�o iguais aos que foram encontrados, se sim o cpf � v�lido
    if(penultimoDigito == (CPF[9] - '0') && ultimoDigito == (CPF[10] - '0')){
        cout << "SIM";
    }
    else{
        cout << "NAO";
    }

    return 0;
}
