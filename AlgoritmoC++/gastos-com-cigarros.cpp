/*Pedro fuma em média um maço e meio de cigarros por dia, todos os dias da semana. Faça
um programa que solicite ao usuário que informe o preço de um maço de cigarros e a
quantidade de anos que Pedro é fumante; o programa dará como saída o total gasto com
cigarros durante este período. Para fazer este exercício considere que cada ano tem 365
dias.*/
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float preco, fumaPorDia, quantidade, anos, gasto;
	
	cout << "Digite quantos cigarros você fuma por dia: ";
	cin>> fumaPorDia;
	cout << "Digite o preço de um maço de cigarros: ";
	cin>> preco;
	cout << "Digite a quantidade de anos que você é fumante: ";
	cin>> quantidade;
	
	anos = quantidade*365;
	gasto = fumaPorDia*anos*preco;
	
	cout<< "Total de gastos com cigarros durante esse periodo: "<<gasto;
	
	return 0;
}
