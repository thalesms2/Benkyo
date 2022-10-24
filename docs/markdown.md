---
sidebar_position: 1
---
# Markdown
## Títulos
```markdown
# Título <h1>
## Título <h2>
### Título <h3>
#### Título <h4>
##### Título <h5>
###### Título <h6>
```
## Negrito
```markdown
**Tá em negrito**
__Também tá em negrito__
```
## Itálico
```markdown
*Tá em itálico*
_Também tá em itálico_
```

## Links
> [link](#)
```markdown
[Link](url)
```

## Listas
### Não ordenada
* Item 1
* Item 2
    * Item 3
```markdown
* Item 1
* Item 2
    * Item 3
```

### Ordenada
1. Item 1
2. Item 2
    3. Item 3
```markdown
1. Item 1
2. Item 2
    3. Item 3
```

## Imagens
```markdown
![Alt ou título da imagem](URL da imagem)
```

## Citação (Quote)
> Isso aqui
```markdown
> Isso aqui
```

## Código
### Código em linha
isso `aqui`
```markdown
isso `aqui`
```
### Código em bloco
só colocar **```** ou **~~~** envolvendo o bloco de código e inserir o nome da linguagem na abertura do bloco para adicionar sintaxe

## Tabela
Exemplo   | Valor do exemplo
--------- | ------
Exemplo 1 | R$ 10
Exemplo 2 | R$ 8
```markdown
Exemplo   | Valor do exemplo
--------- | ------
Exemplo 1 | R$ 10
Exemplo 2 | R$ 8
Exemplo 3 | R$ 7
Exemplo 4 | R$ 8
```
> Para especificar o tipo de alinhamento que deseja ter nas tabelas, utilize : ao lado do campo horizontal de hífens ---, na segunda linha da sua tabela. Veja abaixo:
- **Alinhado a esquerda:** usar `:` no lado esquerdo (alinhamento padrão);
- **Alinhado a direita:** usar `:` no lado direito;
- **Centralizado:** usar `:` dos dois lados.