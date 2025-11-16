# suma de gauss
def Suma(N):
    suma = 0
    n = 0
    while n <= N:
        suma = suma + n
        n = n + 1
    return suma

X = Suma(3)
print(X)