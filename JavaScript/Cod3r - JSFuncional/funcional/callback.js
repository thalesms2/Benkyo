const exec = (fn, a, b) => fn(a, b)

const somarNoTerminal = (a, b) => console.log(a + b)
const subtrairNoTerminal = (a, b) => console.log(a - b)
const subtrair = (a, b) => a - b

exec(somarNoTerminal, 10, 5)
exec(subtrairNoTerminal, 10, 5)

const r = exec(subtrair, 50, 25)
console.log(r)

const cb = () => console.log('Exec')

setInterval(cb, 1000)