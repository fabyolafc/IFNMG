/*Faça um programa que receba como entrada a um número inteiro entre 1 e 9,
o programa dará como saída a tabuada do número digitado.
Por exemplo, se a entrada for o número 7, a saída será:*/
#include <iostream>

using namespace std;

int main(){
	int n, i;
	cout << "Digite um numero: ";
	cin >> n;
	
	for (i=0; i<=10; i++){
		cout <<n<< " x " <<i<< " = " <<i*n<< endl;
	
	}
	
	return 0;
	
}
