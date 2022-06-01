a = float(input("Insira o valor de x² "))
b = float(input("Insira o valor de x "))
c = float(input("Insira o valor independente "))
raiz = ((b*b)-4*a*c) ** (1/2)
x1 = (-b + raiz)/2*a
x2 = (-b - raiz)/2*a
print ("X1 "+str(x1))
print ("X2 "+str(x2))