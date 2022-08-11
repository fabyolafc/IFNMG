#include <iostream>
#include <locale.h>

const float PREC0 = 0.30;
#define PRECO_PROMOCIONAL 0.25;

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	int q;
	float total;
	
	cout << "Digite a quantidade de maçãs: ";
	cin >> q;
	
	if (q<12){
		total = q * PREC0;
	}
	else{
		total = q * PRECO_PROMOCIONAL
	}
	cout << "Total a pagar: " <<total;
	
return 0;	
}

