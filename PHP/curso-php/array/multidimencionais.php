<div class="titulo">Multidimencionais</div>

<?php
$dados = [ 
    "pessoa1" => [
        "nome" => "Roberto",
        "idade" => 25,
        "naturalidade" => "São Paulo"
    ],
    [
        "nome" => "Maria",
        "idade" => 22,
        "naturalidade" => "Rio de Janeiro"
    ]
    ];

    print_r($dados);
    echo '<br>' . $dados["pessoa1"]["nome"];
    echo '<br>' . $dados[0]["nome"];