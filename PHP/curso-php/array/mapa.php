<div class="titulo">Mapa</div>

<?php
$dados = array(
    "idade" => 25,
    "cor" => "verde",
    "peso" => 49.8
);

print_r($dados);

var_dump($dados[0]);
echo '<br>' . $dados["peso"];

$dados[] = 'i';
echo '<br>';
print_r($dados);

$dados["nome"] = "Thales";
echo '<br>';
print_r($dados);