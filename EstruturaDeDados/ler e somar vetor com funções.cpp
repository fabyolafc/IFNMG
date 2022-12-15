#include <iostream>

using namespace std;

int soma (int V[], int n) {
	int s = 0;
	for (int i = 0; i < n; i ++) {
		s += V[i];
	}
	return s;
}

void lervetor (int V[], int n) {
	cout << "Digite um vetor de " << n << " elementos: ";
	for (int i = 0; i < n; i ++) {
		cin >> V[i];
	}
}

int main () {
	int n;
	cin >> n;
	int A[n];
	lervetor(A, n);
	cout << "A soma eh: " << soma(A, n);
	return 0;
}
