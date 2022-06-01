# Desempacotamento de listas

lista = ['Thales', 'Minoru', 'Sato']
n1, n2, n3 = lista
print(n1)
print(n2)
print(n3)

x1, x2, *outra_lista = lista # Gera dois variaveis e o resto da lista joga em outra lista
y1, y2, *another, ultimoLista = lista # Pega a ultimo valor da lista
z1, z2, *_ = lista # Joga fora o resto da lista

print(*lista)
print(*lista, sep='-')