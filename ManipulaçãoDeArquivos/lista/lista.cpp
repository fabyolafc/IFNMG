#include <iostream>

using namespace std;

struct Node {
	int item;
	Node *next;
};

class List {
	private:
		Node *head;
		Node *tail;
		int n;
		Node* getNode (int idx) {
			Node *t = this->head;
			for (int i=0; i<idx; i++) {
				t= t->next;
			}
			return t;
		}
		
 	public:
 		List () {
 			this->head = this->tail = NULL;
 			this->n=0;
		} 
		
		~List () {
			while (!this->isEmpty()) {
				this->removeFront();
			}
		}
		
		void insertFront (int x) {
			Node *t = new Node();
			t->item = x;
			
			if (this->isEmpty()) {
				this->head = t;
				this->tail = t;
				t->next=NULL;
			} else {
				t->next = this->head;
				this->head = t;
			}
			
			this->n++;
			
		}
		
		int getFront () {
			if (!this->isEmpty()) {
				return this->head->item;
			}
		}
		
		void removeFront () {
			if (this->isEmpty()) {
				cout << "Erro: Lista vazia!\n";
				return;
			} if (this->size() == 1) {
				delete this->head;
				this->head = NULL;
				this->tail = NULL;
				this->n--;
				return;
			} if (this->size() > 1) {
				Node *t = new Node();
				this->head = this->head->next;
				delete t;
				this->n--;
			}
			
		}
		
		void insertBack (int x) {
			if (this->isEmpty()) {
				this->insertFront(x);
			} else {
				Node *t = new Node();
				t->item = x;
				this->tail->next = t;
				this->tail = t;
				t->next = NULL;
				this->n++;
			}
		}
		
		int getBack () {
			if (!this->isEmpty()) {
				return this->tail->item;
			}	
		}
		
		void removeBack () {
			if (this->size() <= 1) {
				this->removeFront();
			} else {
				Node *t = this->getNode(this->n-2);
				delete this->tail;
				this->tail = t;
				t->next = NULL;
				this->n--;
			}
		}
		
		void insertAt (int x, int idx) {
			Node *t = new Node();
			t->item = x;
			
			if (this->isEmpty()) {
				this->insertFront(x);
			} if (idx==this->n) {
				this->insertBack(x);
			} else {
				Node *prev = this->getNode(idx-2);
				t->next = prev->next;
				prev->next = t;
				this->n++;
			}
		}
		
		int get (int idx) {
			if (idx<0 || idx>this->n) {
				cout <<"Erro indice invalido!\n";
				return -1;
			}
			
			Node *t = new Node();
			t= this->getNode(idx-1);
			return t->item;
		}
		
		void removeFrom (int idx) {
			if (idx<0 || idx>this->n) {
				cout <<"Erro indice invalido!\n";
				return;
			}
			
			if(idx==1) {
				this->removeFront();
			} else if (idx==this->n) {
				this->removeBack();
			} else {
				Node *t1, *t2;
				
				t1 = this->getNode(idx-2);
				t2 = t1->next->next;
				delete t1->next;
				t1->next = t2;
				this->n--;
			}
		}
		
		int size () {
			return this->n;
		}
		
		bool isEmpty () {
			if (this->n == 0) {
				return true;
			} else {
				return false;
			}
		}
		
		void show () {
			cout << endl;
			Node *t = this->head;
			while (t != NULL) {
				cout << t->item << " ";
				t = t->next;
			}
		}
	
};

int main () {
	
	List L;
	cout << "Inserir no inicio: ";
	L.insertFront(10);
	L.insertFront(20);
	L.insertFront(30);
	L.show();
	
	cout << "\n\nInserir no final: ";
	L.insertBack(100);
	L.insertBack(200);
	L.insertBack(300);
	L.show();
	
	cout << "\n\nRemover no final: ";
	L.removeBack();
	L.show();
	
	cout << "\n\nRemover no inicio: ";
	L.removeFront();
	L.show();
	
	cout << "\n\nAcessar um elemento em uma posicao especifica: ";
	int x = L.get(2);
	cout <<"\n" << x;
	
	cout << "\n\nInserir um elemento em uma posicao especifica: ";
	L.insertAt(13,2);
	L.show();
	
	cout << "\n\nRemover um elemento em uma posicao especifica: ";
	L.removeFrom(5);
	L.show();
	
	
	return 0;
}
