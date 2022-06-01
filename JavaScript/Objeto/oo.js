// Código não executavel
// Procedural com função com procedimento
processamento(valor1, valor2, valor3) // Função que recebe valores para processar

// Orientação a objetos
objeto = { // Capsula que agrupa comportamentos e atributos
    valor1, // Guarda os valores
    valor2,
    valor3,
    processamento(){ // Guarda os comportamentos
        // ...
    }
    // Encapsulados para não ser usados em lugares errados
}
objeto.processamento()
// Importante Paradigmas
// Abstração = pegar algo que existe e trazer para o código entender como mapear o mundo e trazer isso adequadamente para o sistema
// Encapsulamento = Tem o objetivo de manter uma interface de comunicação para facilitar o uso ou alterações, escondendo os detalhes de implementação
// Alto nivel de acoplamento = Dependencia de objetos entre eles, ou seja sem encapsulamento, não deixa o código evoluir com facilidade pela quantidade de mudança para alterar alguma coisa
// Herança prototype = Recebe atributos e comportamentos de um objeto pai
// Polimorfismo = Multiplas formas

// Revisão de objeto
// Coleção dinâica de pares chave/valor
const produto = new Object
produto.nome = 'Cadeira'
produto['marca de produto'] = 'Generica'
produto.preco = 220
console.log(produto)

const carro = {
    modelo: 'A4',
    valor: 89000,
    proprietario: {
        nome: 'Raul',
        idade: 56,
        endereco: {
            logradouro: 'Rua ABC'
            numero: 123
        }
    },
    condutores: [{
        nome: 'Junior',
        idade: 42
    }, {
        nome: 'Ana',
        idade: 22
    }]   
    calcularValorSeguro: function(){
        // ...
    } 
}
carro.proprietario.endereco.numero = 1000
carro['proprietario']['endereco']['logradouro'] = 'Av Gigante'
delete carro.condutores // Apaga e tudo que estava dentro dos condutores.
delete carro.proprietario.endereco
delete carro.calcularValorSeguro