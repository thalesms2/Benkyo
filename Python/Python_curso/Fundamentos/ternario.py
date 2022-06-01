# Operador ternario if

is_raining = True

print('Roupas estão ' + ('secas.', 'molhadas.')[is_raining])
print('Roupas estão ' + ('molhadas.' if is_raining else 'secas.'))

# Membro
lista = [1, 2, 3, 'Ana', 'Carla']
2 in lista  # True
'Ana' not in lista  # False

# Identidade (verifica valor)
x = 3
y = x
z = 3
x is y  # True
y is z  # True
x is not z  # False
