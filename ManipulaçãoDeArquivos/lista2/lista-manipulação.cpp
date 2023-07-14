#include <iostream>
#include <fstream>

using namespace std;

struct Node {
	int item;
	Node *next;
	Node *prev;
};

class List {
	private:
		Node *head;
		Node *tail;
		int n;
		
		Node* getNode (int idx);
			
 	public:
 	
	 	List ();
		~List ();
		void insertFront (int x);
		int getFront ();
		void removeFront ();
		void insertBack (int x);
		int getBack ();
		void removeBack ();
		void insertAt (int x, int idx);
		int get (int idx);
		void removeFrom (int idx);
		void fazAlgo ();
		int size ();
		bool isEmpty ();
		void show ();
		void saveToFile (char fileName[] );
		void loadFromFile (char fileName[] );
	
};

/*Imprentações dos métodos da classe List*/

Node* List::getNode(int idx) {
	
	if (idx < this->n /2) {
		Node *t = this->head;
			for (int i=0; i<idx; i++) {
				t= t->next;
			}
			return t;
	} else if (idx >= this->n /2) {
		Node *t = this->tail;
			for (int i=n-1; i>idx; i--) {
				t= t->prev;
			}
			return t;
	}
}

List::List(){
	this->head = this->tail = NULL;
	this->n=0;
}

List::~List(){
	while (!this->isEmpty()) {
		this->removeFront();
	}
}

void List::insertFront (int x) {
	Node *t = new Node();
	t->item = x;
	
	if (this->isEmpty()) {
		this->head = t;
		this->tail = t;
		t->prev = NULL;
		t->next = NULL;
	} else {
		this->head->prev = t;
		t->next = this->head;
		this->head = t;
		t->prev = NULL;
	}
	
	this->n++;
	
};

int List::getFront () {
	if (!this->isEmpty()) {
			return this->head->item;
	}
};

void List::removeFront () {
	if (this->size() <= 1) {
		this->removeBack();
	}
	this->head = this->head->next;
	delete this->head->prev;
	this->head->prev = NULL;
	this->n--;
	return;
};

void List::insertBack (int x) {
	if (this->isEmpty()) {
		this->insertFront(x);
	} else {
		Node *t = new Node();
		t->item = x;
		this->tail->next = t;
		t->prev = this->tail;
		t->next= NULL;
		this->tail = t;
		this->n++;
	}
};

int List::getBack () {
	if (!this->isEmpty()) {
		return this->tail->item;
	}
};

void List::removeBack () {
	if (this->isEmpty()) {
		cout << "Erro: lista vazia! ";
		return;
	}
	if (this->size()==1) {
		delete this->head;
		this->head = NULL;
		this->tail = NULL;
		this->n--;
		return;
	}
	if (this->size()>1) {
		this->tail = this->tail->prev;
		delete this->tail->next;
		this->tail->next = NULL;
		this->n--;
		return;
	}
};

void List::insertAt (int x, int idx) {
	
	if (idx<=0 || idx>this->n) {
		cout <<"Erro indice invalido!\n";
		return;
	}
	
	Node *t = new Node();
	t->item = x;
	
	if (this->isEmpty()) {
		this->insertFront(x);
	} if (idx==this->n) {
		this->insertBack(x);
	} else {
		Node *tt = this->getNode(idx-2);
		tt->prev = tt;
		t->next = tt->next;
		tt->next->prev = t;
		tt->next = t;
		this->n++;
	
	}
};

int List::get (int idx) {
	if (idx<=0 || idx>this->n) {
		cout <<"Erro indice invalido!\n";
		return -1;
	}
			
	Node *t = new Node();
	t= this->getNode(idx-1);
	return t->item;
};

void List::removeFrom (int idx) {
	if (idx<=0 || idx>this->n) {
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
	
};

void List::fazAlgo() {
	Node *t = this->head;
	Node *tmp;
	
	while (t != NULL) {
		tmp = t->next;
		t->next = t->prev;
		t->prev = tmp;
		t = t->prev;
	}
	
	tmp = this->head;
	this->head = this->tail;
	this->tail = tmp;
	
}

int List::size () {
	return this->n;
};

bool List::isEmpty () {
	if (this->n == 0) {
		return true;
	} else {
		return false;
	}
};

void List::show () {
	cout << endl;
		Node *t = this->head;
		while (t != NULL) {
			cout << t->item << " ";
			t = t->next;
		}
};

void List::saveToFile (char fileName[] ) {
	ofstream fout;
	fout.open(fileName, ios::binary);
	if (!fout) {
		cout << "Erro ao abrir o arquivo ";
		return;
	}
	
	fout. write((char *)&this->n, sizeof(int));
	Node *t = this->head;
	while (t!=NULL) {
		fout. write((char *)&t->item, sizeof(int));
		t=t->next;
	}
		
	fout.close();
	
}

void List::loadFromFile (char fileName[] ) {
	while (!this->isEmpty()) {
		this->removeFront();
	}
	
	ifstream fin;
	fin.open(fileName, ios::binary);
	if (!fin) {
		cout << "Erro ao abrir o arquivo";
		return;
	} 
	int n;
	fin.read((char*)&n, sizeof(int));
	for (int i=0; i<n; i++) {
		int item;
		fin.read((char*)&item, sizeof(int));
		this->insertBack(item);
	} 
	
	fin.close();
	
}


int main () {
	
	List L;
	int op, x, y;
	
	do {
		cout << "\nMENU DE OPCOES!\n\n";
		cout << "1. Inserir um elemento do inicio\n";
		cout << "2. Acessar um elemento do inicio\n";
		cout << "3. Remover um elemento do inicio\n";
		cout << "4. inserir um elemento no final\n";
		cout << "5. Acessar um elemento no final\n";
		cout << "6. Remover um elemento no final\n";
		cout << "7. Inserir um elemanto em um posicao especifica\n";
		cout << "8. Acessar um elemanto em um posicao especifica\n";
		cout << "9. Remover um elemanto em um posicao especifica\n";
		cout << "10. Inverter a lista\n";
		cout << "11. Tamanho da lista\n";
		cout << "12. Visualizar lista\n";
		cout << "13. Salvar\n";
		cout << "14. Mostrar\n";
		cout << "15. Sair\n";
		cout << "Escolha uma das opcoes: ";
		cin >> op;
		
		switch (op) {
			
		case 1:
			cout << "Digite um numero: ";
			cin >> x;
			L.insertFront(x);
			system("pause");
		break;
		
		case 2:
			cout << L.getFront() << endl;
			system("pause");
		break;
		
		case 3:
			L.removeFront();
			L.show();
			cout << endl;
			system("pause");
		break;
		
		case 4:
			cout << "Digite um numero: ";
			cin >> x;
			L.insertBack(x);
			L.show();
			cout << endl;
			system("pause");
		break;
		
		case 5:
			cout << L.getBack() << endl;
			system("pause");
		break;
		
		case 6:
			L.removeBack();
			L.show();
			cout << endl;
			system("pause");
		break;
		
		case 7:
			cout << "Digite um numero: ";
			cin >> x;
			cout << "Digite um indice: ";
			cin >> y;
			L.insertAt(x,y);
			L.show();
			cout << endl;
			system("pause");
		break;
		
		case 8:
			cout << "Digite um indice: ";
			cin >> y;
			cout << L.get(y) << endl;
			system("pause");
		break;
		
		case 9:
			cout << "Digite um indice: ";
			cin >> y;
			L.removeFrom(y);
			L.show();
			cout << endl;
			system("pause");
		break;
		
		case 10:
			L.fazAlgo();
			L.show();
			cout << endl;
			system("pause");
		break;
		
		case 11:
			L.size();
			cout << "O tamanho eh " << L.size() << endl;
			system("pause");
		break;
		
		case 12:
			L.show();
		break;
		
		case 13:
			L.saveToFile("dados.bin");
		break;
		
		case 14:
			L.loadFromFile("dados.bin");
			L.show();
			cout << endl;
			system("pause");
		break;
		
		}
		
		} while (op != 15);

	
	return 0;
}
