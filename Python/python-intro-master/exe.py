x = [
    [0,4,2],
    [2,4,2],
    [3,0,5]
    ]
print(x)
cont = [0] * 6
for lin in x:
    for val in lin:
        cont[val] += 1
print(cont)
