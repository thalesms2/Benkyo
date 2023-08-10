# Prisma ORM

## Instalação

- Necessário instalação do mysql

```bash
scoop bucket add pscale https://github.com/planetscale/scoop-bucket.git
scoop install pscale
```

Para atualizar para a última versão

```bash
scoop update pscale
```

## Criação de banco de dados

Autenticação caso necessário

```bash
pscale auth login
```

Criação do banco de dados

```bash
pscale db create db-name
```

Criação de branch

```bash
pscale branch create db-name branch-name
```

## Conectar o banco de dados

```bash
pscale connect db-name branch-name --port 3309
```

## Promover uma branch à produção

```bash
pscale branch promote db-name branch-name
```

> branch-name normalmente será a main que irá para produção

## Setup do projeto

```bash
npm install prisma -D
npm install @prisma/client

yarn add prisma -D
yarn add @prisma/client
```

Iniciando o prisma no projeto criado

```bash
npx prisma init
```

> Isso cria uma pasta no projeto chamada `Prisma` e dentro dela terá o arquivo `schema.prisma`
No arquivo `schema.prisma` faça

```prisma
generator client {
  provider = "prisma-client-js"
  previewFeatures = ["referentialIntegrity"]
}

datasource db {
  provider = "mysql"
  url      = env("DATABASE_URL")
  shadowDatabaseUrl = env("SHADOW_DATABASE_URL")
  referentialIntegrity = "prisma"
}

model modelName {
  propriedade Type
}
```

No arquivo `.env` faça

```js
DATABASE_URL="mysql://root@127.0.0.1:3309/nameApp"
SHADOW_DATABASE_URL="mysql://root@127.0.0.1:3310/nameApp"
```

Carregar o schema feito no banco de dados e criar a tabela

```bash
npx prisma db push
```

Após fazer isso para mandar para a produção é necessário ir no branch configurado que recebeu o push e realizar um commit na branch main

## Prisma Studio

> Espelho do banco de dados

```bash
npx prisma studio
```

## Deploy na Vercel

Adicionar a variável de ambiente com a informação adquirida no botão `connect` do projeto no PlanetScale na opção `Connect with` `Prisma`
Após isso no package.json do projeto

```json
"scripts": {
  // dev
  // build
  // start
  // lint
  "postinstall": "prisma generate"
}
```

> Isso vai fazer que o branch de produção gere o schema do projeto assim que ele terminar a instalação do deploy
