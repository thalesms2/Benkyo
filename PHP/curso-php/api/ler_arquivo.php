<div class="titulo">Ler Arquivo</div>

<?php
$arquivo = fopen('teste.txt', 'r');
echo fread($arquivo, 10);
echo '<br>';
echo fread($arquivo, 10); // segundo parametro é o tanto d bits q será lido do arquivo
fclose($arquivo);

echo '<hr';

$arquivo = fopen('teste.txt', 'r');
$tamanho = filesize('teste.txt');
echo $tamanho, '<br>';
echo fread($arquivo, $tamanho);
fclose($arquivo);

echo '<hr>';

$arquivo = fopen('teste.txt', 'r');
echo fgets($arquivo), '<br>';
echo fgets($arquivo), '<br>';
var_dump(fgets($arquivo));
echo '<br>';
fclose($arquivo);

echo '<hr>';

$arquivo = fopen('teste.txt', 'r');
while(!feof( $arquivo)) {
    echo fgetc($arquivo);
}
echo '<br>';
fclose($arquivo);

echo '<br>';

$arquivo = fopen('teste.txt', '+r');
echo fgets($arquivo), '<br>';
echo fgets($arquivo), '<br>';
fwrite($arquivo, "\nAdicionado durante a leitura");
echo fgets($arquivo), '<br>';
fclose($arquivo);

echo 'FIM';
