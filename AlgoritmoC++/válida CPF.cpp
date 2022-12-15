/*Faça um programa que solicite ao usuário que digite uma string de até 11 
caracteres contendo os dígitos numéricos de um CPF. O programa exibirá na tela se o 
CPF digitado é válido ou não (escreverá SIM ou NAO). 
Para verificar se um CPF é válido utilize o algoritmo de verificação dos dígitos 
verificadores descrito https://www.geradorcpf.com/algoritmo_do_cpf.htm.*/

#include <iostream>

using namespace std;

int main()
{
    int penultimoDigito, ultimoDigito, soma1 = 0, soma2 = 0;
    char CPF[12];

    cin >> CPF;

    /*
    soma1 recebe o primeiro somatório, 10 vezes primeiro digito, 9 vezes segundo digito... até 2 vezes nono digito

    soma2 recebe o segundo somatório, 11 vezes primeiro digito, 10 vezes segundo digito... até 3 vezes nono digito
     e fica faltando 2 vezes o décimo digito (penultimo digito do cpf) que será calculado posteriormente pois depende
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



    //veririca se os últimos digitos do cpf são iguais aos que foram encontrados, se sim o cpf é válido
    if(penultimoDigito == (CPF[9] - '0') && ultimoDigito == (CPF[10] - '0')){
        cout << "SIM";
    }
    else{
        cout << "NAO";
    }

    return 0;
}
