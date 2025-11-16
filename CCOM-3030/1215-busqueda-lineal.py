L = [0,1,2,3,5,8,13]

def Suma(L):
    S = 0
    for i in range(0,len(L)):
        S = S + L[i]
    return S

def Mayor(L):
    mayor = L[0]
    for x in L:
        if mayor < x:
            mayor = x
    return mayor

def Menor(L):
    Menor = L[0]
    for x in L:
        if Menor > x:
            Menor = x
    return Menor

def Cliente():
    L = [0,1,2,3,5,8,13]
    suma = Suma(L)
    mayor = Mayor(L)
    menor = Menor(L)
    promedio = suma/len(L)
    rango = mayor - menor
    print("El promedio de los elementos de L es: ", str(promedio), " y el rango es ", str(rango))

Cliente()