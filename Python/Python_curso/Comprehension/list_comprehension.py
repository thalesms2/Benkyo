# [ expressão for item in list if condicional ]
dobros = [i * 2 for i in range(10)]
print(dobros)

# Gerador

generator = (i** 2 for i in range(10) if i % 2 ==0)

for numero in generator:
    print(numero)