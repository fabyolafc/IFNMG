/*12.	Fa�a um programa em C++ que fa�a exatamente o contr�rio da quest�o anterior, ou seja: o usu�rio deve informar a quantidade de horas, minutos e segundos, e o programa far� a convers�o do valor digitado para segundos. Assim, se o usu�rio digitar os valores 21, 55 e 15, o programa dar� como sa�da 78915 segundos.*/
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
    
    cout<<"Convers�o do valor digitado para segundos: "<<soma;

    return 0;
}

