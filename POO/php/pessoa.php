<?php

    class Pessoa {
        private $nome;
        private $idade;

        // Atribui valores a variavel
        public function setNome ($nome) {
            $this->nome = $nome;
        }

        public function setIdade ($idade) {
            $this->idade = $idade;
        }

        // Retorna um valor de um atributo
        public function getNome () {
            return $this->nome;
        }

        public function getIdade () {
            return $this->idade;
        }

    }

    class Lista {
        private $itens; // Vetor de pessoas
        private $n; // Quantidade de pessoas

        public function __construct () {
            $this->itens = []; // $this->itens = array();
            $this->n = 0;
        }

        public function add ($p) {
            array_push ($this->itens, $p); //$this->itens = $p;
            $this->n++;
        }

        public function show () {
            for ($i=0; $i <count($this->itens); $i++) {
                echo $this->itens[$i]->getNome() . " tem " .  $this->itens[$i]->getIdade() . " anos <br/>";
               
            }
        }

    }

    $L = new Lista();
    $p = new Pessoa();
    $p->setNome("Fabyola");
    $p->setIdade(19);
    $L->add ($p);

    $p = new Pessoa();
    $p->setNome("Aquiles");
    $p->setIdade(25);
    $L->add ($p);
    
    $L->show();