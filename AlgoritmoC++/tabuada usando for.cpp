/*Fa�a um programa que receba como entrada a um n�mero inteiro entre 1 e 9,
o programa dar� como sa�da a tabuada do n�mero digitado.
Por exemplo, se a entrada for o n�mero 7, a sa�da ser�:*/
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
