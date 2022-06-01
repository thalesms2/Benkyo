import aleatorio as a
import media as m
lista = a.geraListaInteiro(10)
media = m.media(lista)
mediana = m.mediana(lista)
print(lista)
listaOrdenada = sorted(lista)
print(listaOrdenada)
print("A média da minha lista é "+str(media))
print("A mediana da minha lista é "+str(mediana))
print("A moda da minha lista é "+str(moda))