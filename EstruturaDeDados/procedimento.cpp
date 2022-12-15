#include <iostream>

using namespace std;

void tabuada (int n) {
	for (int i=0; i<=10; i++) {
		cout << n << " x " << i << " = " << i*n << endl;
	}
	return;
}

void tabuadas (int qtd) {
	for (int i=1; i<=qtd; i++) {
		cout << "\n\nTabuada de " << i << endl;
		tabuada(i);
	}
}

int main () {
	
	tabuadas(10);
	
	return 0;
}
