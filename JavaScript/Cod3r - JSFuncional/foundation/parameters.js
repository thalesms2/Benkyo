const logParams = (a, b, c) => {
    console.log(a, b, c)
}

logParams(1, 2, 3, 4, 5) 
logParams(1, 2, 3)
logParams(1, 2)
// Não apresenta erro, mas ao tentar exibir C mostra undefined

const defaultParams = (a = 3, b = 2, c = 0) => {
    console.log(a, b, c)
}

defaultParams(1, 2, 3) 
defaultParams(1, 2)
defaultParams(1)
defaultParams()

const logNum = (...nums) => {
    console.log(nums)
}

const logNums = (nums) => {
    for(let n of nums) {
        console.log(n)
    }
}

logNums([1, 2, 3, 4, 5])
logNums([1, 2])
logNums([1, 2, 3])
