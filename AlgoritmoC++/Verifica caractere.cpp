/*Fa�a um programa que solicite ao usu�rio que digite uma palavra de at� 20 caracteres e um caractere.
O programa escrever� na tela "SIM" se o caractere estiver contido na palavra. Caso contr�rio escrever� "NAO".*/
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char p[21], p2;
    bool t = false;
    int i = 0;

    cin >> p;
    cin >> p2;

    while(i < 20){
        if(p[i] == p2){
            t = true;
        }
        i++;
    }


    if(t == true)
        cout << "SIM";
    else
        cout << "NAO";


    return 0;
}
