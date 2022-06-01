valor = int(input("Insira o valor do saque "))
notaDeCinquenta = valor / 50
notaDeDez = valor % 50 / 10
notaDeCinco = valor % 50 % 10 / 5
resto = valor % 50 % 10 % 5
if resto !=0:
    print("Valor indisponivel")
else:
    print("Notas de cinquenta %i, notas de dez %i, notas de cinco %i" % (notaDeCinquenta, notaDeDez, notaDeCinco))