#include <iostream>
#include <fstream>
using namespace std;
int main () {
	int a = 10;
	float b = 30;
	int c[3] = {100, 200, 300};
	char d[20] = "Fabyola";
	ofstream fout;
	fout.open("dados.bin", ios::binary);
	if (!fout) {
		cout << "Erro ao criar o arquivo.";
	return 0;
	}
	fout.write ( (char *)&a, sizeof(a) ); // write escreve o arquivo;
	fout.write ( (char *)&b, sizeof(b) );
	fout.write ( (char *)c, sizeof(c) ); // c já é vetor não precisa ser referenciado, ou seja, não precisa do &;
	fout.write ( d, sizeof(d) ); // d já é um char, ou seja, não precisa informar char antes;
	fout.close();
	return 0;
}
