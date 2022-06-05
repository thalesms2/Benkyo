# JavaScript
```javascript
let msg = 'example'
console.log('Hello World!')
// Print on console: Hellow World!
console.log('The ' + msg)
console.log(`The ${msg}`)
// Print on console the same thing: The example
```
## Comentários
```javascript
// Comentário de uma linha
/*
Comentário de varias linhas
*/
```
## Integração no HTML 
> Código JavaScript dentro do arquivo `.html`
```html
<script type="text/javascript">
</script>
```
> Importação de um arquivo `.js` separado com a tecnologia de modularização de código
```html
<script type="module/javascript" src="filename.js"></script>
```
## Variáveis
### LET
> Escopo de bloco
```javascript
let escoped
```
### VAR
> Escopo global ou de função, pode ser declaradas novamente dentro de seu escopo
```javascript
var notEscoped
```
### CONST
> Escopo de bloco, obriga inicialização durante a declaração e não permite atualizar o seu conteudo
```javascript
const escoped = "not undefined"
```
## Tipos
> JavaScript é dinâmicamente tipado, o que quer dizer que você tem total liberdade para fazer muita coisa errada
### Number
```javascript
let number = 6
let price = 4.99;
let dinamic = 'Hello World'
dinamic = true
```
### Strings
> Grupo de caracteres (letras, espaços vazios, números ou simbolos) podem ser utilizadas por aspas `'` ou aspas duplas `"`
```javascript
let first = 'You Won!'
let second = "Almost there."
```
### Array
> Básico
```javascript
const arr = [123, 'differents types', true]
console.log(arr[0])
// Print: 123
```
### Null
> Representa a falta de valor | vazio
```javascript
let x = null
```
### Undefined
> Representa a falta de definição | Variável não iniciada
```javascript
let x
console.log(x)
```

## Alterações de tipos
```javascript
Number.parseInt('string') 
Number.parseFloat('string') 
Number(variable)

String(variable)
variable.toString()

```
## Operadores Aritméticos
- `+` Adição
- `-` Subtração
- `*` Multiplicação
- `/` Divisão
- `%` Módulo
- `**` Potencia
## Operadores de Atribuição
- `=` Atribuição simples 
- `+=` Soma e atribui
- `-=` Subtrai e atribui
- `*=` Multiplica e atribui
- `/=` Divide e atribui
```javascript
number = number + 10
number += 10
// Same
```
## Condicionais
- `||` OR
- `&&` AND 
- `!` NOT
### Operadores de comparação
- `===` Estritamente iguais
- `!==` Estritamente diferentes
- `>` Maior que
- `>=` Maior que ou igual
- `<` Menor que
- `<=` Menor que ou igual
- `` 
### Operador Ternario
> If menor
```javascript
(condition) ? true : false
patience ? "studying" : "playingValorant"
```
### IF
```javascript
if (condition){
    // code
} else if (anotherCondition) {
    // more code
} else {
    // you know right?
}
```
### Switch
```javascript
switch (keyPress) {
    case 'w':
        // UP
        break;
    case 's':
        // DOWN
        break;
    case 'a':
        // LEFT
        break;
    case 'd':
        // RIGHT
        break;
    default:
        // ELSE
}
```
## Loops
### While
> Executa um looping até que a condição se torne falsa, utilizada para executar algo por tempo inderteminado
```javascript
while (condition) {
    // code
}
```
### Do While
> Executa o looping uma vez e depois checa a condição para se manter em looping, utilizada para forçar o código a executar pelo menos uma vez
```javascript
do {
    // code
} while (condition)
```
### For
> Looping utilizado para executar algo por tempo determinado 
```javascript
for (let i = 0; i < 10; i++) {
    // code
}
```

### Break
> Quebra o looping e retira a execução de dentro do bloco de código em questão
```javascript
let counter = 0
while(true) {
    if (counter > 10) {
        break;
    }
    console.log(counter)
    counter++
}
// Print: 0 to 10
```

## Funções
> Básico
```javascript
function functionName (params1, params2) {
    return `${params1} : ${params2}`
}
```
> Função nomeada
```javascript
function heheh() {
    return "heheh c:"
}
```
>Função anônima
```javascript
const notHeheh = function() {
    return "not heheh :c"
}
```
### Arrow Functions
> Se possuir apenas um parâmetro não precisa dos parentêses na lista de parâmetros
```javascript
const sum = (x, y) => {
    return x + y
}
const print = text => {
    console.log(text)
}
const voidFunc = () => {
    return null;
}
const multiply = (a, b) => a * b
```
### Callback Function
> Função que é passada para outra função como um parâmetro, essa função pode ser executada. Isso é possivel porque no JavaScript tudo é objeto
```javascript
const isEven = n => {
    return n % 2 == 0
}
const printMsg = (evenFunc, num) => {
    console.log(`Even: ${evenFunc(num)}`)
}
printMsg(isEven, 4)
```
## Objects
> Básico, quando o atributo do objeto começar com underline `_` quer dizer que ele é privado, o que quer dizer que ele não deve ser usado fora de seu contexto, que é dentro do objeto. Mas é JavaScript então se você usar vai funcionar sem avisos ou erros. Assim é necessário criar um setter e um getter, para alterar e receber o valor.
```javascript
const product = {
    _hasDiscount : false,
    category: 'product',
    price: {
        fullPrice: 100,
        lowPrice: 80
    }
    method() {
        // code
    }
    method2: () => {
        // more code
    }
}
procuct.price.lowPrice // 80
```
> Mesmo sendo definido dentro de uma constante os objetos em JavaScript podem ter suas propriedades alteradas e/ou deletadas
```javascript
const edit = {
    info: 'information',
    infoNumber: 3,
}
// { info: 'information', infoNumber: 3 }

delete edit.infoNumber
// { info: 'information' }

edit.info = 'new information'
// { info: 'new information' }
```
### this
> `this` é uma referencia para chamar o próprio objeto onde o método está sendo criado. É algo como um ponteiro que aponta pro objeto pai. **Cuidado**, funções arrow, não possuem seu próprio contexto dentro de `this`, sendo assim o retorno de `this.atributo` fica `undefined`
```javascript
const cat = {
    name: 'Cristal',
    whatName() {
        return this.name
    }
}
console.log(cat.whatName())
// Out: Cristal
```
### Factory Functions
> Função Fabrica de Objetos | Funções que retornam um objeto são chamadas de factory function, elas recebem parâmetros para costumizar o objeto retornado. 
```javascript
const dogFactory = (name, age, breed) => {
    return {
        name: name,
        age: age,
        breed: breed,
        bark() {
            console.log('Woof!')
        }
    }
}
```
### For in
> Faz um looping percorrendo todos os atributos dentro do objeto.
```javascript
for (let key in obj) {
    console.log(`${key}: ${obj[key]}`)
}
```

### getters and setters
> Para interagir com atributos privados/restritos, é necessário a criação dessas duas funções sendo getter para retornar o valor da mesma e setter para alterar esse valor.
```javascript
const myCat = {
  _name: 'Cristal',
  get name() {
    return this._name;  
  },
  set name(newName) {
    this._name = newName;  
  }
};
 
// Reference invokes the getter
console.log(myCat.name);
 
// Assignment invokes the setter
myCat.name = 'Jhon Jhon';
```


## Métodos
> Métodos, retornam a informação sobre o objeto, são chamados adicionando uma instancia utilizando um ponto `.` o nome do metodo e parênteses
```javascript
// Retorna um número entre 0 e 1 aleatóriamente
Math.random()
```
### String.
> .lenght retorna a quantidade de caracteres que a string contem
```javascript
let msg = 'Hello World'
console.log(msg.lenght)
console.log('Twenty One Pilots'.lenght)
```
> .toUpperCase retorna a string toda em maiusculo
```javascript
var msg = 'Hello World'
console.log(msg.toUpperCase())
```
> .toLowerCase retorna a string toda em minusculo
```javascript
var msg = 'Hello World'
console.log(msg.toLowerCase())
```
### Number.
> .toFixed(number) number sendo a quantidade de casas após o ponto flutuante
```javascript
var num = 12.5
console.log(num.toFixed(2))
// 12.50
```
> .toLocaleString('pt-BR', {style: 'currency', currency: 'BRL'})
```javascript
var salario = 1900
console.log(salario.toLocaleString('pt-BR', {style: 'currency', currency: 'BRL'}))
// Terminal: R$ 1.900,00
// Navegador: R$ 1,900.00
```
### Math.
> .floor retorna o número passado como parâmetro arrendodado para baixo | o maior inteiro menor ou igual ao número passado
```javascript
console.log(Math.floor(6.95))
// Prints: 6
```

### Array.
>.push muda o array original adicionando o que for enviado de parâmetro e retorna o novo tamanho do array
```javascript
const arr = [1, 2, 3]
arr.push(4)
// arr = [1, 2, 3, 4]
arr.push(5, 6, 7)
// arr = [1, 2, 3, 4, 5, 6, 7]
```
>.pop remove o último elemento do array e o retorna
```javascript
const arr = [1, 2, 3]
lastItem = arr.pop()
// lastItem = 3
```
## Eventos
- mouseenter
- mousemove
- mousedown
- mouseup
- click
- mouseout