#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

using namespace std;

int gerador(){
	return rand()%60;
}

bool eIgual(int vetor[6], int num){
	for (int i = 0; i<6 ; i++){
		if(vetor[i]==num){
			return true;
		}
	}
	return false;
}

int acertos(int escolhidos[], int sorteados[], int tamanho){
	int qtdAcertos = 0;
		for(int i = 0 ; i<tamanho;i++){
			for (int j = 0; j<6 ; j++){
				if(escolhidos[i]==sorteados[j]){
					qtdAcertos +=1;
				}
			}
		}
	return qtdAcertos;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int qtdNumerosAtual = 0;
	
	cout<<"Escolha a quantidade de numeros para apostar: "<<endl;
	cin>>qtdNumerosAtual;
	int minhaEscolha[qtdNumerosAtual];
	cout<<"Escolha "<<qtdNumerosAtual<<" numeros para sua aposta"<<endl;
	
	for (int i = 0; i<qtdNumerosAtual;i++){
		cin>>minhaEscolha[i];
	}
	
	srand (time(0));
	int vetor[6];
	int temp = 0;
	int numSort = 0;
	for (int i = 0; i<6;i++){
		do{
		numSort = gerador();
		
		}while(eIgual(vetor, numSort));
		vetor[i] = numSort;
	}
	cout<<"Numeros sorteados: "<<endl;
	for (int i = 0; i<6; i++){
		cout<<vetor[i]<<" | ";
	}
	
	cout<<endl<<endl;
	cout<<"Você acertou "<<acertos(minhaEscolha, vetor,
	qtdNumerosAtual);
	
	return 0;
}
