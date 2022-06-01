loggedUser = False
if loggedUser:
    msg = 'Usuario logado'
else:
    msg = 'Usuario precisa logar'
print(msg)

msg = 'Usuario logado' if loggedUser else 'Usuario precisa logar'
print(msg)

idade = input('Qual a sua idade? ')
if not idade.isnumeric():
    print('Digite apenas numeros')
else:
    if idade>=18:
        print('Pode acessar')
    else:
        print('Não pode acessar')
    eMaior = (idade>=18)
    msg2 = 'Pode acessar' if eMaior else 'Não pode acessar'
    print(msg2)