#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main () {
	setlocale(LC_ALL, "Portuguese");
	string codigo, num1 = "0000", num2 = "0001", num3 = "0010", num4 = "0011", num5 = "0100";
	
	for (int i=0; i<1000; i++) {
		cout << "Qual o tipo de interrup��o: ";
		cin >> codigo;
		
		if (codigo == num1) {
			cout << "Esperar por novo sinal interrup��o";
			Sleep(2000);
			system("cls");
			system("pause");
		} else if (codigo == num2) {
			cout << "Chamar a fun��o de grava��o em discos de armazenamento";
			Sleep(2000);
			system("cls");
			system("pause");
		} else if (codigo == num3) {
			cout << "Chamar a fun��o de leitura em mem�ria principal";
			Sleep(2000);
			system("cls");
			system("pause");
		} else if (codigo == num4) {
			cout << "Chamar a rotina de detec��o e corre��o de falha em hardware";
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
