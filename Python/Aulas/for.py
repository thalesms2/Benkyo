v = ['Thales', 'Sato', 'Minoru']

for x in v:
    print(x)
    continue
    print(x)

print('####################')

for x in v:
    print(x)
    print(x)

for x in v:
    if x.lower().startswith('j'):
        break
else:
    print('Não existe uma palavra que começa com J.')