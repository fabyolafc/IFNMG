<?php 
/* Desenvolva uma classe Aluno com os atributos código, nome e nota. Adicione nesta classe os
métodos setters e getters.
Após isto, desenvolva uma classe Pilha capaz de manipular objetos do tipo Aluno. Esta classe deve
armazenar os alunos em um array, para tanto você de pesquisar funções para inserir e remover
elementos do final de um array em PHP. Os métodos a serem implementados nesta pilha são:
• construtor: cria uma pilha vazia;
• push: emplilha um elemento;
• pop: desempilha um elemento;
• top: retorna o elemento do topo da pilha;
• size: retorna a quantidade elementos da pilha;
• isEmpty: verifica se uma pilha está vazia, retornando um valor lógico;
• show: mostra todos os elementos da pilha. */

class Aluno {
    private $codigo;
    private $nome;
    private $nota;

    // Atribui valores a variavel
    public function setCodigo ($codigo) {
        $this->codigo = $codigo;
    }

    public function setNome ($nome) {
        $this->nome = $nome;
    }

    public function setNota ($nota) {
        $this->nota = $nota;
    }

    // Retorna um valor de um atributo
    public function getCodigo () {
        return $this->codigo;
    }

    public function getNome () {
        return $this->nome;
    }

    public function getNota () {
        return $this->nota;
    }

}

class Pilha {
    private $itens; // Vetor de pessoas
    private $n; // Quantidade de pessoas

    // Construtor
    public function __construct () {
        $this->itens = []; // $this->itens = array();
        $this->n = 0;
    }

    // Construtor
    public function __destruct () {
        $this->pop ();
    }

    // Empinhar
    public function push ($a) {
        array_push ($this->itens, $a); //$this->itens = $p;
        $this->n++;
    }

    // Desempilhar
    public function pop () {
        array_pop ($this->itens);
        $this->n--;
    }

    // Topo
    public function top () {
        echo "<br/>Topo<br/>";
        echo "Codigo: " . $this->itens[$this->n-1]->getCodigo() . "<br/>Nome: " . $this->itens[$this->n-1]->getNome() . "<br/>Nota: " .  $this->itens[$this->n-1]->getNota() .  "<br/>";
        
    }

    // Tamanho
    public function size () {
        echo "<br/>Tamanho: ";
        echo $this->n;
    }

    // Está vazia?
    public function isEmpty () {
        if ($this->n == 0) {
            return true;
        }
    }

    //Mostar
    public function show () {
        for ($i=0; $i <count($this->itens); $i++) {
            echo "Codigo: " . $this->itens[$i]->getCodigo() . "<br/>Nome: " . $this->itens[$i]->getNome() . "<br/>Nota: " .  $this->itens[$i]->getNota() .  "<br/>";
           
        }
    }

}

    $P = new Pilha();
    $a = new Aluno();
    echo "<br/>Empilhar<br/>";
    $a->setCodigo(1);
    $a->setNome("Fabyola");
    $a->setNota(100);
    $P->push ($a);

    $a = new Aluno();
    $a->setCodigo(2);
    $a->setNome("Aquiles");
    $a->setNota(95);
    $P->push ($a);
    $P->show();

    echo "<br/>Desempilhar<br/>";
    $P->pop ();
    $P->show();
    
    $P->top();

    $P->size();