const fs = require('fs')
const path = require('path')

const caminho = path.join(__dirname, 'dados.txt')

const readFile = caminho => {
    return new Promise(resolve => {
        fs.readFile(caminho, (_, conteudo) => {
            resolve(conteudo.toString())
        })
        console.log('Depois de ler')
    })
}

readFile(caminho)
    .then(conteudo => conteudo.split('\n'))
    .then(console.log)