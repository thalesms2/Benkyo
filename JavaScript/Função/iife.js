// IIFE -> Immediately Invoked Function Expression  padrão usado para escapar do escopo do global
// faz com que assim que leia a função ela seja executada

(function(){
    console.log('Será executado na hora')
    console.log('Foge do escopo mais abrangente!')
})()