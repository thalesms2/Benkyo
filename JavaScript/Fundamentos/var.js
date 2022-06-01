{ { { { { { { { var sera = 'Será?' } } } } } } } }

console.log(sera)

// outras linguagens só permite usar a variavel dentro do mesmo bloco, que não seja uma função

function teste(){
    var local = 123
}
teste()
// console.log(local) não funciona já que está dentro da função
// evitar fazer variaveis globais já que qualquer outro script poderia acessar sua varivel e alterar seu valor

var numero = 1
{
    var numero = 2
    console.log('dentro ', numero)
}
console.log('fora ', numero)