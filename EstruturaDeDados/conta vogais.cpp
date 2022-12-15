#include <iostream>
#include <string.h>

using namespace std;

int contaVogais (char p[]) {
	int q=0;
	char vogais[] = "AEIOUaeiou";
	for (int i=0; i<strlen(p); i++) {
		for (int j=0; j<strlen(vogais); j++) {
			if (p[i] == vogais[j]) {
				q++;
			}
		}
	}
	return q;
}

int main () {
	cout << contaVogais("AEIOUae");
	
	return 0;
}
