<div class="titulo">Tipos</div>

<?php

function somar1($a, $b) {
    echo "<span>Somando $a + $b = </span>";
    return $a+$b;
}

echo somar1(1, 2) . '<br>';
echo somar1(1.1, 2.1) . '<br>';
echo somar1(1, '4dois') . '<br>';

function somar2(int $a, int $b) {
    echo "<span>Somando $a + $b = </span>";
    return $a+$b;
}

echo somar2(1, 2) . '<br>';
echo somar2(1.1, 2.1) . '<br>';
// echo somar2(1, '4dois') . '<br>';

function somar3($a, $b): int {
    echo "<span>Somando $a + $b = </span>";
    return $a+$b;
}

echo somar3(1, 2) . '<br>';
echo somar3(1.1, 2.1) . '<br>';
echo somar3(1, '4dois') . '<br>';


