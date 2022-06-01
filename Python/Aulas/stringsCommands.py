"""
Split, Join, Enumerate em Python
split = Dividi uma string # str
join = Juntar uma lista # str
enumerate = Enumerar elementos da lista # iteráveis
"""

string = 'O Brasil é o país do futebol, o Brasil é penta.'
lista = string.split(' ')
print(lista)
lista2 = string.split(',')
print(lista2)

for valor in lista:
    print(f'A palavra {valor} apareceu {lista.count(valor)}x na frase.')

# JOIN transforma uma lista em string

lista3 = ['O', 'Brasil', 'é', 'Penta.']
string2 = ' '.join(lista3)
print(string2)
string3 = ','.join(lista3)
print(string3)
