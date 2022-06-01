# coding: utf-8
def menor(num1, num2, num3):
    if num1<num2:
        if num1<num3:
            return num1
        else:
            return num3
    elif num2<num3:
        return num2
    else:
        return num3

def perfeito(num):
    soma = 0
    for i in range(1, num-1):
        if num%i==0:
            soma += i
    if soma==num:
        numPerfeito = True
    else:
        numPerfeito = False
    return numPerfeito

def castigo(num):
    for i in range(0, num):
        print('Não vou colar na Prova')

def quarto(num):
    soma = 0 
    for i in range(0, num):
        soma += num/i
    return soma

#for i in range(0, 4):
#   print(quarto(i))

def pesoIdeal(nome, altura, genero):
    peso = 0
    if genero == 'F':
        peso = 62,1 * altura - 44,7
    elif genero == 'M':
        peso = 72,7 * altura - 58
    else:
        print('Erro')
    return peso
nome = str(input('Informe o nome da pessoa '))
altura = float(input('Informe a altura '))
genero = str(input('Informe o genero F or M '))

print(pesoIdeal(nome, altura, genero))