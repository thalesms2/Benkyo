<div class="titulo">Variáveis Variáveis</div>

<?php
$a = 'ValorA';
$$a = 'ValorAA';
echo "$a {$$a} ${$a} $valorA";


// O nome da variaveis é dependente do valor da variavel que ela foi criada, 
// então o conteudo da primeira variavel se torna o nome da segunda variavel