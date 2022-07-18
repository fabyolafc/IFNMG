#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float n1,n2,soma, subtracao, divisao, multiplicacao;
	
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;
	
	soma = n1 + n2;
	subtracao = n1 - n2;
	divisao = n1 / n2;
	multiplicacao = n1 * n2;
	
	cout << "Soma: " << soma;
	cout << "\nSubtração: " << subtracao;
	cout << "\nDivisão: " << divisao;
	cout << "\nMultiplicação: " << multiplicacao;
	
	return 0;
}
