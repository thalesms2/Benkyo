"""
Lista em Python
fatiamento
append, insert, pop, del, clear, extend, +
min, max
range

append = adiciona um valor no final na lista
insert = adiciona um valor em um certo indice
pop = remove o ultimo item
del = deleta itens
max = pega o maior valor da lista
min = pega o menor valor da lista

"""
texto = 'Valor'
lista = [1, 2, 3, 'Diferente da string, suporta varios valores', 'Thales', 'Sato', True]

print(texto[3])
print(lista[3])
print(lista)
print(lista[:3])
print(lista[::2])
print(lista[::-1]) # inverte a lista

l1 = [1, 2, 3]
l2 = [1, 2, 3]
l3 = l1+l2
print(l1)
print(l2)
print(l3)
l1.extend(l2) # extende a lista a mais o valor que foi passado
print(l1)
print(l2)
l1.extend('a')
print(l1)
l2.append('b')
print(l2)
l2.insert(0, 'banana')
print(l2)

l2.pop()
print(l2)

l4 = list(range(1, 10))
print(l4)

print(max(l4))
print(min(l4))

del(l2[3:5])
print(l2)
