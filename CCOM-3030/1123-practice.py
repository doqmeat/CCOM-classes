# Escribir un programa en Python que lea las iniciales del nombre del usuario y las imprima en la pantalla
def usuario():
    nombre = input("entre nombre del usuario: ")
    apellido = input("entre apellido del usuario: ")
    print(nombre[0] + "." + apellido[0] + ".")

# Escribir un programa en Python que solicite el precio de un artículo y la cantidad comprada del mismo y escriba su costo total

def precio():
    price = float(input("precio del articulo: "))
    cantidad = float(input("entre cantidad comprada: "))
    total = price*cantidad
    print(total)

# Escribir un programa en Python que solicite un número al usuario. Si el número es menor que 10, este se imprime, pero si el número es mayor o igual a 10, se debe imprimir el doble del mismo.

def numero(n):
    if n < 10:
        return n
    n2 = n*2
    return n2

# Escribir un programa en Python que solicite al usuario que entre un entero positive n. Su programa debe imprimir todos los enteros del 1 hasta n, incluyendo n

def listaNum(n):
    l = []
    for num in range(1,n+1,1):
        l = l + [num]
    print(l)

# Escribir un programa en Python que solicite al usuario que entre un entero positive n. Su programa debe imprimir la suma de los enteros del 1 hasta n, incluyendo n. Es decir, 1 + 2 + … + n

def suma(n):
    sum = 0
    for num in range(1,n+1,1):
        sum = sum + num
    print(sum)

# Escribir un programa en Python que solicite al usuario que entre un entero positive n. Su programa debe imprimir la suma de los cuadrados de los enteros del 1 hasta n, incluyendo n. Es decir, 1^2 + 2^2 + 3^2 + … + n^2, donde ^ denota la operación elevar al cuadrado

def power(n):
    cuadrado = 0
    for num in range(1,n+1,1):
        cuadrado = cuadrado + (num*num)
    print(cuadrado)

# Escribir un programa que solicite al usuario el radio de un círculo y devuelva su área y su circunferencia

def circulo():
    radio = float(input("entre radio del circulo: "))
    pi = 3.1415
    area = pi*radio*radio
    circun = 2*pi*radio
    print("el area del circulo es " + str(area) + " y la circunferencia del circulo es " + str(circun))

circulo()
        
