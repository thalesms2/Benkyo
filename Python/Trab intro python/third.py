# coding: utf-8
lista = []
i = True
while i:
    lista.append(int(input('Digite o valor ')))
    if not lista[len(lista)-1] and len(lista) < 3: 
        print('Não foi informado 2 ou mais valores')
        lista.pop(len(lista)-1)
    elif not lista[len(lista)-1]:
        i = False
        lista.pop(len(lista)-1)
        print('Zero informado')
for i in lista:
    print(pow(i,2))