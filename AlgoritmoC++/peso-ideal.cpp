#include <iostream>
#include <locale.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	char sexo;
	float altura, peso;
	
	cout << "Informe a sua altura: ";
	cin >> altura;
	cout << "Informe o seu sexo (M/F): ";
	cin >> sexo;
	
	if (altura>0 && altura <= 3.00){
		
		if (sexo == 'M'){
			peso = (72.7 * altura) - 58;
			cout << "peso ideal: " <<peso;
		}
		else{
			
			if (sexo == 'F') {
				peso = (62.1 * altura)- 44.7;
				cout << "peso ideal: " <<peso;
			}
			else {
				cout << "Sexo invalido. Digite M ou F!";
			}
		}
	}
	else{
		cout <<"Altura invalida!";
	}
	
return 0;	
}

