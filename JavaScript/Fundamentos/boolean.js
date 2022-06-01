let isAtivo = false
console.log(isAtivo)

isAtivo = true
console.log(isAtivo)

isAtivo = 1
console.log(!!isAtivo) // negação = !
console.log(!isAtivo)
console.log(isAtivo)

//todo numero inteiro é verdadeiro
console.log('Verdadeiros')
console.log(!!3)
console.log(!!-1)
console.log(!!' ')
console.log(!![])
console.log(!!{})
console.log(!!Infinity)
console.log(!!(isAtivo = true))
console.log(!!(isAtivo = Infinity))

console.log('Falsos')
console.log(!!0)
console.log(!!'')
console.log(!!null)
console.log(!!NaN)
console.log(!!undefined)
console.log(!!(isAtivo = false))

console.log('' || null || 0 || 'epa') // vai retornar o primeiro resultado verdadeiro

let nome = ''
console.log(nome || 'Desconecido') // vai retornar desconhecido caso não retorne false na variavel