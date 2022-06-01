<div class="titulo">Try Catch</div>

<?php

// echo 7 / 0;
// echo intdiv(7, 0);

try { // Possue o código perigoso que pode retornar erro e caso retorne um erro executa o catch que está ligado ao mesmo
    echo intdiv(7, 0);
} catch (Error $e) {
    echo 'Teve um erro aqui<br>';
}
// faz com que o resto do codigo seja executado porque tratou o erro que daria

try {
    throw new Exception('Um erro muito estranho');
    echo intdiv(7, 0);
} catch (DivisionByZeroError $e) {
    echo 'Divisão por zero<br>';
} catch (Throwable $e) {
    echo 'Erro encontrado: ' . $e->getMessage() . '<br>';
} finally {
    echo 'Sempre executado!<br>';
}