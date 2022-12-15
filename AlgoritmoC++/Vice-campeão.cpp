/*A OBI (Organiza��o de Bocha Internacional) � respons�vel por organizar a competi��o mundial 
de bocha. Infelizmente esse esporte n�o � muito popular, e numa tentativa de aumentar a sua 
popularidade, ficou decidido que seriam chamados, para a Grande Final Mundial, o campe�o e o 
vice-campe�o de cada sede nacional, ao inv�s de apenas o primeiro lugar.
Tumb�lia � um pa�s pequeno que j� havia realizado a sua competi��o nacional quando a nova regra foi institu�da, e o comit� local n�o armazenou quem foi o segundo classificado. Felizmente eles armazenaram a pontua��o de todos competidores - que foram apenas tr�s, devido ao tamanho diminuto do pa�s. Sabe-se tamb�m que as pontua��es de todos jogadores foram diferentes, de forma que n�o ocorreu empate entre nenhum deles.
Resta agora descobrir quem foi o vice-campe�o e para isso o comit� precisa de ajuda.
Entrada
A primeira e �nica linha da entrada consiste de tr�s inteiros separados por espa�os, A, B e C, as pontua��es dos 3 competidores.
Sa�da
Imprima uma �nica linha na sa�da, contendo apenas um n�mero inteiro, a pontua��o do vice-campe�o.

Restri��es
1 = A = 100
1 = B = 100
1 = C = 100
Exemplos
Entrada
4 5 6			
			
Sa�da
5			
			
Entrada
10 5 9
			
Sa�da
9
			
*/
#include <iostream>

using namespace std;

int main () {
	
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a<b && a>c || a>b && a<c) {
		cout << a;
	}
	else if(b<a && b>c || b>a && b<c) {
		cout << b;
	}else {
		cout << c;
	}
	
	
	return 0;
}
