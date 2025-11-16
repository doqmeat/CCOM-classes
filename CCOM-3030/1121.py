def F(n):
    if (n==0 or n==1):
        return 1
    return n*F(n-1)

print(F(3))