<div class="titulo">Require Return</div>

<?php
$valorRetorno = require('return_usado.php');
echo "$valorRetorno";

$valorRetorno2 = require(__DIR__ . '/return_usado.php');