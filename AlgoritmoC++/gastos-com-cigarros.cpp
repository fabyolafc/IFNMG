/*Pedro fuma em m�dia um ma�o e meio de cigarros por dia, todos os dias da semana. Fa�a
um programa que solicite ao usu�rio que informe o pre�o de um ma�o de cigarros e a
quantidade de anos que Pedro � fumante; o programa dar� como sa�da o total gasto com
cigarros durante este per�odo. Para fazer este exerc�cio considere que cada ano tem 365
dias.*/
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	float preco, fumaPorDia, quantidade, anos, gasto;
	
	cout << "Digite quantos cigarros voc� fuma por dia: ";
	cin>> fumaPorDia;
	cout << "Digite o pre�o de um ma�o de cigarros: ";
	cin>> preco;
	cout << "Digite a quantidade de anos que voc� � fumante: ";
	cin>> quantidade;
	
	anos = quantidade*365;
	gasto = fumaPorDia*anos*preco;
	
	cout<< "Total de gastos com cigarros durante esse periodo: "<<gasto;
	
	return 0;
}
