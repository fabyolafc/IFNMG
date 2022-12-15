/*Faça um programa que solicite ao usuário que digite nomes e notas de 10 alunos. Use um
vetor de structs para isso. O programa exibirá na tela todos os alunos que foram aprovados
(com pelo menos 60 pontos). Seu programa deve utilizar as seguintes
funções/procedimentos:
void leDados (Aluno v[], int n);
void mostraAprovados (Aluno v[], int n);*/

#include <iostream>

using namespace std;

struct Aluno {
	char nome[50];
	float nota;
};

void leDados (Aluno V[], int n) {
	for (int i=0; i<n; i++) {
		cout << "Aluno: " << i+1 << endl;
		cout << "Nome: ";
		cin >> V[i].nome;
		cout << "Nota: ";
		cin >> V[i].nota;
	}
}

void mostraAprovados (Aluno V[], int n) {
	cout << "\n\nLista de alunos aprovados: " << endl;
	for (int i=0; i<n; i++) {
		if (V[i].nota>=60) {
			cout << V[i].nome << ": " << V[i].nota << endl;
		}
	}
}

int main () {
	
	Aluno A[10];
	
	leDados(A, 10);
	
	mostraAprovados(A, 10);
	
	return 0;
}
