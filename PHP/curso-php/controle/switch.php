<div class="titulo">Switch</div>

<?php
$categoria = '???';
switch($categoria) {
    case 'luxo': {
        echo '<br>Luxo';
        break;
    }
    case 'suv':
    case 'suv básico':
        $carro = 'suv';
        break;
    default:
        echo 'default';
}