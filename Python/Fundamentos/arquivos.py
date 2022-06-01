"""
r | Somente leitura
w | Escrita(caso o arquivo já exista, ele será apagado e um novo arquivo vazio será criado)
a | leitura e escrita (adiciona o novo conteúdo ao fim do arquivo)
r+ | leitura e escrita
w+ | escrita (o modo w+ assim como o w, também apaga o conteúdo anterior do arquivo)
a+ | leitura e escrita (abre o arquivo para atualização)
"""
arquivo = open("arquivo.txt")
print(arquivo)
linhas = arquivo.readlines() # coloca o meu arquivo e coloca cada linha em uma posição de uma lista
textoCompleto = arquivo.read()
print(textoCompleto)
newArc = open("arquivo2.txt", "w") # metodo " "
newArc.write("Esse é o meu arquivo")
newArc.close()