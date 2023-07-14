#include <iostream>

using namespace std;

class Soma { //Classe Soma
	
	private:	//Atributos
		int a;
		int b;
		int c;
		
	public:	//Métodos
		//Construtor
		//Construtor executa automaticamente quando a variavel é criada;
		Soma() {
			cout << "Executando construtor\n";
			this->a = 0;
			this->b = 0;
			this->c = 0;
		}
		//Dertrutor
		//Construtor executa automaticamente quando a variavel sai da memoria;
		~Soma() {
			cout << "\nExecutando o destrutor";
		}
	
		void atribuiValores (int a, int b) {
			this->a = a;
			this->b = b;
			this->c = a + b;
		}
		int obtemresultado (void) {
			return this->c;
		}
	
};

int main () {
	
	Soma obj; //Objeto
	//Ao chamar um método de um objeto, dizemos que estamos enviando uma mensagem
	
	obj.atribuiValores(10, 20);
	int r = obj.obtemresultado();
	cout << r;
	
	return 0;
}
