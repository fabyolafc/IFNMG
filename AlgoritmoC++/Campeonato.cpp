/*Dois times, Cormengo e Flaminthians, participam de um campeonato de futebol, juntamente com outros times. Cada vitória conta três pontos, 
cada empate um ponto. Fica melhor classificado no campeonato um time que tenha mais pontos. Em caso de empate no número de pontos, 
fica melhor classificado o time que tiver maior saldo de gols. Se o número de pontos e o saldo de gols forem os mesmos para os 
dois times então os dois times estão empatados no campeonato. Dados os números de vitórias e empates, e os saldos de gols dos dois times, 
sua tarefa é determinar qual dos dois está melhor classificado, ou se eles estão empatados no campeonato.

Entrada
A entrada é descrita em uma única linha, que contém seis inteiros, separados por um espaço em branco: Cv, Ce, Cs, Fv, Fe e Fs, que são, 
respectivamente, o número de vitórias do Cormengo, o número de empates do Cormengo, o saldo de gols do Cormengo, 
o número de vitórias do Flaminthians, o número de empates do Flaminthians e o saldo de gols do Flaminthians.

Saída
Seu programa deve imprimir uma única linha. Se Cormengo é melhor classificado que Flaminthians, a linha deve conter apenas a letra 'C'
, se Flaminthians é melhor classificado que Cormengo, a linha deve conter apenas a letra 'F', e se os dois times estão empatados
 a linha deve conter apenas o caractere '='.

Restrições
0 = Cv, Ce, Fv, Fe = 100
-1000 = Cs, Fs = 1000
Exemplos
Entrada
10 5 18 11 1 18
Saída
C
Entrada
10 5 18 11 2 18
Saída
=
Entrada
9 5 -1 10 2 10
Saída
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
