product = {'nome': 'Caneta', 'preco': 14.99,
           'importada': True, 'estoque': 793}

for chave in product:
    print(chave)

for valor in product.values():
    print(valor)

for chave, valor in product.items():
    print(chave, '=', valor)