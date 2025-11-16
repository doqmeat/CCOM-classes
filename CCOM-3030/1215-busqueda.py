L =[3,4,5,6,7,8,9,10,12,13,14,16,17,18,200,1000]

def BusquedaBinaria(L, item):
    if len(L) == 0:
        return False
    else:
        print("hi")
        puntoMedio = len(L)//2
        if L[puntoMedio] == item:
            return True
        else:
            if item < L[puntoMedio]:
                return BusquedaBinaria(L[:puntoMedio], item)
            else:
                return BusquedaBinaria(L[puntoMedio+1:], item)

print(BusquedaBinaria(L,13))