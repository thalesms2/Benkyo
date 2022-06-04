Buscando e selecionando elementos
    getElementById (element)
    getElementsByClassName (HTMLCollection)
    getElementsByTagName (HTMLCollection)
    querySelector (element)
    querySelectorAll (NodeList) || usar no forEach
    **getElementById é o mais rápido**
	
Manipulando conteúdo
    textContent || Retorna o conteudo textual
    innerText   || Adiciona texto
    innerHTML   || Adiciona ou retorna HTML
    value       || Valor de qualquer coisa inclusive inputs
	
Alterando estilos
    style.{property} || Altera o CSS usando a propriedade em camel case
    classList
	    add()
	    remove()
	    toggle()

Navegando pelos elementos
    parentNode (tá no nome imbecil)
    parentElement
    childNodes (pega NodeList) || pega espaços no HTML
    children (HTMLCollection)
    childElementCount
    firstChild
    firstElementChild
    lastChild / .lastElementChild
    remove()
	
Siblings
    nextSibling
    nextElementSibling
    previousSibling
    previousElementsSibling
	
Criando Elementos
    createElement()
	
Trabalhando com propriedades dos elementos
    setAtribute()
    getAtribute()
    removeAtribute()
	
Inserindo elementos no HTML
    insertBefore()
    insertAfter()
    append() / .appendChild() || Depois de tudo
    prepend() || Antes de tudo
	
Eventos
    addEventListener("event", function(event)) || ouve um evento e executa a função passada para ele
		Load  || São todos eventos possiveis para passar para o Listener
		Click
		Scroll
		Keydown
		Change
		Submit
	Event
		Target
			Id
			className
		Type
		clientX / clientY (relative to document)
		offsetX / offsetY (relative to element)
		preventDefault()
