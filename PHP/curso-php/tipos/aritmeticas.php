<div class="titulo">Operações Aritméticas</div>

<?php
echo 1 + 1, '<br>';
var_dump(1 + 1);
echo '<br>';
echo 1 + 2.5, '<br>';
echo 10 - 2, '<br>';
echo 2 * 5, '<br>';
echo 7 / 4, '<br>'; // Vai gerar numero float
echo intdiv(7, 4), '<br>'; // Função para tirar ponto flutuante, não recebe 0
echo round(7 / 4), '<br>'; // Função para arredondar
echo 7 % 4, '<br>'; // Resto
echo 8 % 2, '<br>';
echo 8 / 2, '<br>'; // INF
echo 4 ** 2, '<br>';

// Precedência de operadores:
// () => ** => / * % => + -

