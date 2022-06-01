function tratarErroELancar(erro) {
    // throw new Error('há otário')
    // throw 10
    // throw true
    // throw 'mensagem'
    throw { // lança o erro
        nome: erro.name,
        msg: erro.message,
        date: new Date
    }
}

function imprimirNomeGritado(obj){
    try{ // bloco que pode gerar erro
        console.log(obj.name.toUpperCase() + '!!!')
    } catch (e) { // tratar problema
        tratarErroELancar(e)
    } finally { // vai executar mesmo que dê erro
        console.log('Final')
    }
}

const obj = { nome: 'Roberto'}
imprimirNomeGritado(obj)

