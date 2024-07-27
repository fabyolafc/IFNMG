<?php

//desenvolva a função e use-a para exibir na tela os fatorias dos numeros entre 1 e 15
    function fatorial (int $n) : int {
        $f = 1;
        for ($i = 1; $i<= $n; $i++) {
            $f = $f * $i;               
        }
        return $f; 
    }

    for ($i = 1; $i <= 15; $i++ ) {
        echo "O fatorial de " . $i . " é " . fatorial($i) . "<br/>";
    }
    
?>