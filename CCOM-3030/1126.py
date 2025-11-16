def Adivina(numero):
    numero = numero + 4
    return numero

def Cliente():
    x = 1
    x = Adivina(4) + Adivina(x)
    print(x)

Cliente()