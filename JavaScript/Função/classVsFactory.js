class Pessoa {
    constructor(nome){
        this.nome = nome
    }
    
    falar(){
        console.log(`Meu nome é ${this.nome}`) // this vai dar problema quando executado em outro escopo
    }
}

const p1 = new Pessoa('João')
p1.falar()

const criarPessoa = nome => {
    return {
        falar: () => console.log(`Meu nome é ${nome}`)
    }
}

const p2 = criarPessoa('Jão')
p2.falar()