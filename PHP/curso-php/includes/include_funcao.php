<div class="titulo">Include Função</div>

<?php
echo 'Carregando: include_funcao<br>';
function carregarArquivo() {
    include('include_arquivo.php');
    // variaveis estão dentro do escopo da função
    // funções não ficam limitadas ao escopo da função
    echo $variavel . '<br>';
    echo soma(2, 5) . '!<br>';
}

carregarArquivo();