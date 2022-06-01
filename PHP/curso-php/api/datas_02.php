<div class="titulo">Datas #02</div>

<?php
$formatoData1 = 'D, d \d\e M \d\e Y';
$formatoData2 = '%A, %d de %B de %Y';
$formatoDataHora = '%A, %d de %B de %Y - %H:%M:%S';

$agora = new DateTime();

// print_r($agora);
// echo '<br>';

echo $agora->format($formatoData1) . '<br>';

setlocale(LC_TIME, 'pt_BR');

$amanha = new DateTime('-2 day');
echo strftime($formatoData2, $amanha->getTimestamp() . '<br>');

$dataFixa = new DateTime('1999-12-24 09:04:50');
echo strftime($formatoDataHora, $dataFixa->getTimestamp() . '<br>');

$amanha->modify('+1 day');
echo strftime($formatoDataHora, $amanha->getTimestamp() . '<br>');

$amanha->setDate(2000, 5, 20);
echo strftime($formatoDataHora, $amanha->getTimestamp() . '<br>');

$dataPassada = new DateTime('2000-05-17');
$dataFutura = new DateTime('2030-05-17');
$outraData = new DateTime('2030-05-17');

echo ($amanha > $dataPassada ? 'Maior' : 'Menor') . '<br>';
