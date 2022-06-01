#! python
# -*- coding: utf-8 -*-

with open('pessoas.csv') as arquivo
for registro in arquivo:
    print('Nome: {}, Idade: {}'.format(*registro.strip().split(',')))

if arquivo.closed:
    print('Arquivo foi fechado com sucesso')