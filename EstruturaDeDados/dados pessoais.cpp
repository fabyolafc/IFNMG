#include <iostream>
#include <locale.h>

using namespace std;

struct Pessoa {
	char nome[50];
	char dNascimento[11];
	char cpf[15];
	char rg[30];
	
};

int main () {
	setlocale(LC_ALL, "Portuguese");

	Pessoa p;
	
	cout << "Informe seu nome: ";
	cin >> p.nome;
	
	cout << "Informe sua data de nascimento: ";
	cin >> p.dNascimento;
	
	cout << "Informe seu CPF: ";
	cin >> p.cpf;
	
	cout << "Informe seu RG: ";
	cin >> p.rg;
	
	return 0;
}
