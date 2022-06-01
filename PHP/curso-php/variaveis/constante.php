<div class="titulo">Constante</div>

<?php
define('TAXA_DE_JUROS', 5.9);
echo TAXA_DE_JUROS;

const NOVA_TAXA = 2.5;
echo '<br>' . NOVA_TAXA;

$variavel = 2;
define('TAXA', $variavel);
echo '<br>' . TAXA;

echo '<br>Linha ' . __LINE__; 
echo '<br>Arquivo ' . __FILE__; 
echo '<br>Pasta ' . __DIR__; 