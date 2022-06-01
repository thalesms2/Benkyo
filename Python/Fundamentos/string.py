variavelContendoUmaString = "hahá"
print("Isso é uma string " + variavelContendoUmaString)
tamanho = len(variavelContendoUmaString)
print(variavelContendoUmaString[0:2])
a = "Thales"
b = "Sato"
soma = a + " " + b + "\n"
print(soma)
print(soma.lower())
print(soma.upper())
maiusculo = soma.upper()
print(maiusculo)
print(soma.strip()) # retira o \n caracteres especiais
minha_string = "O rato roeu a roupa do rei de Roma"
minha_lista = minha_string.split()
print(minha_lista)
minha_lista2 = minha_string.split("r")
print(minha_lista2)
busca = minha_string.find("rei") # indice da posição
print(busca)
print(minha_string[busca:])
minha_string = minha_string.replace("rei", "rainha")
print(minha_string)