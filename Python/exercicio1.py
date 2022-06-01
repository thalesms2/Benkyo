#1
print('Hello World')
#2
num = int(input('Informe um numero '))
print(f'O numero informado foi {num}')
#3
num1 = int(input('Informe o primeiro numero '))
num2 = int(input('Informe o segundo numero '))
print(f'A soma dos dois numeros é {num1+num2}')
#4
media = 0
for x in range(0,4):
    media += float(input("Informe sua nota "))
media = media/4
print(f'Sua média foi de {media}')