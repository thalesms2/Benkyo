# String formatadas

nome = 'Thales'
idade = 20
altura = 1.82
maior = idade>18
peso = 62
imc = peso / (altura **2)
print(f'{nome} tem {idade} anos de idade e seu imc é {imc:.2f}')
print('{0} tem {1} anos e seu imc é {2:.2f} {0}{0}{0}{0}{0}'.format(nome, idade, imc))
print('{n} tem {i} anos e seu imc é {im:.2f}'.format(n=nome, i=idade, im=imc))
