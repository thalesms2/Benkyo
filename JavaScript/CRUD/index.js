// Importação do Express
const express = require('express'); 
const server = express();
server.use(express.json()); // faz com que o express entenda JSON
const geeks = [];

// Cria rota /teste com o método GET
server.get('/geeks', (req, res) => {
    return res.json(geeks);
});

server.get('/geeks/:index', checkUserInArray, (req, res) => {
    return res.json(req.user);
});

server.post('/geeks', (req, res) => {
    const { name } = req.body; // Buscando nome informado no corpo da requisição
    geeks.push(name);
    return res.json(geeks);
});

server.put('/geeks/:index', (req, res) => {
    const { index } = req.params; // recupera o index com os dados
    const { name } = req.body;
    geeks[index] = name; // sobrepõe o index obtido na rota de acordo com o novo valor
    return res.json(geeks);
});

server.delete('/geeks/:index', (req, res) => {
    const { index } = req.params; // recupera index com os dados
    geeks.splice(index, 1); // percorre o vetor até o index selecionado e deleta uma posição no array
    return res.send();
});


server.listen(3000)