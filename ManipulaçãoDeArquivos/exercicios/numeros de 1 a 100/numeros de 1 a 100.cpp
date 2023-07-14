/*Faça um programa em c++ que grave os números inteiros de 1 a 100 em um arquivo texto chamado "numeros.txt". 
Em seguida o seu programa deverá carregar estes números do arquivo para um vetor. 
Então ele gravará este vetor em um arquivo binário chamado "numeros.bin". */

#include <iostream>
#include <fstream>

using namespace std;

int main () {
	
	// criando o arquivo e gravando os números no arquivo "numeros.txt"
	ofstream fout;
	fout.open("numeros.txt");
	if (!fout) {
		cout << "Erro ao criar o arquivo.";
		return 0;
	}
	for (int i=1; i<=100; i++) {
		fout << i << " ";
	}
	fout.close();
	
	// gravando os numeros do arquivo em um vetor
	ifstream fin;
	fin.open("numeros.txt"); 
	if (!fin) {
		cout << "Erro ao abrir o arquivo.";
		return 0;
	}
	int *V = new int[100];
	for (int i=1; i<=100; i++) {
		fin >> V[i];
	}
	fin.close();
	for (int i=1; i<=100; i++) {
		cout << V[i] << " ";
	}
	delete[] V;

	
	// gravará o vetor em um arquivo binário chamado "numeros.bin"	
	fout.open("numeros.bin", ios::binary);
	if (!fout) {
		cout << "Erro ao criar o arquivo.";
		return 0;
	}
	fout.write ( (char *)V, sizeof(int)*100 );	
	fout.close();
	
	return 0;
}
