def Fiter(n):
    f = 1
    for k in range(2,n+1):
        f = k*f
    return f

print(Fiter(1))