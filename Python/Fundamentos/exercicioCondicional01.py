valor1 = int(input("Insira o primeiro valor "))
valor2 = int(input("Insira o segundo valor "))
if valor1 > valor2:
    maior = valor1
    menor = valor2
else:
    maior = valor2
    menor = valor1
resto = maior % menor
if resto != 0:
    print("Não são multiplos")
else:
    print("São multiplos")