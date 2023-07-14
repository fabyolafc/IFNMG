#include <iostream>
#include <fstream>
using namespace std;
int main () {
	ifstream fin;
	fin.open("numeros.txt"); //abrir o arquivo antes criado
	if (!fin) {
		cout << "Erro ao tentar abrir o arquivo.";
		return 0;
	}
	int *A = new int[10];
		for (int i=0; i<10; i++) {
		fin >> A[i];
	}
	char *nome = new char[50];
	fin >> nome;
	fin.close();
	for (int i=0; i<10; i++) {
		cout << A[i] << " ";
	}
	cout << endl << nome;
	delete[] A;
	delete[] nome;
	return 0;
}
