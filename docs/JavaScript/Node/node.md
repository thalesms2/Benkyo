# Node
> Orientado a eventos

## Comandos
> `-g` referencia para Global | `--save` salva dentro das dependencias do `package.json`
```bash
npm install nomePacote --save
npm install -g nomePacote
npm remove nomePacote
npm remove -g nomePacote
npm list
npm update nomePacote
```

### Package.json
```javascript
{
    name: 'nome do modulo, irá ser utilizado ao usar reqyure',
    description: 'frase curta que resume o módulo',
    author: 'nome <email>',
    version: 1.0.0,
}
```
> Versionamento é feito em três partes 1.2.3 sendo 1- Major 2- Minor 3- Patch

### Variavel com escopo global
```javascript
// Client Side
window.hoje = new Date()
// Server Side Node
global.hoje = new Date()
```
### Exportando e importando
> Diferenças na exportação
```javascript
// Exporta uma única função modular
module.exports = function(msg) {
    console.log(msg)
}
// Exporta um objeto com funções modulares
exports.hello = function(msg) {
    console.log(msg)
}
// Importação e uso
const first = require('./first')
const second = require('./second')

first('Hello World!')
second.hello('Hello World!')
```
## Hello Server
```javascript
// módulo nativo HTTP
const http = require('http')

const server = http.createServer(function(request, response) {
    response.writeHead(200, {"Content-Type": "text/html"})
    response.write("<h1>Hello World!</h1>")
    response.end()
})
server.listen(3000, () => {
    console.log('Servidor Hello World rodando na porta 3000!')
})
```
## Server com rotas
```javascript
const http = require('http')
const server = http.createServer(function(req, res) {
    res.writeHead(200, {"Content-Type": "text/html"})
    if(req.url == '/') {
        res.write('<h1>Home</h1>')
    } else if(req.url == '/msg') {
        res.write('<h1>Message</h1>')
    } else {
        res.write('<h1>404 - Not found</h1>')
    }
    res.end()
})
server.listen(3000, () => {
    console.log('Servidor escutando a porta 3000!')
})
```
## Utilizando o módulo nativo URL
> Ele serve para capturar e fazer o parser e formatar as URLs
```javascript
const http = require('http')
const url = require('url')

const server = http.createServer((req, res) => {
    res.writeHead(200, {"Content-Type": "text/html"})
    res.write('<h1>Dados da query string</h1>')
    const result = url.parse(req.url, true)
    for(let key in result.query) {
        res.write(`<h2>${key} : ${result.query[key]}</h2>`)
    }
    res.end()
})
server.listen(3000, () => {
    console.log('Server escutando a porta 3000!')
})
```
url.parser possui os atributos
- href: Url completa
- protocol
- host
- auth: dados de autenticação
- hostname
- port
- pathname
- search: uma query string
- path: pathname com query string
- query: query string em JSON: `{'query': 'string'}`
- hash: ancora `#hash`
## File System (FS)
> Responsável por manipular arquivos e diretórios do SO. Pode ser feito tanto síncrono quanto assíncrono, por padrão as funções com o final `Sync` são síncronas.
```javascript
const fs = require('fs')
// Assíncrono
fs.readFile('/index.html', (err, file) => {
    if (err) throw err
    console.log(file)
})
// Síncrono
const file = fs.readFileSync('/index.html')
// Bloqueia a aplicação até terminar a leitura e retornar o arquivo.
console.log(file)
```
## Server lendo um arquivo HTML
```javascript
const http = require('http')
const fs = require('fs')

const server = http.createServer((req, res) => {
    // __dirname é uma constante que retorna o diretório raiz da aplicação.
    fs.readFile(`${__dirname}/index.html`, (err, html) => {
        res.writeHeader(200, {"Content-Type": "text/html"})
        res.end(html)
    })
})
server.listen(3000, () => {
    console.log('Executando na porta 3000!')
})
```
## Assíncrono e Síncrono
> Síncrono bloqueia a aplicação sendo assim executado em série, e assíncrono executa as funções em paralelo e sem controle de quando a função finaliza, apenas o callback das mesmas sinalizam isso.
## Callback Hell
> Quando várias funções assíncronas tem callbacks encadeados uma dependente da outra. Importante dar `throw` em erros para impedir a execução quando apresentar um erro.
```javascript
const fs = require('fs')
fs.readdir(__dirname, (err, contents) => {
    if(err) throw err
    contents.forEach((content) => {
        const path = `./${content}`
        fs.stat(path, (err, stat) => {
            if(err) throw err
            if(stat.isFile()) {
                console.log(`${content} ${stat.size} bytes`)
            }
        })
    })
})
```
## Callback Heaven
```javascript
const fs = require('fs')
const readDirectory = () => {
    fs.readdir(__dirname, (err, directory) => {
        if (err) return err
        directory.forEach((file) => {
            readFile(file)
        })
    })
}
const readFile = (file) => {
    const path = `./${file}`
    fs.stat(path, (err, stat) => {
        if(err) return err
        if(stat.isFile()) {
            console.log(`${file} ${stat.size} bytes`)
        }
    })
}
readDirectory()
```

Parou Pag44