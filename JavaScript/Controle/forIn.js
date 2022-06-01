const notas = [6.7, 7.4, 9.8, 8.1, 7.7]

for (let i in notas) {
    console.log(i, notas[i])
}

const pessoa = {
    nome: 'Ana',
    sobrenome: 'Silva',
    idade: 29,
    peso: 64
}

for (let atributo in pessoa){
    console.log(`${atributo} = ${pessoa[atributo]}`)
}

const nums = [1, 2, 3,4, 5, 6, 7, 8, 9, 10]

for(let x in nums){
    if(x == 5) {
        break // age no bloco mais perto dele, no caso o for
    }
    console.log(`${x} = ${nums[x]}`)
}
for(let y in nums){
    if (y == 5){
        continue // interrompe e faz com que continue sem que execute o indice 5 no caso
    }
    console.log(`${y} = ${nums[y]}`)
}

externo: 
for (a in nums){
    for(b in nums){
        if (a == 2 && b == 3) {
            break externo
        }
        console.log(`Par = ${a},${b}`)
    }
}