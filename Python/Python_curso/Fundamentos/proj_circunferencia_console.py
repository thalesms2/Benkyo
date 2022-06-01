#! python
# -*- coding: utf-8 -*-

# pi * raio²
from math import pi
import sys
import errno

ERRO = '\033[91m'
NORMAL = '\033[0m'


def circulo(raio):
    return pi * pow(float(raio), 2)


def help():
    print("É necessário informar o raio do círculo.")
    print(f"Sintaxe: {sys.argv[0]} <raio>")


if __name__ == '__main__':
    if len(sys.argv) < 2:
        help()
        sys.exit(errno.EPERM)
    elif not sys.argv[1].isnumeric():
        help()
        print(ERRO, 'O raio deve ser um valor númerico', NORMAL)
        sys.exit(errno.EINVAL)
    else:
        raio = sys.argv[1]
        area = circulo(raio)
        print(f'Resultado: {area}')
