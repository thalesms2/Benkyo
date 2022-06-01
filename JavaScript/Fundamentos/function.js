console.log(typeof Object)
class Produto{}
console.log(typeof Produto)

// Função sem retorno

function imprimirSoma(a, b){
    console.log(a + b)
}

imprimirSoma(2 , 3)
imprimirSoma(2) // B seria undefined
imprimirSoma(2, 3, 4, 5, 6)
imprimirSoma() // vai funcionar e vai retornar normalmente

// Função com retorno

function soma(a, b = 0){
    return a + b
}
console.log(soma(12, 3))
console.log(soma(2)) // Vai pegar o valor padrão de B inserido na função
console.log(soma())