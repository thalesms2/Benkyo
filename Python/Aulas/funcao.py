def saudacao(msg='Ola', nome='usuário'):
    nome = nome.replace('e', '3')
    msg = msg.replace('e', '3')
    print(msg, nome)

saudacao(nome ='Zezinho', msg='Hi')
saudacao('Oi', 'Thales')

def fizzBuzz(num):
    if num%5==0 and num%3==0:
        return 'FizzBuzz'
    elif num%5==0:
        return 'Buzz'
    elif num%3==0:
        return 'Fizz'
    else:
        return num
print(fizzBuzz(15))



def func(*args, **kwargs): # *variavel é uma tupla, que não pode ser alterada KWARGS é parametros com palavras chaves
    args = list(args) # transforma a tupla em lista para ser alterada
    print(args)
    print(args[0])
    print([-1])
    print(len(args))
    print(kwargs['nome'])
    nome = kwargs.get('nome')

lista = [1,2,3,4,5,6,7]
lista2 = [10, 20, 30, 40]
func(lista, 10, 20, 30)
func(*lista, 10, 20, 30) # faz com que cada indice fique separado em cada indice da tupla

func(*lista, *lista2, nome='Thales', sobrenome='Sato')