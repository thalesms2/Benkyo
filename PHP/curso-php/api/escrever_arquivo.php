<div class="titulo">Escrever Arquivo</div>

<?php
$arquivo = fopen('teste.txt', 'w');
fwrite($arquivo, "Valor inicial\n");
$str = 'Segunda Linha';
fwrite($arquivo, $str);
fclose($arquivo);

$arquivo = fopen('teste.txt', 'w');
fwrite($arquivo, "Novo conteudo");
fclose($arquivo);

$arquivo = fopen('teste.txt', 'a');
fwrite($arquivo, " com novos valores\n");
fwrite($arquivo, 'Adicionados em um segundo momento.');
fclose($arquivo);

ini_set('display_errors', 1);
// warning flag X é para quando se é necessário usar um arquivo novo ainda não criado
$arquivo = fopen('teste.txt', 'x'); 