// Usando a notação literal
const obj1 = {}
// Object em JS
const obj2 = new Object
// Função construtoras
function Produto(nome, preco, desc){
    this.nome = nome // atributo publico
    this.getPrecoComDesconto = () => {
        return preço * (1-desc)
    }
}
const p1 = new Produto('Caneta', 7.99, 0.15)
const p2 = new Produto('Notebook', 2998.99, 0.15)
console.log(p1.getPrecoComDesconto(), p2.getPrecoComDesconto())
// Função Factory
function criarFuncionario(nome, salarioBase, faltas){
    return {
        nome,
        salarioBase,
        faltas,
        getSalario(){
            return (salarioBase / 30)*(30-faltas)
        }
    }
}
const f1 = criarFuncionario('João', 7980, 4)
const f2 = criarFuncionario('Maria', 11400, 1)
console.log(f1.getSalario(), f2.getSalario())