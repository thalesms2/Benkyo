<div class="titulo">Comparação Arrays</div>

<?php
$arr1 = ["nome" => 'Maria', 'idade' => 20];
$arr2 = ["nome" => 'Maria', 'idade' => 20];
var_dump($arr1 == $arr2);
var_dump($arr1 === $arr2);
// true true | msm informações msm chaves

$arr3 = ['idade' => 20, "nome" => 'Maria'];
echo '<br>';
var_dump($arr1 == $arr3);
var_dump($arr1 === $arr3);
// true false | ordem influencia no estritamente igual