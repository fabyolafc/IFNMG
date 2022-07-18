#include <iostream>

using namespace std;

int main (){
	float base,altura,area, perimetro;
	
	cout << "Digite a base: ";
	cin >> base;
	cout << "Digite a altura: ";
	cin >> altura;
	
	area = base * altura;
	perimetro = 2*(base + altura);
	
	cout << "O valor da area: " << area;
	cout << "\nO valor do perimetro: " << perimetro;
	
	return 0;
}
