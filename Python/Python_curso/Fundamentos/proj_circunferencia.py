#! python
# -*- coding: utf-8 -*-

# pi * raio²
from math import pi


def circulo(raio):
    return pi * pow(raio, 2)
    # circunferencia = pi * raio ** 2


if __name__ == '__main__':
    raio = float(input('Insira o raio: '))
    area = circulo(raio)
    print(f'Resultado: {area}')
