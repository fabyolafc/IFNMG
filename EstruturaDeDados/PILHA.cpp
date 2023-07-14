#include <iostream>

using namespace std;

const int MAX = 50;

class Stack {
	private:
		int V[MAX]; //Elementos da pilha
		int t; //Topo da pilha
		
	public:
		//Construtor = Cria um pilha vazia
		Stack () {
			this->t = 0;
			
		}
		
		//Empilha um elemento
		void push (int item) {
			if (t>=MAX) {
				cout << "Overflow!\n";
				return;
			}
			this->V[this->t++] = item;
		}
		
		//Remove o elemento o do topo
		void pop () {
			if (this->isEmpty()) {
				cout << "Underflow!\n";
				return;
			}
			this->t--;
		}
		
		//Retorna o elemento o do topo
		int top () {
			if (this->isEmpty()) {
				cout << "Empty Stack!\n";
				return -1;
			}
			return this->V[this->t - 1];
		}
		
		//Verifica se está vazia
		bool isEmpty () {
			if (this->t == 0) {
				return true;
			} else {
				return false;
			}
			//return this->t == 0;
			//return this->t == 0 ? true : false;
		}
		
		//Retorna a quantidade de elementos da pilha
		int size () {
			return this->t;
		}
};

int main () {
	
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	
	cout << "Quantidade de elementos: " << s.size() << "\n" << "Elemento de topo: " << s.top() << "\n\n";
	while (! s.isEmpty()) {
		int x = s.top();
		cout << x << "\n";
		s.pop();
	}
	
	return 0 ;
}
