<div class="titulo">Classe</div>

<?php

class Cliente {
    // Atributos
    public $nome = 'Anônimo';
    public $idade = 18;
    
    // Metodos
    public function apresentar() {
        echo "Nome: {$this->nome}<br>";
    }
 }

 $c1 = new CLiente();
 $c1->apresentar();

 $c1->nome = 'Thales';

 echo $c1->apresentar();
