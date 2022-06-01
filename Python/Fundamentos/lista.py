lista = ["abacaxi", "melancia", "abacate"]
lista2 = [1,2,3,4,5]
lista3 = ["abacaxi",2,9.8,True]

print(lista[2])
for i in lista:
    print(i)
tamanho = len(lista)
print(tamanho)
lista.append("limão") # incluir informação

if 7 in lista2:
    print("7 esta na lista")
else:
    print("Não está na lista")

del lista3[2:]
print(lista3)
del lista2
lista4 = []

lista4.append(57)
print(lista4)