/* Fa�a um programa em C++ que solicite ao usu�rio que informe os dados de 10 alunos: nome, sexo (podendo ser �M� ou �F�) e nota. 
O programa exibir� na tela a m�dia aritm�tica das notas dos alunos do sexo masculino e tamb�m a m�dia aritm�tica dos alunos do sexo feminino. 
Fique atento para o caso de n�o existir alunos de algum dos sexos, pois n�o � poss�vel fazer uma divis�o por zero.
*/

#include <iostream>
#include <locale.h>

using namespace std;

const int N = 10;

struct Aluno {
	char nome[50];
	char sexo;
	float nota;
};

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	Aluno A[N];
	float quantM=0, quantF=0, somaM=0, somaF=0, resultadoM, resultadoF;
		
	for (int i=0; i<N; i++) {
		cout << "Aluno: " << i+1 << endl;
		cout << "Nome: ";
		cin >> A[i].nome;
		cout << "Sexo M ou F: ";
		cin >> A[i].sexo;
		cout << "Nota: ";
		cin >> A[i].nota;
	}
	
	for (int i=0; i<N; i++) {
		if (A[i].sexo == 'M') {
			resultadoM = 1;
		}
	}
	if (resultadoM == 1) {
		for (int i=0; i<N; i++) {
			if (A[i].sexo == 'M') {
				somaM +=A[i].nota;
				quantM++;
			}
		}
		cout <<"M�dia Aritm�tica do sexo masculino: " <<somaM/quantM << endl;
	}
	
	
	for (int i=0; i<N; i++) {
		if (A[i].sexo == 'F') {
			resultadoF = 2;
		}
	}
	if (resultadoF == 2){
		for (int i=0; i<N; i++) {
			if (A[i].sexo == 'F') {
				somaF +=A[i].nota;
				quantF++;
			}
		}
		cout <<"M�dia Aritm�tica do sexo feminino: " << somaF/quantF << endl;
	}
	
	return 0;
}
