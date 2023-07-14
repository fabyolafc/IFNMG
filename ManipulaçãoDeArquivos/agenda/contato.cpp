#include <iostream>
#include <locale.h>
#include <fstream>
#include <string.h>

using namespace std;

struct Contato {
	char nome[50];
	char telefone[20];
};

Contato *C = NULL;
int quantidade = 0;

void salva () {
	ofstream fout;
	fout.open("dados.bin", ios::binary);
	
	if (!fout) {
		cout <<"Erro ao salvar os dados\n";
		return;
	}
	
	fout.write( (char *)&quantidade, sizeof(quantidade) );
	
	if (C!= NULL) {
		fout.write( (char *)C, sizeof(Contato)*quantidade ); 
	}
	fout.close();
}

void carrega () {
	ifstream fin;
	fin.open("dados.bin", ios::binary);
	
	if (!fin) {
		cout <<"Erro ao carregar os dados\n";
		return;
	}
	
	fin.read( (char *)&quantidade, sizeof(quantidade) );
	
	if (quantidade != 0) {
		C = new Contato[quantidade];
		fin.read( (char *)C, sizeof(Contato)*quantidade ); 
	} else {
		C = NULL;
	}
	fin.close();
}

void insere (Contato ctt) {
	Contato *t = new Contato[quantidade+1];
	
	for(int i=0; i<quantidade; i++) {
		t[i] = C[i]; 
	}
	
	t[quantidade++] = ctt;
	
	if (C != NULL) {
		delete[]C;
	}
	
	C = t;
	cout << "\nContato inserido com sucesso!\n";	
}

void lista () {
	cout << "LISTA DE CONTATOS\n\n";
	
	for (int i=0; i<quantidade; i++) {
		cout << C[i].nome << "\t" << C[i].telefone << "\n";
	}
}

void listaHTML () {
	ofstream fout;
	fout.open ("lista.html");
	
	if (!fout) {
		cout << "Erro ao criar um arquivo\n";
		return;
	}
	
	fout << "<html>";
		fout << "<head>";
			fout << "<title>Agenda</title>";
		fout << "</head>";
		fout << "<body>";
			fout << "<h1>Lista de contatos!</h1>"; 
					
						fout << "<table border='1'>";
							fout << "<tr>";
							fout << "<th>Nome</th>";
							fout << "<th>Telefone</th>"; 
							fout << "</tr>";
							
							fout << "<tr>";
							fout << "<td>";
							fout << "<ul>";
							for (int i=0; i<quantidade; i++) {	
								fout << "<li>" << C[i].nome << "</li>" <<"\n";
							}
							fout << "</ul>";
							fout << "</td>";
							fout << "<td>";
							fout << "<ul>";
							for (int i=0; i<quantidade; i++) {	
								fout << "<li>" << C[i].telefone << "</li>" <<"\n";
							}
							fout << "</ul>";
							fout << "</td>";
							fout << "</tr>";
						fout << "</table>";	
					
		fout << "</body>";
	fout << "</html>";
	
	fout << "<style>";
	//fout << "h1 {text-align: center} ";
	fout << "h1 {color:brown;} ";
	fout << "</style>";
	
	fout.close();
	system("lista.html");
}

void alterarContato(){
	
	char *modifica = new char[50];
	cout<<"Digite o nome do contato que deseja alterar: ";
	cin>>modifica;
	for(int i = 0; i<quantidade ; i++){
		int resp = strcmp(C[i].nome,modifica);
		if(resp == 0 ){
			cout<<"\nDigite o novo nome do contato: ";
			cin>>C[i].nome;
			cout<<"Digite o novo numero deste novo contato: ";
			cin>>C[i].telefone;	
		} 	
	}
	delete[] modifica;
	cout << "\nContato alterado com sucesso!\n";
}

void excluirContato ( ){
	int bomba;
	char remove[100];
	cout<<"Digite o nome do contato que deseja excluir: ";
			cin >> remove;
			for (int i = 0; i < quantidade; i++){
				if ( strcmp (remove, C[i].nome) == 0){
					bomba = i;
				}
			}
	for (int i = bomba; i < quantidade; i++){
		C[i] = C[i+1];
	}
	quantidade--;
	cout << "\nContato excluido com sucesso!\n";
}

int menu () {
	int op;
	cout <<"MENU DE OPÇÕES!!!\n\n";
	cout <<"*****************\n\n";
	cout <<"1. Novo contato\n";
	cout <<"2. Mostrar todos os contato\n";
	cout <<"3. Alterar contato\n";
	cout <<"4. Excluir contato\n";
	cout <<"5. Mostrar todos os contatos em HTML\n";
	cout <<"6. Sair\n\n";
	cout <<"Escolha uma opção: ";
	cin >> op;
	return op;
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	carrega();
	
	int op;
	Contato ctt;
	
	do {
		system("cls");
		op = menu();
		
		switch (op){
			case 1:
				system("cls");
				cout << "NOVO CONTATO\n\n";
				cout << "Nome: ";
				cin >> ctt.nome;
				cout << "Telefone: ";
				cin >> ctt.telefone;
				insere(ctt);
				system("pause");
				break;
			case 2:
				system("cls");
				lista();
				system("pause");
				break;
			case 3:
				system("cls");
				alterarContato();
				system("pause");
				break;
			case 4:
				system("cls");
				excluirContato();
				system("pause");
				break;
			case 5:
				listaHTML();
				break;
			case 6:
				system("cls");
				cout << "Tchau!";
				salva();
				break;
			default:
				system("cls");
				cout << "Escolha um valor de 1 a 5\n";
				system("pause");
				break;
		}
		
	} while(op != 6);
	
	if (C != NULL) {
		delete[] C;
	}

	return 0;
}
