<?php
    class Processo {

        Private static $processos = [];

        public function __construct () {
            // Quando um objeto for criado ele será avrascentado no vetor estático $processos.
            // Self é usado para acessar atributos e métodos estaticos (que pertencem a classe).
            // This acessar objeto.
            array_push(self::$processos, $this);
        }

        private $nome;

        public function setNome ($nome) {
            $this->nome = $nome;
        }

        public function getNome () {
            return $this->nome;
        }

        public function executa () {
            echo "O processo $this->nome está em execução. <br/>";
        }

        public static function executaTodos () {
            for ($i=0; $i<count(self::$processos); $i++ ) {
                self::$processos[$i]->executa();
            }
        }


    }

    $p1 = new Processo();
    $p1->setNome("Bloco de notas");


    $p2 = new Processo();
    $p2->setNome("VS Code");
    
    Processo::executaTodos();