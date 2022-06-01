nome = input ('Digite seu nome ')
if nome == 'Batata':
    print('Ola Batata')
else:
    print('Seu nome é', nome)
x = True
if x is True:
    print('True')
elif x is not False:
    print('Still true')
else:
    print('False')
x = 0
while x < 10:
    print(x)
    x+=1

for i in range(10):
    print(i)

#percorrer vetores
words = ['cat', 'window', 'defenestrate']
for w in words:
    print(w)
