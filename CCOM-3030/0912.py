# x = 1
# y = 4
# z = 7
# typecasting -> int() number
# avg = (x + y + z)/3

# Un algoritmo que pida como entrada: tres datos x, y, z 
# salida: el promedio (average)(suma de todos los nums dividido entre la cantidad de num que hay) de estos tres valores

def promedio():
    x = int(input("entre valor de x "))
    y = int(input("entre valor de y "))
    z = int(input("entre valor de z "))
    Avg = (x + y + z)/3
    print(Avg)

# mismo codigo pero excribiendo los numeros como parametros.

def PromedioPar(x,y,z):
    Avg = (x + y + z)/3
    return(Avg)
print(PromedioPar(7,10,1))




