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

int main () {
	setlocale(LC_ALL, "Portuguese");

	Endereco e;
	
	cout << "Informe sua rua: ";;
	cin >> e.rua;
	
	cout << "Informe seu numero: ";;
	cin >> e.numero;
	
	cout << "Informe seu bairro: ";;
	cin >> e.bairro;
	
	cout << "Informe sua cidade: ";;
	cin >> e.cidade;
	
	cout << "Informe seu CEP: ";;
	cin >> e.cep;
	
	cout << "Informe seu UF: ";;
	cin >> e.uf;
	
	return 0;
}
