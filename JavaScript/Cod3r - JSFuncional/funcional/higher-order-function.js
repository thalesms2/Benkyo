/*
 * Functions that operate on other functions,
 * either by taking them as arguments or by
 * returning them, are called higher-order functions.
 */

function run(fn) {
    fn()
}

function sayHello() {
    console.log('Hello!!')
}

run(sayHello)

run(() => {
    console.log('run!!!')
})

// Returning a function or CURRING

function finalPrice(tax) {
    return (price) => price * (1 + tax)
}

console.log(finalPrice(0.0875)(25.1))
console.log(finalPrice(0.0875)(21.7))
console.log(finalPrice(0.0875)(107.9))

const nycFinalPrice = finalPrice(0.0875)

console.log(nycFinalPrice(25.1))
console.log(nycFinalPrice(21.7))
console.log(nycFinalPrice(107.9))