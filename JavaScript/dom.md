# Manipualando DOM
## Buscando e selecionando elementos
### getElementById
> retorna um element **é o mais rápido**
```javascript
const id = document.getElementById('id')
```
### getElementsByClassName
> retorna um HTMLCollection
```javascript
const className = document.getElementsByClassName('className')
```
### getElementsByTagName
> retorna um HTMLCollection
```javascript
const tag = document.getElementsByTagName('tag')
```
### querySelector
> retorna um element
```javascript
const tag = document.querySelector('tag')
const id = document.querySelector('#id')
const className = document.querySelector('.className')
```
### querySelectorAll
> retorna um NodeList, é usado no forEach
```javascript
const tag = document.querySelectorAll('tag')
const id = document.querySelectorAll('#id')
const className = document.querySelectorAll('.className')
```
## Manipulando conteúdo
### textContent
> retorna o conteudo textual
```javascript
const text = document.querySelector('tag').textContent
```
### innerText
> adiciona texto
```javascript
document.getElementById('id').innerText = 'Text'
```
### innerHTML
> adiciona ou retorna HTML
```javascript
document.getElementById('id').innerHTML = '<tag>Text</tag>'
```
### value
> valor de qualquer coisa inclusive inputs
```javascript
const value = document.getElementById('id').value
```
	
Alterando estilos
### style.{property} || Altera o CSS usando a propriedade em camel case
```javascript

```
### classList
	    add()
	    remove()
	    toggle()

Navegando pelos elementos
### parentNode (tá no nome imbecil)
### parentElement
### childNodes (pega NodeList) || pega espaços no HTML
### children (HTMLCollection)
### childElementCount
### firstChild
### firstElementChild
### lastChild / .lastElementChild
### remove()
	
Siblings
    nextSibling
    nextElementSibling
    previousSibling
    previousElementsSibling
	
Criando Elementos
### createElement()
	
Trabalhando com propriedades dos elementos
### setAtribute()
### getAtribute()
### removeAtribute()
	
Inserindo elementos no HTML
### insertBefore()
### insertAfter()
### append() / .appendChild() || Depois de tudo
### prepend() || Antes de tudo
	
Eventos
### addEventListener("event", function(event)) || ouve um evento e executa a função passada para ele
		Load  || São todos eventos possiveis para passar para o Listener
		Click
		Scroll
		Keydown
		Change
		Submit
### Event
		Target
			Id
			className
		Type
		clientX / clientY (relative to document)
		offsetX / offsetY (relative to element)
		preventDefault()
