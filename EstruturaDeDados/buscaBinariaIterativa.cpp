#include <iostream>

using namespace std;

int buscaBinariaIterativa ( int V[], int n, int x ){
int li, ls;
li = 0;
ls = n - 1;
while (li <= ls){
int m = (li + ls) / 2;

if ( V[m] == x )
return m;
else if ( x < V[m] )
ls = m-1;
else
li = m+1;

}
return -1;
}

int main () {
	
	int V[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, x=10;
	
	cout << buscaBinariaIterativa(V, 10, x);
	
	return 0;
}
