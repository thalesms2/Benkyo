<div class="titulo">$_GET</div>

<?php
// Retorna um array com os parametros passados no URL da pagina
echo $_GET;
echo '<br>';
print_r($_GET);
echo "<br>{$_GET['nome']}"; 
// Para funcionar é preciso adicionar o parametro no URL com & para divisão seguido de nome=Thales
// &nome=Thales