contador = 0
valor = 1
contadorImpar = 0
while valor != 0:
    valor = int(input("Insira o valor "))
    fatorialAux = valor
    fatorial = valor
    while fatorialAux > 1:
        fatorialAux = fatorialAux - 1
        fatorial = fatorial * fatorialAux
    print("Fatorial %i" % (fatorial))
    fibonacci = 0
    fib1 = 0
    fib2 = 1
    while fibonacci < valor:
        fibonacci = fib1 + fib2
        fib1 = fib2
        fib2 = fibonacci
    if valor == fibonacci:
        print("Pertence fibonacci")
    else:
        print("Não pertence fibonacci")
    contador += 1
    impar = valor % 2
    if impar == 1:
        contadorImpar += 1
percentualImpar = contadorImpar*100/contador
print("Quantidade: %i" % (contador))
print("Porcentagem de impares: %i" % (percentualImpar))
