<div class="titulo">Constantes</div>

<?php
const FRUTAS = ["Laranja", "Abacaxi"];
const CAPITAIS = [
    "São Paulo" => "São Paulo",
    "Santa Catarina" => "Florianopolis"
];
echo FRUTAS[1];
echo '<br>' . CAPITAIS["Santa Catarina"];

// quando criado um array em uma constante, todo seu conteudo é validado como uma constante