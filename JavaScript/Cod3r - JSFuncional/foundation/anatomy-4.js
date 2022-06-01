// Anonymous function
// IIFE - Immediately Invoked Function Expression

(function (a, b, c) {
    console.log(`Result: ${a + b + c}`)
})(1, 2, 3);

(function () {
    let x = 3
    console.log(`Result: ${x}`)
})();

(() => {
    console.log("Arrow #1")
})();