# coding: utf-8
fatorial = int(input('Fatorial ! '))
if fatorial > 1:
    for i in range(1,fatorial):
        fatorial *= i
elif fatorial == 0 or fatorial == 1:
    fatorial = 1
else:
    print('Valor negativo!')   

print('Resultado do fatorial: ' + str(fatorial))