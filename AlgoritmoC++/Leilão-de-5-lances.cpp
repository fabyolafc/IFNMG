/*Em um sistema de leilão um produto é vendido pelo preço da maior oferta.
Faça um programa que receba como entrada 5 números reais representando os valores das ofertas de compra de um produto.
O programa escreverá na tela o valor do preço de venda do produto (o lance vencedor).*/
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

