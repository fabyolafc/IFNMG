#include <iostream>
#include <math.h>

using namespace std;

int main () {
	float n1, n2, n3, n4, total, arredondado;
	
	cout<<"Digite as 4 notas: ";
	cin>>n1>>n2>>n3>>n4;
	
	total = n1+n2+n3+n4;
	arredondado = round(total);
	
	cout<<"Total: "<<arredondado;
	
	return 0;
}
