# Un algoritmo que pida como entrada el radio r de un círculo. Su salida es tanto el área como la circunferencia del círculo de radio r
# input: el radio de un circulo. radio: 
# output: el area y la circunferencia del circulo de radio r

import math

def radioCir():
    r = int(input("entre valor del radio del circulo "))
    a = math.pi*r**2
    c = 2*math.pi*r
    aText = "el area del circulo es " + str(a)
    cText = "la circunferencia del circulo es " + str(c)
    print(aText)
    print(cText)
 
radioCir()