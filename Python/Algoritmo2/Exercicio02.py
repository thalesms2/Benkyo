def primos(inicial, limite):
    primo = []
    while limite>0:
        contador=0
        for i in range(1, inicial):
            if inicial%i==0:
                contador+=1

        if contador==2:
            primo.append(inicial)
            limite-=1
        inicial+=1
    for i in primo:
        print(i)

primos(100,10)
