/*Dois times, Cormengo e Flaminthians, participam de um campeonato de futebol, juntamente com outros times. Cada vit�ria conta tr�s pontos, 
cada empate um ponto. Fica melhor classificado no campeonato um time que tenha mais pontos. Em caso de empate no n�mero de pontos, 
fica melhor classificado o time que tiver maior saldo de gols. Se o n�mero de pontos e o saldo de gols forem os mesmos para os 
dois times ent�o os dois times est�o empatados no campeonato. Dados os n�meros de vit�rias e empates, e os saldos de gols dos dois times, 
sua tarefa � determinar qual dos dois est� melhor classificado, ou se eles est�o empatados no campeonato.

Entrada
A entrada � descrita em uma �nica linha, que cont�m seis inteiros, separados por um espa�o em branco: Cv, Ce, Cs, Fv, Fe e Fs, que s�o, 
respectivamente, o n�mero de vit�rias do Cormengo, o n�mero de empates do Cormengo, o saldo de gols do Cormengo, 
o n�mero de vit�rias do Flaminthians, o n�mero de empates do Flaminthians e o saldo de gols do Flaminthians.

Sa�da
Seu programa deve imprimir uma �nica linha. Se Cormengo � melhor classificado que Flaminthians, a linha deve conter apenas a letra 'C'
, se Flaminthians � melhor classificado que Cormengo, a linha deve conter apenas a letra 'F', e se os dois times est�o empatados
 a linha deve conter apenas o caractere '='.

Restri��es
0 = Cv, Ce, Fv, Fe = 100
-1000 = Cs, Fs = 1000
Exemplos
Entrada
10 5 18 11 1 18
Sa�da
C
Entrada
10 5 18 11 2 18
Sa�da
=
Entrada
9 5 -1 10 2 10
Sa�da
F*/

#include <iostream>

using namespace std;

int main(){
	
	int vitoriasC, empatesC, saldoC, vitoriasF, empatesF, saldoF, pontoC, pontoF, resultado;
	
	cin >> vitoriasC >> empatesC >> saldoC >> vitoriasF >> empatesF >> saldoF;
	
	pontoC = (vitoriasC * 3) + empatesC;
	pontoF = (vitoriasF * 3) + empatesF;
	
	if (pontoC == pontoF) {
		if (saldoC > saldoF) {
			resultado = 1;
		}else if (saldoF > saldoC) {
			resultado = 2;
		}else if (saldoC == saldoF) {
			resultado = 3;
		}
	}
	
	
	if (pontoC > pontoF) {
		resultado = 1;
	}else if (pontoF > pontoC) {
		resultado = 2;
	}
	
	
	if (resultado == 1) {
		cout << "C";
	}else if (resultado == 2) {
		cout << "F";
	}else if (resultado == 3) {
		cout << "=";
	}
	
	return 0;
	
}
