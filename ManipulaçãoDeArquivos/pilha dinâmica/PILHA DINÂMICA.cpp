#include <iostream>
#include <fstream>
#include <locale.h>

using namespace std;

struct Node {
	int item;
	Node *next;
};

class Stack {
	private:
		Node *t; //topo
		int n; //quantidade
	public:
	//Construtor
	Stack () {
		this->t = NULL;
		this->n = 0;
	}
	//Destrutor
	~Stack () {
		while (!this->isEmpty()) {
		this->pop();
		}
	}
	
	//Inseri ou empilha
	void push (int item) {
		
	//Cris um novo nó
	Node *newNode = new Node;
	
	//Guarda o item no nó
	newNode->item = item;
	
	//O proximo do novo nó aponta para t
	newNode->next = t;
	
	//t aponta para o novo nó
	t = newNode;
	
	//Aumenta o n
	this->n++;
	}
	
	//Desempilha
	void pop () {
		if (this->isEmpty()) {
			cout << "Underflow!\n";
			return;
		}
		Node *tmp = t;
		t = t->next;
		delete tmp;
		this->n--;
	}
	
	//Elemento do topo
	int top () {
		if (this->isEmpty()) {
			cout << "Error: The stack is is empty!\n";
			return -1;
		}
		return this->t->item;
	}
	
	//Está vazia?
	bool isEmpty () {
		return this->n == 0;
	}
	
	//Tamanho
	int size () {
		return this->n;
	}
	
	//Mostra
	void show () {
		Node *tmp = this->t;
		
		while (tmp != NULL) {
			cout << tmp->item << endl;
			tmp = tmp->next;
		}
	}
	
	void saveToFile (char arquivo[]) {
		//Fazer uma copia invertida da pilha
		Stack c;
		
		Node *tmp = this->t;
		while (tmp != NULL) {
			c.push(tmp->item);
			tmp = tmp->next;
		}
		
		ofstream fout;
		fout.open (arquivo, ios::binary);
		
		if (!fout) {
		cout << "Erro ao salvar o arquivo.";
		return;
		}
		
		//Salvar o tamanho da pilha
		fout.write ((char *)&n, sizeof(n));
		
		//Salvar os elementos de c;
		while (!c.isEmpty()) {
			int x = c.top();
			fout.write((char *)&x, sizeof(x));
			c.pop();
		}
		
		fout.close();	
	}
	
	void loadFromFile (char arquivo[]) {
		ifstream fin;
		
		fin.open(arquivo, ios::binary);
		
		if(!fin) {
			cout << "Erro ao abrir o arquivo\n";
			return;
		}
		
		//Limpa a pilha se ouver algum elemento
		while(!this->isEmpty()) {
			this->pop();
		}
		
		int n;
		fin.read((char *)&n, sizeof(n));
		for (int i=0; i<n; i++) {
			int item;
			fin.read((char *)&item, sizeof(item));
			this->push(item);
		}
		fin.close();	
	}

};

void clone (Stack *origem, Stack *destino){
	//Apagar a pilha de destino
	while(!destino->isEmpty()) {
		destino->pop();
	}
	
	//Copiando da origem para t
	Stack t;
	while(!origem->isEmpty()) {
		t.push(origem->top());
		origem->pop();
	}
	
	//Copiando de t para origem e destino
	while(!t.isEmpty()) {
		origem->push(t.top());
		destino->push(t.top());
		t.pop();
	}

}


int main () {
	setlocale(LC_ALL, "Portuguese");
	
	Stack s;
	int op, x;
	do {
	system("cls");
	cout << "MENU DE OPÇÕES!\n\n";
	cout << "1. Empilhar\n";
	cout << "2. Desempilhar\n";
	cout << "3. Topo\n";
	cout << "4. Tamanho\n";
	cout << "5. Vazia\n";
	cout << "6. Mostra\n";
	cout << "7. Salvar\n";
	cout << "8. Ler\n";
	cout << "9. Clone\n";
	cout << "10. Sair\n";
	cout << "Escolha uma das opções: ";
	cin >> op;
	
	switch (op) {
		case 1:
			cout << "Digite um número: ";
			cin >> x;
			s.push(x);
		break;
		case 2:
			s.pop();
		break;
		case 3:
			x = s.top();
			cout << "O topo é " << x << endl;
			system("pause");
		break;
		case 4:
			s.size();
			cout << "O tamanho é " << s.size() << endl;
			system("pause");
		break;
		case 5:
			cout << s.isEmpty();
		break;
		case 6:
			s.show();
			system("pause");
		break;
		case 7:
			s.saveToFile("pilha.bin");
			system("pause");
		break;
		case 8:
			s.loadFromFile("pilha.bin");
			s.show();
			system("pause");
		case 9:
			Stack a, b;
			a.push(100);
			a.push(200);
			a.push(300);
			clone(&a, &b);
			a.show();
			cout << "\n\n";
			b.show();
			system("pause");
		break;
	}
	
	} while (op != 10);
	
	
	return 0;
}
