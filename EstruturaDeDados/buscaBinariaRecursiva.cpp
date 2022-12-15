#include <iostream>

using namespace std;

int buscaBinariaRecursiva ( int V[], int li, int ls, int x ){
if (li > ls)
return -1;
int m = (li + ls) / 2;
if ( V[m] == x )
return m;
else if (x < V[m])
return buscaBinariaRecursiva( V, li, m-1, x );
else
return buscaBinariaRecursiva( V, m+1, ls, x );

}
int buscaBinariaRecursiva ( int V[], int n, int x ){
return buscaBinariaRecursiva(V, 0, n-1, x);
}

int main () {
	
	int V[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, x=10;
	
	cout << buscaBinariaRecursiva(V, 10, x);
	
	return 0;
}
