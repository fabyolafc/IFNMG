#include <iostream>
#include <locale.h>

using namespace std;

struct Endereco {
	char rua[50];
	char numero[10];
	char bairro[12];
	char cidade[11];
	char cep[50];
	char uf[3];
};

struct Pessoa {
	char nome[50];
	char dNascimento[11];
	char cpf[15];
	char rg[30];
	Endereco end;	
	/*
	Endereco end1;
	Endereco end2;	
	Endereco end3; manda na questão 4
	
	Endereco end[50];
	int qEnds; manda questão 5
	*/		
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
	
	cout << "Informe seu rua: ";
	cin >> p.end.rua;
	
	cout << p.nome << endl << p.dNascimento << endl << p.cpf << endl << p.rg << endl << p.end.rua;
	
	return 0;
}
