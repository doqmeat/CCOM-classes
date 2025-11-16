def Fact(N):
    # inicializamos la M con el numero 1 para que no cambie la multiplicacion
    M = 1
    if ((N == 0) or (N == 1)):
        print("1")
    else:
        # dado el rango desde 1 hasta N
        r = range(1,N,1)
        # se multiplica M por cada numero en la lista del rango indicado
        for num in r:
            M = M * num
        # se crea una nueva variable para multiplicar el resultado de M por N
        NM = M * N
        print(NM)

Fact(7)