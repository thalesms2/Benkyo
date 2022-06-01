<div class="titulo">String</div>
<?php
echo 'Eu sou uma string';
echo '<br>';
var_dump("Eu também");
echo '<br>';

// Concatenação
echo "Nos também" . ' somos';
echo '<br>', "Também aceito", " virgulas"; // Só funciona no echo
echo '<br>';
echo "'Teste'" . '"Teste"' . '\'Teste\'';
echo('Teste');
print('<br>Teste');
print "<br>Também";

//Algumas Funções

echo '<br>' . strtoupper('maximizado');
echo '<br>' . strtolower('MINIMIZADO');
echo '<br>' . ucfirst('só a primeira letra');
echo '<br>' . ucwords('todas as palavras');
echo '<br>' . strlen('Quantas letras');
echo '<br>' . mb_strlen("Eu também", "utf-8");
echo '<br>' . substr('Só uma parte mesmo', 7, 6);
echo '<br>' . str_replace('isso', 'aquilo', 'Trocar isso isso');
