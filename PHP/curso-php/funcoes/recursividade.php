<div class="titulo">Recursividade</div>

<?php
function somaUmAte($numero) {
    $soma = 0;
    for($i = 1; $i <= $numero; $i++) {
        $soma += $i;
    }
    return $soma;
}

echo somaUmAte(150) . "<br>";

function somaRecursiva($numero) {
    if($numero === 1) {
        return 1;
    } else {
        return $numero + somaRecursiva($numero - 1);
    }
}

echo somaRecursiva(150) . "<br>";

function somaEconomica($numero) {
    return $numero === 1 ? 1 : $numero + somaEconomica($numero - 1);
}

echo somaEconomica(150) . "<hr>";
