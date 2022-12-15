/*A OBI (Organização de Bocha Internacional) é responsável por organizar a competição mundial 
de bocha. Infelizmente esse esporte não é muito popular, e numa tentativa de aumentar a sua 
popularidade, ficou decidido que seriam chamados, para a Grande Final Mundial, o campeão e o 
vice-campeão de cada sede nacional, ao invés de apenas o primeiro lugar.
Tumbólia é um país pequeno que já havia realizado a sua competição nacional quando a nova regra foi instituída, e o comitê local não armazenou quem foi o segundo classificado. Felizmente eles armazenaram a pontuação de todos competidores - que foram apenas três, devido ao tamanho diminuto do país. Sabe-se também que as pontuações de todos jogadores foram diferentes, de forma que não ocorreu empate entre nenhum deles.
Resta agora descobrir quem foi o vice-campeão e para isso o comitê precisa de ajuda.
Entrada
A primeira e única linha da entrada consiste de três inteiros separados por espaços, A, B e C, as pontuações dos 3 competidores.
Saída
Imprima uma única linha na saída, contendo apenas um número inteiro, a pontuação do vice-campeão.

Restrições
1 = A = 100
1 = B = 100
1 = C = 100
Exemplos
Entrada
4 5 6			
			
Saída
5			
			
Entrada
10 5 9
			
Saída
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
