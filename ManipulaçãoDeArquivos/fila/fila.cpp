#include <iostream>

using namespace std;

struct Node {
	int item;
	Node *next;

};

class Queue {
	private:
            Node *head;
            Node *tail;
            int n;
	public:
           //construtor
           Queue () {
                this->head = NULL;
                this->tail = NULL;
                this->n = 0;
           }
           
           //destrutor
           ~Queue () {
               while (!this->isEmpty ()) {
                    this->dequeue();
               }   
           }
           
           //enfileirar
            void enqueue (int item) {
           		Node *t = new Node;
 				t->item = item;
           		t->next = NULL;
           	
                if (this->isEmpty() ) {
                   this->head = t;
                   this->tail = t; 

                } else {
                	this->tail->next = t;
					this->tail = t;
                }   
				
				this->n++;     
           	}
           
           	//desenfileirar
           	void dequeue () {
                if (this->isEmpty()) {
                	cout << "Erro: fila vazia.";
                    return;   
                }
                
                if (this->n == 1) {
                    delete this->tail;
                    this->head = NULL;
                    this->tail = NULL;
                    this->n--;
                    return;
                }
                 
                if (this->n >1) {
                    Node *t = this->head;
                    this->head = t->next;
                    delete t;
                    this->n--;
                }
           }
           
        	// obter o elemento do inicio
           	int getFront () {
              	if (!this->isEmpty()) {
                    return this->head->item;   
                }
           }
           
          	//tamanho
          	 int size () {
               return this->n;
           	}
           
           //verificar se está vazia
           	bool isEmpty () {
                return this->n == 0;
           	}
           
           //mostrar os elementos da fila
           	void show () {
             	Node *t = this->head;
              	while (t!=NULL) {
                    cout << t->item <<" ";
                    t = t->next;
              }  
        	}

	        /*
	        for (Node *t = this->head; t != NULL; t=t->next) {
	            cout << t->item << " ";
	        }
         	 */
         	 
         	void reverse () {
         		int q = this->n;
         		
         		if (this->n >= 2) {
         			int *v = new int [this->n];
         			
         			int i=0;
         			while (! this->isEmpty()) {
         				v[i++] = this->getFront();
         					this->dequeue();
					}
         			
         			for (int i=q-1; i>=0;i--) {
         				this->enqueue(v[i]);
					 }
         			
         			delete[] v;
				}
         		
			}
      };
 

int main() {
    
    Queue q;
    int op, x;
    
    do {
		cout << "\nMENU DE OPCOES!\n\n";
		cout << "1. Empilhar\n";
		cout << "2. Desempilhar\n";
		cout << "3. Inicio\n";
		cout << "4. Tamanho\n";
		cout << "5. Mostrar\n";
		cout << "6. Vazia\n";
		cout << "7. Reverse\n";
		cout << "8. Sair\n";
		cout << "Escolha uma das opcoes: ";
		cin >> op;
		
		switch (op) {
			
		case 1:
			cout << "Digite um numero: ";
			cin >> x;
			q.enqueue(x);
		break;
		
		case 2:
			q.dequeue();
		break;
		
		case 3:
			x = q.getFront();
			cout << "O inicio eh " << x << endl;
			system("pause");
		break;
		
		case 4:
			q.size();
			cout << "O tamanho eh " << q.size() << endl;
			system("pause");
		break;
		
		case 5:
			q.show();
		break;
		
		case 6:
			cout << q.isEmpty();
		break;
		
		case 7:
			q.reverse();
			q.show();
		break;
		}
		
		} while (op != 8);
	
	return 0;
}
