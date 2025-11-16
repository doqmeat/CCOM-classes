def adivina():
    uno = int(input("entra un num: "))
    dos = int(input("entra un 2do num: "))
    tres = int(input("entra un 3er num: "))
    otro = tres
    tres = uno
    uno = dos
    dos = otro
    cuatro = uno+dos+tres
    print("uno es " + str(uno) + " dos es " + str(dos) + " tres es " + str(tres) + " cuatro es " + str(cuatro))



def promedio():
    x=int(input("primer numero: "))
    y=int(input("segundo numero: "))
    z=int(input("tercer numero: "))
    w=int(input("cuarto numero: "))
    p=(x+y+z+w)/4
    print(p)
    if (p<=50):
        print("puedo comprarlo")
    else:
        print("esta fuera de mi presupuesto")

promedio()