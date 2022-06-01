# conding: utf-8
num = int(input('Informe o numero de estudantes '))
while num < 4:
    num = int(input('Numero de estudantes inválido, informe novamente '))
for i in range(num):
    nota = float(input('Informe a nota '))
    while nota > 100 or nota < 0:
        nota = float(input('Nota inválida, informe novamente '))
    if i == 0:
        maior = nota
        menor = nota
    else:
        if nota > maior:
            maior = nota
        if nota < menor:
            menor = nota
print('A maior nota foi ' + str(maior) + ' e a menor nota foi ' + str(menor))