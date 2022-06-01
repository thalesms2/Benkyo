<div class="titulo">Herança</div>

<?php
class Pessoa {
    public $nome;
    public $idade;

    function __construct($nome, $idade) {
        $this->nome = $nome;
        $this->idade = $idade;
        echo "Pessoa Criada <br>";
    }

    function __destruct() {
        echo "Pessoa diz tchau <br>";
    }

    public function apresentar() {
        echo "{$this->nome}, {$this->idade} anos<br>";
    }
}

class Usuario extends Pessoa {
    public $login;

    function __construct($nome, $idade, $login) {
        $this->nome = $nome;
        $this->login = $login;
        $this->idade = $idade;
        echo "Usuario Criado <br>";
    }

    function __destruct() {
        echo "Usuario diz tchau <br>";
    }

    public function apresentar() {
        echo "@{$this->login}: ";
        parent::apresentar();
    }
}

$usuario = new Usuario('Gustavo', 21, 'gust_xd');
$usuario->apresentar();
unset($usuario);