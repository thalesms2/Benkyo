d1 = {'Chave':'Valor', 'Chave2':'Valor2'}
d2 = { # Suporta todos os valores imutaveis
    'str':'valor'
    123:'outro valor'
    (1,2,3,4):'tupla'
}
print(d1)

d1['naoexist'] = 'Agora existe'
print(d1)
print(d1.get('nomedachave'))

#procurando valores
print('str' in d1)
print('str' in d1.keys())
print('valor' in d1.values())

print(len(d1)) # informa o numero de pares