#! python

# Parametro opcional, pode ou não existir, caso não seja passado um argumento ele toma o valor "padrão" informado na função
def tag_bloco(conteudo, *args, classe='success', inline=False): 
    tag = 'span' if inline else 'div'
    html = conteudo if not callable(conteudo) else conteudo(*args)
    return f'<{tag} class="{classe}">{html}</{tag}>'


def tag_lista(*itens):
    lista = ''.join((f'<li>{item}</li>' for item in itens))
    return f'<ul>{lista}</ul>'


if __name__ == '__main__':
    # Testes (assertions)
    # assert tag_bloco('Incluído com sucesso!') == \
    #    '<div class="success">Incluído com sucesso!</div>'
    # assert tag_bloco('Impossivel excluir!', 'error') == \
    #    '<div class="error">Impossivel excluir!</div>'

    print(tag_bloco(tag_lista('Item 1', 'Item 2'), classe='info'))

    print(tag_bloco(tag_lista, 'Sábado', 'Domingo', 
                    classe='info', inline=True))