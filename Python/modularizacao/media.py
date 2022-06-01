# media, mediana, moda
""" 
Jeito fácil
from statistics import *
media = mean(lista)
mediana = median(lista)
moda = mode(lista)
"""
def media(lista):
    media = sum(lista)/float(len(lista))
    return media
def mediana (lista):
    listaOrdenada = sorted(lista)
    t = len(listaOrdenada)
    if t%2==0:
        mediana = (listaOrdenada[int(t/2)]+listaOrdenada[int((t/2)-1)])/2
    elif t%2==1:
        mediana = listaOrdenada[int(t/2)]
    return mediana
def moda (lista):
    #moda = mode(lista)
    lista_dic = {}
    for l in lista:
        if l not in lista_dic:
            lista_dic[l] = 1
        else:
            lista_dlc[l] += 1
    maiorRepeticao = max(lista_dic.values())
    for i in lista_dic:
        if lista_dic[i] == maiorRepeticao:
            moda = i