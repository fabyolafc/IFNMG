#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main () {
	setlocale(LC_ALL, "Portuguese");
	string codigo, num1 = "0000", num2 = "0001", num3 = "0010", num4 = "0011", num5 = "0100";
	
	for (int i=0; i<1000; i++) {
		cout << "Qual o tipo de interrupção: ";
		cin >> codigo;
		
		if (codigo == num1) {
			cout << "Esperar por novo sinal interrupção";
			Sleep(2000);
			system("cls");
			system("pause");
		} else if (codigo == num2) {
			cout << "Chamar a função de gravação em discos de armazenamento";
			Sleep(2000);
			system("cls");
			system("pause");
		} else if (codigo == num3) {
			cout << "Chamar a função de leitura em memória principal";
			Sleep(2000);
			system("cls");
			system("pause");
		} else if (codigo == num4) {
			cout << "Chamar a rotina de detecção e correção de falha em hardware";
			Sleep(2000);
			system("cls");
			system("pause");
		} else if (codigo == num5) {
			cout << "Chamar a rotina para salvamento dos dados em processamento";
			Sleep(2000);
			system("cls");
			system("pause");
		}
	}
	
	return 0;
}
