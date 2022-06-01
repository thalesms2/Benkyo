// recebe qualquer tipo de variavel int string etc
// array não tem tamanho definido
const valores = [7.7, 8.9, 6.3, 9.2]
console.log(valores[0], valores[3])
console.log(valores[4]) // acessa valores do array que não existe no array retornando undefined

valores[10] = 10
console.log(valores)
console.log(valores.length)

valores.push({id: 3}, false, null, 'teste')
console.log(valores)

console.log(valores.pop()) // retira o ultimo valor da array
delete valores[0]
console.log(valores)

console.log(typeof valores)