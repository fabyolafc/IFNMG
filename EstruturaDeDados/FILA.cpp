#include <iostream>

using namespace std;

const int MAX = 5;

class Queue {
	private:
		int V[MAX];
		int begin;
		int count;
		
	public:
		Queue () {
			this->begin = this->count = 0;
		}
		
		void enqueue (int x) {
			int i;
			if (this->count>= MAX) {
				cout << "Erro: Fila cheia!\n";
				return;
			}
			
			i = (this->begin + this->count) % MAX;
			this->V[i] = x;
			this->count++;
		}
		
		void dequeue () {
			if (this->isEmpty()) {
				cout << "Erro: Fila vazia!\n";
				return;
			}
			
			this->begin = (this->begin + 1) % MAX;
			this->count--;	
		}
		
		int front () {
			if (this->isEmpty()) {
				cout << "Erro: Fila vazia!\n";
				return 0;
			}
			
			return this->V[this->begin];
		}
		
		bool isEmpty () {
			if (this->count == 0) {
				return true;
			} else {
				return false;
			}
		}
		
		int size () {
			return this->count;
		}
		
		void clear () {
			this->begin = this->count = 0;
		}
		
		void show () {
			for (int i=0; i<this->count; i++) {
				cout << this->V[(this->begin + i) % MAX] << " ";
			}
		}
		
};

int main () {
	
	Queue Q;
	
	Q.enqueue(10);
	Q.enqueue(20);
	Q.enqueue(30);
	Q.enqueue(40);
	Q.enqueue(50);
	
	Q.dequeue();
	
	Q.enqueue(60);
	
	Q.clear();
	
	cout << "Primeiro elemento: " << Q.front() << endl;
	
	cout << "Tamanho: " << Q.size() << endl;
	
	Q.show();
	
	return 0;
}
