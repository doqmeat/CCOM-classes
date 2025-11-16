# Un algoritmo que pida la cantidad de electricidad consumida en kilovatios/hora y el costo de electricidad por kilovatio/hora. Su salida es la cantidad total a pagar en la factura de electricidad, incluyendo un impuesto del 11.5% de ivu. 
# De aprobarse el aumento de 2.9 centavos, el costo sería de 0.26708 por kWh (https://www.elnuevodia.com/noticias/locales/notas/luma-solicita-un-aumento-en-la-factura-de-energia-electrica-por-costo-del-combustible/)

def factura():
    kwh = float(input("cantidad de electricidad consumida en kWh: "))
    costo = float(input("costo de electricidad por kWh: "))
    cantidadTotal = kwh*costo
    cantidadImpuesto = (11.5/100)*cantidadTotal
    cantidadSuma = cantidadTotal + cantidadImpuesto
    print(cantidadTotal)
    print(cantidadImpuesto)
    print(cantidadSuma)

factura()