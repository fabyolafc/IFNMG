/*Jo�ozinho acaba de mudar de escola e a primeira coisa que percebeu na nova escola � que a gangorra do parquinho n�o � sim�trica, 
uma das extremidades � mais longa que a outra. Ap�s brincar algumas vezes com um amigo de mesmo peso, ele percebeu que quando est� em uma 
extremidade, a gangorra se desequilibra para o lado dele (ou seja, ele fica na parte de baixo, e o amigo na parte de cima), mas quando eles 
trocam de lado, a gangorra se desequilibra para o lado do amigo. Sem entender a situa��o, Jo�ozinho pediu ajuda a outro amigo de outra s�rie, 
que explicou que o comprimento do lado interfere no equil�brio da gangorra, pois a gangorra estar� equilibrada quando

P1 * C1 = P2 * C2

onde P1 e P2 s�o os pesos da crian�a no lado esquerdo e direito, respectivamente, e C1 e C2 s�o os comprimentos da gangorra do lado 
esquerdo e direito, respectivamente.

Com a equa��o, Jo�ozinho j� consegue dizer se a gangorra est� equilibrada ou n�o mas, al�m disso, 
ele quer saber para qual lado a gangorra descer� caso esteja desequilibrada.

Entrada
A primeira e �nica linha da entrada cont�m 4 inteiros, P1, C1, P2 e C2 , nesta ordem.

Sa�da
Se a gangorra estiver equilibrada, imprima �0�. Se ela estiver desequilibrada de modo que a crian�a esquerda esteja na parte de baixo, 
imprima �-1�, sen�o, imprima �1�.*/

#include <iostream>

using namespace std;

int main(){
	
	int p1, c1, p2, c2, mult1, mult2;
	
	cin >> p1 >> c1 >> p2 >> c2;

	mult1 = p1 * c1;
	
	mult2 = p2 * c2;
	
	if (mult1 == mult2) {
		cout << "0";
	}else if (mult1>mult2) {
		cout <<"-1";
	}else if (mult2>mult1) {
		cout <<"1";
	}
	
	return 0;
	
}
