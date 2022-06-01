"""
Formatando valores com modificadores
:s - Texto (strings)
:d - Inteiros (int)
:.(NÚMERO)f - Quantidade de casas decimais (float)
:(CARACTERE)(> ou < ou ^)(QUANTIDADE)(TIPO - s, d ou f)

> - Esquerda
< - Direita
^ - Centro
"""

n1 = 10
n2 = 3
div = n1 / n2

print('{:.2f}'.format(div))
print(f'{div:.2f}')

n1 = 1
print(f'{n1:0>10}') # {variavel: 0 caractere a ser adicionado > q é a posição onde será os caracteres 10 numero de casas}
print(f'{n1:0>10.2f}')


nome = 'Thales'
nomeFormatado = '{:@>14}'.format(nome)
print(nome)
print(nomeFormatado)
print(len(nome)) # len informa quantidades de casas da string
print(nome.ljust(20, '#'))
print(nome.lower()) # minusculo
print(nome.upper()) # maisculo
print(nome.title()) # primeiras letras maisculas

"""
Manipulando strings
* String indices
* Fatiamento de strings [inicio:fim:passo]
* Funções built-in len, abs, type, print, etc...
Essas funções podem ser usadas diretamente em casa tipo
"""

# Indices
#       [012345678] positivos
texto = 'Python_s2'
#      -[987654321] negativos
print(texto[2])
novaString = texto[2:6]
print(novaString)
print(texto[:6])
print(texto[7:])
print(texto[-1])
print(texto[:6:2])
print(texto[::3])

for letra in texto:
    print(letra)