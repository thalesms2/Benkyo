def posNeg(x):
    if x < 0:
        print('Numero negativo')
    elif x>0:
        print('Numero positivo')
    else:
        print('Numero eh zero')
def parImpar(x):
    if x%2==0:
        print('Numero eh par')
    else:
        print('Numero eh impar')
def idade(d,m,a,dia,mes,ano):
    idade = ano - a
    if mes<m:
        idade -= 1
    elif dia<d and mes==m:
        idade -= 1
    return idade
d = int(input("Dia nascimento "))
m = int(input("Mes nascimento "))
a = int(input("Ano nascimento "))
dia = int(input("Dia atual "))
mes = int(input("Mes atual "))
ano = int(input("Ano atual "))
print(idade(d,m,a,dia,mes,ano))