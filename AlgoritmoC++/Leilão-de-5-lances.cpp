/*Em um sistema de leil�o um produto � vendido pelo pre�o da maior oferta.
Fa�a um programa que receba como entrada 5 n�meros reais representando os valores das ofertas de compra de um produto.
O programa escrever� na tela o valor do pre�o de venda do produto (o lance vencedor).*/
#include <iostream>
#include <string.h>
using namespace std;
int main () {
	 float a, b, c, d, e;
    float maior;
    
    cout <<"Digite 5 numeros:";
    cin >> a >> b >> c >> d >> e;
    
    if(a > b){
       maior = a;
    }else{
       maior = b; 
    }
    
    if(maior > c){
        maior = maior;
    }else{
        maior = c;
    }

    if(maior > d){
        maior = maior;
    }else{
        maior = d;
    }
    
    if(maior > e){
        maior = maior;
    }else{
        maior = e;
    }
     
    cout << maior;
    
    return 0;
}

