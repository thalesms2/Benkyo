<div class="titulo">Básico Array</div>

<?php
$lista = array(1, 2, 3.4, 'texto');
echo $lista . '<br>';
var_dump($lista);

echo '<br>' . $lista[2];
var_dump($lista[2]);

$texto = 'texto de teste';
echo '<br>' . $texto[5];
echo '<br>' . mb_substr($texto, 6, 4);
