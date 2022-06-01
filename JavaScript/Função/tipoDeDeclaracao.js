console.log(soma(3, 4))
// console.log(sub(3, 4)) só depois de declarada

// function declaration, compilador carrega todas as funções dessa forma antes de executar o código
function soma(x, y){
    return x + y
}

// function expression
const sub = function (x, y){
    return x - y
}
console.log(sub(3, 4))

// named function expression (pouco usada) para aparecer no debugger
const mult = function mult(x, y){
    return x * y
}
console.log(mult(3, 4))