const pessoa = {
    nome: 'Ana',
    idade: 5,
    endereco: {
        logradouro: 'Rua ABC',
        numero: 1000
    }
}

const { nome, idade } = pessoa // tire o nome e idade do obj pessoa
console.log(nome, idade)

const { nome: n, idade: i } = pessoa // alterando o nome das variaveis que vão receber as informações
console.log(n, i)

const { sobrenome, bemHumorada = true } = pessoa // caso não vier nada no bemHumorada vai receber o valor padrão true
console.log(sobrenome, bemHumorada)

const { endereco: { logradouro, numero, cep}} = pessoa // não cria endereço, é apenas o local que vai procurar as informações dentro do obj
console.log(logradouro, numero, cep)
// destruturing usa chaves em objetos e chaves para arrays
const [a] = [10] // operador destructuring
console.log(a)
const [n1, , n3, , n5, n6 = 0] = [10, 7, 9, 8]
console.log(n1, n3, n5, n6)
const [, [, nota]] = [[, 8, 8],[9, 6, 8]]
console.log(nota)

function rand({ min = 0, max = 1000}){
    const valor = Math.random() * (max - min) + min
    return Math.floor(valor)
}

const obj = { max: 50, min: 40}
console.log(rand(obj))
console.log(rand({ min: 955}))
console.log(rand({})) // funciona pois ele utiliza os valores padrões que já estão na função
// console.log(rand()) vai gerar um erro pois está tentando desestruturar algo que não foi definido