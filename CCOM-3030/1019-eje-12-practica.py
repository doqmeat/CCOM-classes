def suma():
    n = int(input("entrar numero: "))
    s = 0
    if (n % 2 == 0):
        r = range(2,n,2)
    else:
        r = range(1,n,2)
    for num in r:
        s = s + num
    ns = s + n
    print(s)
    print(ns)


suma()