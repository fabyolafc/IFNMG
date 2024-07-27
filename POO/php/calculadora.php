<?php

// Uma classe define caracteristicas de um conjunto de objeto. criando um novo tipo de dados.

class calculadora {

    public function __construct () {
        echo "Contrutor <br/> <br/>";
    }

    public function __destruct () {
        echo "<br/> <br/> Destrutor";
    }

    //a e b são atributos privados, que são acessaveís apenas por metodos da classes.
    private $a;
    private $b;

    //Método público com objetivo de atribuir valores aos atribubos da classe.
    public function atribuiValores ($a, $b) {
        $this ->a = $a;
        $this ->b = $b;
    }

    //Método publico que retorna a soma.
    public function soma () {
        return $this->a + $this->b;
    }
    //Método publico que retorna a subtração.
    public function subtracao () {
        return $this->a - $this->b;
    }
    //Método publico que retorna a multiplicação.
    public function multiplicacao () {
        return $this->a * $this->b;
    }
    //Método publico que retorna a divisao.
    public function divisao () {
        return $this->a / $this->b;
    }

}

    // Criando um novo objeto. Um objeto é uma instância de ma classe.
    $s = new calculadora ();

    //Fazendo chamadas aos métodos (enviando mensagens ao objeto).
    $s->atribuiValores(10, 20);
    echo "Soma: " . $s->soma() . "<br/>";
    echo "Subtração: " . $s->subtracao() . "<br/>";
    echo "Multiplicação: " . $s->multiplicacao() . "<br/>";
    echo "Divisão: " . $s->divisao();