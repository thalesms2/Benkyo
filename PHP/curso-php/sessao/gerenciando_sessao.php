<div class="titulo">Gerenciando Sessão</div>

<?php
session_id('4e3e52039af488d1e0d337ee6a8905c4'); // para setar o ID precisa estar antes do starta
session_start();
echo session_id();

$contador = &$_SESSION['contador'];
$contador = $contador ? $contador + 1 : 1;
echo '<br>' . $_SESSION['contador'];

if($_SESSION['contador'] % 5 === 0) {
    session_regenerate_id();
}

if($_SESSION['contador'] >= 15) {
    session_destroy();
}