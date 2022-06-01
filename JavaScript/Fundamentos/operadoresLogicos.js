function compras(trabalho1, trabalho2){
    const comprarSorvete = trabalho1 || trabalho2
    const comprarTv50 = trabalho1 && trabalho2
    // const comprarTv30 = !!(trabalho1 ^ trabalho2) //bit a bit
    const comprarTv30 = trabalho1 != trabalho2
    const manterSaudavel = !comprarSorvete

    return { comprarSorvete, comprarTv30, comprarTv50, manterSaudavel }
}

console.log(compras(true, true))
console.log(compras(true, false))
console.log(compras(false, true))
console.log(compras(false, false))