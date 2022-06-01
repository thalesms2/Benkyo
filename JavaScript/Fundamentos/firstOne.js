let carac = 'Legal'
console.log(carac)
console.log(typeof carac)

let number = 2
console.log(number)
console.log(typeof number)

let float = 3.15
console.log(float)
console.log(typeof number)

const peso1 = 1.0
const peso2 = Number('2.0')
const peso3 = 1.1

console.log(peso1)
console.log(Number.isInteger(peso1))
console.log(Number.isInteger(peso2))
console.log(Number.isInteger(peso3))

const avaliacao1 = 9.8714
const avaliacao2 = 14.45124

const total = avaliacao1 * peso1 + avaliacao2 * peso2
const media = total / (peso1 + peso2)

console.log(media.toFixed(2))
console.log(media.toString())
console.log(media.toString(2)) //transforma o numero em binario
console.log(typeof media)

console.log(7 / 0) // retorna infinito
console.log("10" / 2)
// pega o valor String e faz a operação
console.log('3' + 2) // faz sentido e adiciona o numero 2 na string
console.log("Show!" *2) // retorna que não é um numero NaN
console.log(0.1 + 0.7) // imprecisão 
console.log((10.345).toFixed(2)) // não precisa armazenar na variavel para utilizar as funções
