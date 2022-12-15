/*Desenvolva a sua própria versão da função strlen em C++. Ela deve se comportar
exatamente como a função strlen original. Deste modo, obviamente, sua função não poderá
fazer chamadas à função strlen.*/

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
