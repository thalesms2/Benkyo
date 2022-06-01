<div class="titulo">Closure & Callable</div>

<?php
$soma1 = function ($a, $b) {
    return $a + $b;
};

function soma2($a, $b) {
    return $a + $b;
}

echo $soma1(2, 3) . '<br>';
echo (is_callable($soma1) ? 'Sim' : 'Não') . '<br>';

echo soma2(2, 3) . '<br>';
// echo (is_callable(soma2) ? 'Sim' : 'Não') . '<br>'; era pra dar true mas n tá funcionando

function executar($a, $b, $op, Callable $func) {
    $resultado = $func($a, $b);
    echo "$a $op $b = $resultado<br>";
}

executar(1, 2, '+', $soma1);