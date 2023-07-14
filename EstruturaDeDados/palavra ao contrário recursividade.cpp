#include <iostream>
#include <string.h>

using namespace std;

void contrario (char p[], int quantLetra) {
	if (quantLetra < 0) {
		return;
	} else {
		cout << p[quantLetra];
		contrario (p, quantLetra - 1);
	}
}

void contrario (char p[]) {
	contrario (p, strlen(p) - 1);
}

int main () {
	
	contrario("Fabyola");
	
	return 0;
	
}
