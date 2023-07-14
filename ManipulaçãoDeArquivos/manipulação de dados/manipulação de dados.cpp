#include <iostream>
#include <fstream>
using namespace std;

int main () {
	ofstream fout; // tipo de dado para manipular arquivo
	fout.open("dados.txt"); // criar arquivo
	if (!fout) {
		cout << "Erro ao criar o arquivo.";
		return 0;
	}
	fout << "Fabyola\n";
		for (int i = 1; i<=10; i++) {
		fout << i << endl;
	}
	fout.close();
	
	return 0;
}

