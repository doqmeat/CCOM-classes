def areaCir():
    r = float(input("entrar radio del circulo: "))
    Pi = 3.1415
    a = Pi*r*r
    c = 2*Pi*r
    aText = "el area del circulo es " + str(a)
    cText = "la circunferencia del circulo es " + str(c)
    print(aText)
    print(cText)

areaCir()


