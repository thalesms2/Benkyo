<div class="titulo">Foreach</div>

<?php
$array = [
    1 => 'Domingo',
    'Segunda',
    'Terça',
    'Quarta',
    'Quinta',
    'Sexta',
    'Sábado'
];

foreach($array as $valor) {
    echo "$valor <br>";
}

foreach($array as $indice => $valor) {
    echo "$indice => $valor <br>";
}

$matrix = [
    ['a', 'b', 'c', 'd', 'e'],
    ['f', 'g', 'h']
];

foreach($matrix as $linha) {
    foreach($linha as $valor) {
        echo "$valor <br>";
    }
    echo "<hr>";
}

$numeros = [1, 2, 3, 4, 5];
foreach($numeros as &$dobrar) { // tem q pegar o endereço para mudar o array
    $dobrar *= 2;
    echo "$dobrar <br>";
}

print_r($numeros);