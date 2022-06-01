<div class="titulo">IF ELSE</div>

<?php
$condicional = true;

if($condicional) {
    echo 'Será executado<br>';
}

if($condicional)
    echo "Verdadeiro<br>";
else 
    echo "Falso<br>";

if(!$condicional) {
    echo "Não vai entrar aqui";
} else if ($condicional) {
    echo "Entrou";
}