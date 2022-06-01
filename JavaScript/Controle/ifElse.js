const imprimirResultado = function(nota) {
    if(nota >= 7){
        console.log('Aprovado')
    }else{
        console.log('Reprovado')
    }
}

imprimirResultado(7)
imprimirResultado(4)
imprimirResultado('Epa!') // cuidado com os tipos

Number.prototype.entre = function(inicio, fim){
    return this >= inicio && this <= fim
}

const imprimir = function(nota) {
    if (nota.entre(9, 10)) {
        console.log('Quadro de honra')
    }else if(nota.entre(7, 8.99)){
        console.log('Aprovado')
    }else if(nota.entre(4, 6.99)){
        console.log('Recuperação')
    }else if (nota.entre(0, 3.99)){
        console.log('Reprovado')
    }else{
        console.log('Nota invalida')
    }
}

imprimir(9)
imprimir(7)
imprimir(3)
imprimir(6)
imprimir(-1)
