#include <iostream>
#include <locale.h>

using namespace std;

const int N = 5;

//Criando um novo tipo de dados
struct Aluno {
	int matricula;
	char nome[50];
	float nota;
};

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	/*
	//Criando uma variável
	Aluno a;
	cin >> a.matricula >> a.nome >> a.nota;
	cout << a.matricula << endl << a.nome << endl << a.nota;
	*/
	
	Aluno A[N];
	
	for (int i=0; i<N; i++) {
		cout << "Aluno: " << i+1 << endl;
		cout << "Matricula: ";
		cin >> A[i].matricula;
		cout << "Nome: ";
		cin >> A[i].nome;
		cout << "Nota: ";
		cin >> A[i].nota;
	}
	
	cout << "Lista de alunos reprovados: " << endl;
	for (int i=0; i<N; i++) {
		if (A[i].nota<40) {
			cout << A[i].nota << endl;
		}
	}
	
	cout << "Lista de alunos recuperação: " << endl;
	for (int i=0; i<N; i++) {
		if (A[i].nota>=40 && A[i].nota<60) {
			cout << A[i].nota << endl;
		}
	}
	
	cout << "Lista de alunos aprovados: " << endl;
	for (int i=0; i<N; i++) {
		if (A[i].nota>=60) {
			cout << A[i].nota << endl;
		}
	}
	
	return 0;
}
