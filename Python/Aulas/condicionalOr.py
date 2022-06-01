nome = input('Qual o seu nome? ')
if nome:
    print(nome)
else:
    print('Você não digitou nada')

print(nome or 'Você não digitou nada')
print(nome or None or False or 0 or 'Você não digitou nada' or 'Outra coisa') # Executa a primeira condição verdadeira