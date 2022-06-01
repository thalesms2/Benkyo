# coding: utf-8
class Escritor:
    def __init__(self, nome):
        self.nome = nome
        self.ferramenta = None

    def metodo_associativo(self, ferramenta):
        self.ferramenta = ferramenta

class Caneta:
    def __init__(self, nome):
        self.nome = nome
    
    def escrever(self):
        print('Caneta está escrevendo...')

class MaquinaDeEscrever:
    def escrever(self):
        print('Máquina está escrevendo...')      
    
escritor = Escritor('João')
caneta = Caneta('Bic')
maquina = MaquinaDeEscrever()

escritor.metodo_associativo(caneta)
escritor.ferramenta.escrever()
escritor.metodo_associativo(maquina)
escritor.ferramenta.escrever()