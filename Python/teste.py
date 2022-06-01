def teste():
    vetor = []
    vetor1 = []
    vetor2 = [] 
    vetor.append(2)
    vetor1.append('str\n')
    vetor2.append('teste')
    vetor2.append(2)
    return vetor1, vetor2, vetor

vetor1, vetor3, vetor2 = teste()
print(vetor1)
print(vetor2)
print(vetor3)
for i in vetor3:
    i = 2
print(vetor2)