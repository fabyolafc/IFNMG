/*Faça um programa em C++ que solicite ao usuário que digite um número. O programa exibirá
na tela a tabuada de multiplicação deste número.*/
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float numero, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
	
	cout << "Digite o numero que deseja saber a tabuada: ";
	cin >> numero;
	
	t0=numero*0;
	t1=numero*1;
	t2=numero*2;
	t3=numero*3;
	t4=numero*4;
	t5=numero*5;
	t6=numero*6;
	t7=numero*7;
	t8=numero*8;
	t9=numero*9;
	t10=numero*10;
	
	cout << numero << " X 0 = " << t0 << "\n";
	cout << numero << " X 1 = " << t1 << "\n";
	cout << numero << " X 2 = " << t2 << "\n";
	cout << numero << " X 3 = " << t3 << "\n";
	cout << numero << " X 4 = " << t4 << "\n";
	cout << numero << " X 5 = " << t5 << "\n";
	cout << numero << " X 6 = " << t6 << "\n";
	cout << numero << " X 7 = " << t7 << "\n";
	cout << numero << " X 8 = " << t8 << "\n";
	cout << numero << " X 9 = " << t9 << "\n";
	cout << numero << " X 10 = " << t10 << "\n";
	
	
	return 0;
}
