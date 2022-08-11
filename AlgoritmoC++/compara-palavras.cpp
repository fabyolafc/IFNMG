/*Em C++ a função strcmp é utilizada para comparar duas strings. 
Faça um programa que solicite ao usuário que digite duas palavras de até 20 caracteres maiúsculos cada uma.
O programa escreverá na tela a menor das palavras conforme o resultado dados por strcmp. 
Caso as palavras forem iguais, o programa exibirá na tela qualquer uma delas. 
Assim, se as entradas forem as palavras "ANA" e "FERNANDO", a saída será "ANA"*/

#include <iostream>
#include <string.h>
using namespace std;

int main (){
	char palavra1[21], palavra2[21];
	int menorPalavra;
	
	cout << "Digite uma palavra: ";
	cin >> palavra1;
	cout << "Digite outra palavra: ";
	cin >> palavra2;
	
	menorPalavra = strcmp(palavra1, palavra2);
	
	if (menorPalavra < 0){
		cout << palavra1;
	}
	else{
		cout << palavra2;
	}
	
	return 0;
}


