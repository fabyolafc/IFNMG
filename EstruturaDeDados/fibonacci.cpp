#include <iostream>

using namespace std;

const int N = 100;

unsigned int r[N];

unsigned int fib (unsigned int n) {
	if (r[n] != 0) {
		return r[n];
	} if (n<=2) {
		r[n] = 1;
		return r[n];
	} 
	else {
		return fib(n-1) + fib(n-2);
		return r[n];
	}
}

int main () {
	
	for (int j=1; j<=100; j++) {
		for (int i=0; i<N; i++) {
			r[i] = 0;
		}
		
		cout << j << " -> " << fib(j) << endl;
	}
	
	return 0;
	
}
