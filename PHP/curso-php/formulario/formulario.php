<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.0.0/dist/css/bootstrap.min.css">
<div class="titulo">Formulario</div>

<h2>Cadastro</h2>

<?php
if(count($_POST) > 0) {
    if(!filter_input(INPUT_POST, "nome")) {
        echo 'Nome é obrigatório', '<br>';
    }
}
?>

<form action="#" method="post">
    <div class="form-row">
        <div class="form-group col-md-9">
            <label for="nome">Nome</label>
            <input type="text" class="form-control" 
            id="nome" name="nome" placeholder="Nome" 
            value="<?= $_POST['nome'] ?>">
        </div>
        <div class="form-group col-md-3">
            <label for="site">Nascimento</label>
            <input type="text" class="form-control" 
            id="nascimento" name="Nascimento" placeholder="Nascimento" 
            value="<?= $_POST['nascimento'] ?>">
        </div>
    </div>
    <div class="form-row">
        <div class="form-group col-md-6">
            <label for="email">E-mail</label>
            <input type="text" class="form-control" 
            id="email" name="email" placeholder="E-mail" 
            value="<?= $_POST['email'] ?>">
        </div>
        <div class="form-group col-md-6">
            <label for="site">Site</label>
            <input type="text" class="form-control" 
            id="site" name="site" placeholder="Site" 
            value="<?= $_POST['site'] ?>">
        </div>
    </div>
    <div class="form-row">
        <div class="form-group col-md-6">
            <label for="filhos">Qtde de Filhos</label>
            <input type="text" class="form-control" 
            id="filhos" name="filhos" placeholder="Qtde de Filhos" 
            value="<?= $_POST['filhos'] ?>">
        </div>
        <div class="form-group col-md-6">
            <label for="salario">Salário</label>
            <input type="text" class="form-control" 
            id="salario" name="salario" placeholder="Salário" 
            value="<?= $_POST['salario'] ?>">
        </div>
    </div>
    <button class="btn btn-primary btn-lg">Enviar</button>
</form>