const escola = "Thales"

console.log(escola.charAt(4))
console.log(escola.charAt(7)) // não gera erro, retorna null
console.log(escola.charCodeAt(3)) // valor do caractere na tabela ASC código HTML
console.log(escola.indexOf('h')) // acha a posição do item mencionado
console.log(escola.substring(1)) // começa a string no indice 1
console.log(escola.substring(0, 3)) // começa a string no indice 0 sem o 0 e me dê 3 caracteres
console.log('Nome '.concat(escola).concat("!"))
console.log(escola.replace('e', 3))
console.log(escola.replace(/\d/, 3))
console.log(escola.replace(/\w/g, 3))
console.log('Ana, Minoru, Sato, Pedro'.split(',')) // gerar um array, informando o caractere que denomina o final de cada elemento

