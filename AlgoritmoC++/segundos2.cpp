/*12.	Faça um programa em C++ que faça exatamente o contrário da questão anterior, ou seja: o usuário deve informar a quantidade de horas, minutos e segundos, e o programa fará a conversão do valor digitado para segundos. Assim, se o usuário digitar os valores 21, 55 e 15, o programa dará como saída 78915 segundos.*/
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
    int segundos, h, m, s, mult1, mult2, soma;
	
	cout<<"Digite uma quantidade de horas: ";
    cin>>h;
    cout<<"Digite uma quantidade de minutos: ";
    cin>>m;
    cout<<"Digite uma quantidade de segundos: ";
    cin>>s;
    
    mult1 = h*3600;
    mult2 = m*60;
    soma = mult1+mult2+s;
    
    cout<<"Conversão do valor digitado para segundos: "<<soma;

    return 0;
}

