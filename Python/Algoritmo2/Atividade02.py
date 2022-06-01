def potencia(base, expoente):
    resultado = 1
    while expoente>0:
        resultado *= base
        expoente -= 1
    return resultado

def tabuada(x):
    for i in range(1, 11):
        print(x, 'X', i, "=", x*i)

tabuada(int(input("Informe o numero para exibir a tabuada ")))
print(potencia(int(input("Base ")), int(input("Expoente "))))
