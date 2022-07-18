#include <iostream>
#include <math.h>

using namespace std;

int main () {
	float raio, A, P;
	
	cout<<"Digite o raio: ";
	cin>>raio;
	
	P = 2*3.1416*raio;
	A = 3.1416*pow(raio,2);
	
	cout<<"Perimetro: "<<P<<endl;
	cout<<"Area: "<<A;
	
	return 0;
}
