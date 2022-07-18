#include <iostream>
#include <math.h>

using namespace std;

int main () {
	int min, h, m;
	
	cin>>min;
	h=min/60;
	m=min%60;
	
	cout<<h<<"horas e "<<m<<"minutos";
	
	return 0;
}
