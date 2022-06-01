<div class="titulo">Argumentos e Retorno</div>

<?php

function obterMensagem() {
    return 'Seja bem vindo(a)!';
}

obterMensagem();
$m = obterMensagem();
echo $m;
echo '<br>', obterMensagem();
echo '<br>';
var_dump(obterMensagem());

function soma($a, $b) {
    return $a+$b;
}

echo soma(2, 3);