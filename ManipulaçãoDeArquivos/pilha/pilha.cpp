#include <iostream>

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
			//Cris um novo n�
			Node *newNode = new Node;
			//Guarda o item no n�
			newNode->item = item;
			//O proximo do novo n� aponta para t
			newNode->next = t;
			//t aponta para o novo n�
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
		
		//Est� vazia?
		bool isEmpty () {
			return this->n == 0;
		}
		
		//Tamanho
		int size () {
			return this->n;
		}	
};

int main () {
	
	Stack s;
	int op, x;
	
	do {
		system("cls");
		cout << "MENU DE OP��ES!\n\n";
		cout << "1. Empilhar\n";
		cout << "2. Desempilhar\n";
		cout << "3. Topo\n";
		cout << "4. Tamanho\n";
		cout << "5. Vazia\n";
		cout << "6. Sair\n";
		cout << "Escolha uma das op��es\n";
		cin >> op;
		
		switch (op) {
			case 1:
				cout << "Digite um n�mero: ";
				cin >> x;
				s.push(x);
			break;
			case 2:
				s.pop();
			break;
			case 3:
				x = s.top();
				cout << "O topo � " << x << endl;
				system("pause");
			break;
			case 4:
				s.size();
				cout << "O tamanho � " << s.size() << endl;
				system("pause");
			break;
			case 5:
				cout << s.isEmpty();
			break;
		}
		
		
	} while (op != 6);
	
	return 0;
}
