#include <iostream>
#include <locale.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	float p1, p2, pu1, pu2;
	int q1, q2;
	
	cout << "Preço do pacote 1: ";
	cin >> p1;
	cout << "Quantidade do pacote 1: ";
	cin >> q1;
	cout << "Preço do pacote 2: ";
	cin >> p2;
	cout << "Quantidade do pacote 2: ";
	cin >> q2;
	
	pu1 = p1/q1;
	pu2 = p2/q2;
	
	if (pu1<pu2){
		cout << "Compre o pacote com " << q1 << " fraldas";
	}
	else{
		if (pu2<pu1){
			cout << "Compre o pacote com " << q2 << " fraldas";
		}
		else{
			cout <<"Compre qualquer pacote";
		}
	}
	
return 0;	
}

