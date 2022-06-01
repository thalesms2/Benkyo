# coding: utf-8
estudante = str(input('Nome do estudante '))
nota = []
peso = []
i = True
media = 0
aux = 0
while i:
    nota.append(float(input('Informe a nota da avaliação ')))
    peso.append(int(input('Informe o peso da avaliação ')))
    i = int(input('Possui mais notas? (1:Sim 0:Não) '))
    if len(nota) < 2 and i == 0:
        print('Impossivel sair, notas insuficientes')
        i = True
for i in range(0,len(nota)):
    media += nota[i] * peso[i]
    aux += peso[i]
media = media / aux
if media >= 7:
    print("Estudante ", estudante, " não precisará fazer exames")
else:
    print('Estudante ', estudante ,' precisará fazer exames')
