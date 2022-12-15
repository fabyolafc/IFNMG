#include <iostream>

using namespace std;

int main () {
	
	int nota;
	
	cin >> nota;
	
	if (nota == 0) {
		cout << "E";
	} else if (nota >=1 && nota <=35) {
		cout << "D";
	} else if (nota >=36 && nota <=60) {
		cout << "C";
	} else if (nota >=61 && nota <=85) {
		cout << "B";
	} else if (nota >=86 && nota <=100) {
		cout << "A";
	}
	
	return 0;
}
