---
sidebar_position: 2
---

# How to commit
## Decrição
Mensagem deve começar com um prefixo, um substantivo, exemplo: `feat`, `fix`, pode vir seguido de `!` = `BREAKING CHANGE` e obrigatóriamente terminar com dois-pontos e um espaço.
```
refactor!: remove suporte para Node 6
```
## Tipos
### Feat
Para adicioonar um novo recurso.
### Fix
Quando o commit representa a correção de um problema
### Docs
Alteração na documentação
## Escopo 
Após um tipo, um escopo deve consistir em um substantivo que descreve uma seção da base de código entre parênteses
```
fix(parser):
```
## Descrição
Após tipo/escopo deve existir uma descrição que resume as alterações de código.
```
fix(parser): problema na interpretação do array quando uma string tem vários espaços
```
## Corpo da mensagem
Pode ser fornecido após a descrição curta, fornecendo informações contextuais adicionais sobre as alterações no código. Deve começar depois de uma linha em branco após a descrição. Tamanho livre, parágrafos separados por uma nova linha.
## Rodapé
Uma linha em branco após o corpo. Cada rodapé deve consistir em um token de palavra, seguido por um separador `:<espaço>` ou `<espaço>#`, seguido por um valor de uma string.
Deve usar `-` ao invez de espaços em branco. `Por-exemplo`, para diferenciar do corpo, com exceção de `BREAK CHANGE`
## BREAKING CHANGE
Devem ser indicadas após o tipo/escopo de uma mensagem de commit, ou como uma entrada no rodapé.
Se incluída como um rodapé, uma BREAKING CHANGE deve consistir no texto em maiúsculas BREAKING CHANGE, seguido por dois pontos, espaço e descrição, por exemplo, `BREAKING CHANGE: as variáveis de ambiente agora têm precedência sobre os arquivos de configuração.`
Se incluído no prefixo de tipo/escopo, as BREAKING CHANGES devem ser indicadas por um `!` imediatamente antes de `:`. Se o símbolo `!` for usado, BREAKING CHANGE: pode ser omitido da seção de rodapé, e a descrição da mensagem de commit deve ser usada para descrever a BREAKING CHANGE.
## Reversão
Ao reverter vários commits é utilizado o tipo `revert` exemplo:
```
revert: nunca mais falaremos do incidente do miojo

Refs: 676104e, a215868
```