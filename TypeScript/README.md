# TypeScript

## Instalar globalmente

### Windows
```bash
npm i -g typescript
```

### Linux
```bash
sudo npm i -g typescript
```

## Iniciando um projeto
> Inicializar a pasta para ter o arquivo de configuração do typescript
```bash
tsc --init
```

## Compilando

### Simples
TypeScript compila para um arquivo em JavaScript
Para compilar o código e logo após executá-lo 
```bash
tsc nomedoarquivo.ts
node nomedoarquivo.js
```
### Utilizando Code Runner (VSCode Extension)
Para utilizar o code runner no vscode para rodar o código é necessário instalar o ts-node `ctrl + alt + N` para rodar
```bash
npm i -g ts-node
```

### Para adicionar em um site
Criar package.json para salvar dependencias
```bash
npm init -y
```

`Opcional` instalando uma ferramenta para criar um servidor de desenvolvimento com hot reload.
```bash
npm i -s live-server
```
Criando um Script para iniciar o servidor mais facilmente, no package.json adicione o seguinte parametro:
```json
{
    "scripts": {
        "start": "live-server"
    },
}
```
O comando `npm start` inicia o servidor de desenvolvimento graças a modificação no arquivo `.json`

## Tipos

- string
- number
- boolean


Os tipos em TypeScript são inferidos, quando a variavel iniciado com um valor o compilador atribui o tipo a variavel
