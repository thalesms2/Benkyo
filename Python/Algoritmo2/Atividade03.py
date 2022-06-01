def calcPeso(maior, menor, peso):
    if peso > maior:
        maior = peso
    if peso < menor and peso > 0:
        menor = peso
    return maior, menor, peso
def fatorial(num):
    fatorial = 1 
    while num>1:
        fatorial *= num
        num-=1
    return fatorial
peso = int(input('Insira o peso '))
maior = peso
menor = peso
while peso != 0:
    peso = int(input('Insira o peso '))
    maior, menor, peso = calcPeso(maior, menor, peso)
print('O maior peso foi ',maior,' e o menor peso foi ',menor)
print(fatorial(int(input('Insira o numero para fatorar '))))