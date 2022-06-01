// p
//     .then(valor => valor[0])
//     .then(primeiro => primeiro[0])
//     .then(letra => letra.toLowerCase())
//     .then(letraMinuscula => console.log(letraMinuscula))

const primeiroElemento = array => array[0]
const primeiraLetra = string => string[0]
const letraMinuscula = letra => letra.toLowerCase()

let p = new Promise(function (resolve) {
    resolve(['Ana', 'Bia','Carlos', 'Daniel'])
})
    .then(primeiroElemento)
    .then(primeiraLetra)
    .then(letraMinuscula)
    .then(console.log)