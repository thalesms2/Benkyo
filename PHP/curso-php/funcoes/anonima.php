<div class="titulo">Funções Anonimas</div>

<?php
$soma = function ($a, $b) {
    return $a + $b;
};

echo $soma(3, 2) . '<br>';

function executar($a, $b, $op, $func) {
    $resultado = $func($a, $b);
    echo "$a $op $b = $resultado<br>";
}

executar(2, 3, '+', $soma);