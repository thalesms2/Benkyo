<div class="titulo">Referencia</div>

<?php
$variavel = 'valor inicial';
$variavelReferencia = &$variavel;
echo "$variavelReferencia $variavel<br>";
$variavel = 'valor alterado';
echo "$variavelReferencia $variavel";