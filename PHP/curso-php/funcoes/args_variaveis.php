<div class="titulo">Argumentos Variáveis</div>

<?php
function somaCompleta(...$numeros) {
    $soma = 0;
    foreach ($numeros as $num) {
        $soma += $num;
    }
    return $soma;
}

$array = [6, 7, 8];
echo '<br>' . somaCompleta(...$array);