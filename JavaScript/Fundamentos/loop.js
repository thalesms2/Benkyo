/* Mostrando que let tem limitação de bloco e quando utilizada fora irá gerar um erro pois não está disponivel fora do bloco onde foi declarada
for(var i = 0; i < 10; i++){
    console.log(i)
}
console.log('i ', i)

for(let j = 0; j < 10; j++){
    console.log(j)
}
console.log('j ', j)
*/
const funcs = []
for(let i = 0; i < 10; i++){ // informando var ele vai receber 10 em todos os locais
    funcs.push(function() {
        console.log(i)
    })
}
funcs[2]()
funcs[8]()