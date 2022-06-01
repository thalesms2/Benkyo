const pessoa = {
    saudacao: 'Bom dia!',
    falar(){
        console.log(this.saudacao)
    }
}

pessoa.falar()
const falar = pessoa.falar
// falar() conflito pois está dentro de um objeto

const falarDePessoa = pessoa.falar.bind(pessoa)
falarDePessoa()