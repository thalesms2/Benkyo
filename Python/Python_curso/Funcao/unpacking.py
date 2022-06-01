def soma(*num):
    soma = 0
    for n in num:
        soma += n
    return soma


def soma_3(a, b, c):
    return a + b + c


if __name__ == '__main__':
    # Packing
    print(soma(2,3,2,2,2,2,2))
    print(soma(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1))


    # Unpacking
    tupla_nums = (1, 1, 1)
    print(soma_3(*tupla_nums))

