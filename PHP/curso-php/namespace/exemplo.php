<?php namespace contexto; ?>

<div class="titulo">Exemplo Básico</div>

<?php
echo __NAMESPACE__ . '<br>';
const constante1 = 123; // como está dentro de um namespace ele já define a constante no escopo do namespace
define('contexto\constante2', 234); // pode usar o define para de fora do namespace declarar uma constante no escopo do namespace

echo constante1 . '<br>';
echo constante2 . '<br>';