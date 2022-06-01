let num1 = 1
let num2 = 2

num1++

console.log(num1)

--num1 // prioridade maior do que a outra forma

console.log(num1)

console.log(++num1 === num2--) // true por causa q incremento foi executado antes da comparação e o decremento foi executado depois da comparação
console.log(num1 === num2)