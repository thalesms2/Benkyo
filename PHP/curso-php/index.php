<?php 
session_start();

if($_COOKIE['usuario']) {
    $_SESSION['usuario'] = $_COOKIE['usuario'];
}

if(!$_SESSION['usuario']) {
    header('Location:login.php');
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <link href="https://fonts.googleapis.com/css?family=Oswald:200,300,400,500,600,700" rel="stylesheet">
    <link rel="stylesheet" href="recursos/css/estilo.css">
    <title>Curso PHP</title>
</head>
<body>
    <header class="cabecalho">
        <h1>Curso PHP</h1>
        <h2>Índice dos Exercícios</h2>
    </header>
    <nav class="navegacao">
        <span class="usuario">Usúario: <?= $_SESSION['usuario'] ?></span>
        <a href="logout.php" class="vermelho">Sair</a>
    </nav>
    <main class="principal">
        <div class="conteudo">
            <nav class="modulos">
                <div class="modulo verde">
                    <h3>Básico</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=basico&file=ola">
                            Olá PHP
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=basico&file=html">
                            Integração HTML
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=basico&file=css">
                            Integração CSS
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=basico&file=comentarios">
                            Comentários PHP
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=basico&file=desafio">
                            Desafio
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo vermelho">
                    <h3>Tipos</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=tipos&file=int">
                            Integer
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=tipos&file=float">
                            Float
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=tipos&file=aritmeticas">
                            Op. Aritméticas
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=tipos&file=string">
                            String
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=tipos&file=bolean">
                            Booleano
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=tipos&file=conversoes">
                            Conversões
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo azul">
                    <h3>Variaveis</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=variaveis&file=basico">
                            Básico
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=variaveis&file=interpolacao">
                            Interpolação
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=variaveis&file=variaveis_variaveis">
                            Variaveis Variaveis
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=variaveis&file=referencia">
                            Referencia
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=variaveis&file=constante">
                                Constante
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo roxo">
                    <h3>Constrole</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=controle&file=if_else">
                            IF ELSE
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=controle&file=op_relacionais">
                            Operadores Relacionais
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=controle&file=op_ternario">
                            Operador Ternario
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=controle&file=switch">
                            Switch
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo laranja">
                    <h3>Array</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=array&file=basico">
                            Básico Array
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=array&file=mapa">
                            Mapa
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=array&file=operacoes">
                            Operações
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=array&file=multidimencionais">
                            Multidimencionais
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=array&file=constantes">
                            Constantes
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=array&file=get">
                            $_GET
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=array&file=post">
                            $_POST
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=array&file=comparacao">
                            Comparação Arrays
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo verde-escuro">
                    <h3>Estrutura de Repetição</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=repeticoes&file=for">
                            For
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=repeticoes&file=foreach">
                            Foreach
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo vermelho-escuro">
                    <h3>Funções</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=funcoes&file=escopo">
                            Escopo
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=funcoes&file=args_retorno">
                            Argumentos e Retorno
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=funcoes&file=args_variaveis">
                            Argumentos Variáveis
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=funcoes&file=args_padrao">
                            Argumento Padrão
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=funcoes&file=tipos">
                            Tipos
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=funcoes&file=anonima">
                            Funções Anonimas
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=funcoes&file=closure_callable">
                            Closure & Callable
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=funcoes&file=recursividade">
                            Recursividade
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=funcoes&file=retornando_funcao">
                            Retornando Funções
                            </a>
                        </li>
                    </ul>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=funcoes&file=map_filter">
                            Map & Filter
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo azul-escuro">
                    <h3>Orientação a Objetos</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=poo&file=classe">
                            Classe
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=poo&file=construtor_destrutor">
                            Construtor e Destrutor
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=poo&file=heranca">
                                Herança
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo roxo-escuro">
                    <h3>Includes</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=includes&file=include">
                            Include
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=includes&file=include_funcao">
                            Include Função
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=includes&file=include_require">
                            Include Require
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=includes&file=require_return">
                            Require Return
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=includes&file=include_once">
                            Include Once
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo laranja">
                    <h3>NameSpace</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=namespace&file=exemplo">
                            Exemplo Básico
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo verde">
                    <h3>Tratamento de erro</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=tratamento_erro&file=try_catch">
                            Try Catch
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=tratamento_erro&file=erro_personalizado">
                            Erros Personalizados
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=tratamento_erro&file=erro_handler">
                            Error Handler
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo vermelho">
                    <h3>Sessão</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=sessao&file=basico_sessao">
                            Básico
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=sessao&file=gerenciando_sessao">
                            Gerenciando Sessão
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo azul">
                    <h3>API</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=api&file=datas_01">
                            Datas 01
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=api&file=datas_02">
                            Datas 02
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=api&file=escrever_arquivo">
                            Escrever Arquivo
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=api&file=ler_arquivo">
                            Ler Arquivo
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=api&file=upload">
                            Upload
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=api&file=download">
                            Download
                            </a>
                        </li>
                        <li>
                            <a href="exercicio.php?dir=api&file=imagens">
                            Imagens
                            </a>
                        </li>
                    </ul>
                </div>
                <div class="modulo roxo">
                    <h3>Formulario</h3>
                    <ul>
                        <li>
                            <a href="exercicio.php?dir=formulario&file=formulario">
                            Formulario
                            </a>
                        </li>
                    </ul>
                </div>
            </nav>
        </div>
    </main>
    <footer class="rodape">
        COD3R & ALUNOS © <?= date('Y'); ?>
    </footer>
</body>
</html>