"""
Iterando strings com while em Python
"""
string = 'o rato roeu a roupa do rei de roma.'

c = 0

while c<len(string):
    print(string[c])
    c+=1

"""
For in em Python
Iterando strings com for
Função range(start=0, stop, step=1)
"""
texto = 'Python'
for letra in texto:
    print(letra)

for n, letra in enumerate(texto):
    print(n, letra)

for numero in range(10):
    print(numero)

for x in range(20,10,-1): # (numero que inicia , numero que para, de quantas casas ele vai pular)
    print(x)