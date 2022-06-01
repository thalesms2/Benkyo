<div class="titulo">Operadores Relacionais</div>

<?php
var_dump(1 == 1);
var_dump(1 > 1);
var_dump(1 >= 1);
var_dump(1 < 1);
var_dump(1 <= 1);
var_dump(1 != 1);
var_dump(1 <> 1);

var_dump(1 == "1"); // true
var_dump(1 === "1"); // false compara tipo do dado
var_dump(1 !== "1"); // true compara tipo do dado

// Spaceship 
//primeiro numero maior = 1 | igual = 0 | menor = -1
var_dump(500 <=> 3); // 1
var_dump(50 <=> 50); // 0
var_dump(5 <=> 50); // -1

var_dump(!!0); // alterar para boolean