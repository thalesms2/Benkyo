const prod1 = {}
prod1.nome = 'Celular Ultra Mega'
prod1.preco = 4998.90
prod1.ativo = true
prod1['Desconoto Legal'] = 0.40 // evitar atributos com espaço

console.log(prod1)

const prod2 = {
    nome: 'Camisa Polo',
    preco: 79.90,
    ativo: true
}

console.log(prod2)

const prod3 = prod1

console.log(prod3) // guarda o endereço das informações do objeto

