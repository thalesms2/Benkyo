<div class="titulo">For</div>

<?php
// para um loop determinado de repetições

for($cont = 1; $cont <= 5; $cont++) {
    echo "$cont <br>";
}
echo "<hr>";
for(; $cont <= 10; $cont++) {
    echo "$cont <br>";
}
echo "<hr>";
for(; $cont <= 15; ) {
    echo "$cont <br>";
    $cont++;
}
echo "<hr>";

$array = [1 => 'Domingo', 'Segunda', 'Terça', 'Quarta', 'Quinta', 'Sexta', 'Sábado'];
print_r($array);
echo '<br>';
for($i = 1; $i <= count($array); $i++) {
    echo "{$array[$i]} <br>";
}