function soBoaNoticia(nota){
    if(nota >= 7){
        console.log('Aluno foi aprovado com a nota ' + nota)
    }
}

soBoaNoticia(8)
soBoaNoticia(2)

function seForVerdadeEuFalo(valor) {
    if(valor){ // se for vdd ele vai executar
        console.log('É verdade.... ' + valor)
    }
}

seForVerdadeEuFalo()
seForVerdadeEuFalo(null)
seForVerdadeEuFalo(undefined)
seForVerdadeEuFalo(NaN)
seForVerdadeEuFalo('')
seForVerdadeEuFalo(0)
seForVerdadeEuFalo(-1)
seForVerdadeEuFalo(' ')
seForVerdadeEuFalo('?')
seForVerdadeEuFalo([])
seForVerdadeEuFalo([1, 2])
seForVerdadeEuFalo({})

function teste1(num){
    if(num > 7) // caso não tiver chaves ele associa apenas a primeira linha ao bloco if
        console.log(num)
        
    console.log('Final')
}

teste1(6)
teste1(8)

function teste2(num){
    if(num > 7)
        ; // ponto virgula é a linha associada ao if
    {
        console.log(num)
    }
}

teste2(6)
teste2(8)