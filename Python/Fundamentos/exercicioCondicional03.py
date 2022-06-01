ativo = True
novaNota = True
reprovado = False
nota = []
contador = 0
media = 0
while ativo == True:
    nome = input("Informe o nome do aluno ")
    if nome == "sair":
        ativo = False
    else:
        while novaNota == True and contador < 3:
            nota.append(float(input("Informe a nota ")))
            if nota[contador] < 0:
                novaNota = False
            else:
                media += nota[contador]
                contador += 1
        media = media / contador
        aulas = int(input("Informe quantas aulas houve nessa matéria "))
        presenca = int(input("Informe quantas aulas o aluno assistiu "))
        frequencia = float(aulas * 0.75)
        if aulas < frequencia:
            reprovado = True
        if media < 6:
            reprovado = True
        if reprovado == False:
            print("O aluno %s teve a média de %f e está aprovado" % (nome, media))
        else:
            print("O aluno %s teve a média de %f e está reprovado" % (nome, media))