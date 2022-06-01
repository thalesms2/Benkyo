const piloto = ['Vertel', 'Afonso', 'Raikkonen', 'Massa']
piloto.pop()
console.log(piloto)

piloto.push('Verstappen')
console.log(piloto)

piloto.shift()
console.log(piloto)

piloto.unshift('Hamilton')
console.log(piloto)

piloto.splice(2, 0, 'Bottas', 'Massa')
console.log(piloto)

piloto.splice(3, 1)
console.log(piloto)

const algunsPilotos = piloto.slice(2) // cria um novo array apartir da localização informada
console.log(algunsPilotos)

const algunsPilotos2 = piloto.slice(1, 4)
console.log(algunsPilotos2)