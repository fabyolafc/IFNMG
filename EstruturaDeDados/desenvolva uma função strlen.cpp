/*Desenvolva a sua pr�pria vers�o da fun��o strlen em C++. Ela deve se comportar
exatamente como a fun��o strlen original. Deste modo, obviamente, sua fun��o n�o poder�
fazer chamadas � fun��o strlen.*/

#include <iostream>

using namespace std;

int tamanhoPalavra (char p[]) {
	int q=0;
	for (int i=0; i<p[i]; i++) {
		q++;
	}
	return q;
}

int main () {
	
	char p[50];
	cin >> p;
	cout << tamanhoPalavra(p);
	
	return 0;
}
