<div class="titulo">Retornando Funções</div>

<?php
function soma($a) {
    // precisa dar permissão para poder usar a variavel fora do seu escopo
    return function($b) use ($a) {
        return $a + $b;
    };
}

echo soma(3)(3);

$doisMais = soma(2);
echo '<br>', $doisMais(10);
echo '<br>', $doisMais(18);