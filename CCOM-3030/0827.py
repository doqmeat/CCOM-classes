# clase de agosto 27, martes
#~~~~~~~~~~~~~~~~~

# definiendo una funcion
def Suma():
	L3 = [3, 6, 9, 12, 15]
	L5 = [5, 10, 15]
	L = L3
#	para cada num de L5
	for x in L5:
#		si el num no esta en L todavia
		if x not in L:
#		se le añade a la lista (L) ese num
			L = L + [x]
#	esto se le llama una iniciacion -> S = 0
	S = 0
#	para cada num en la lista de L
	for x in L:
		S = S + x
#	imprimir el resultado de S
	print(S)
    
Suma()

#~~~~~~~~~~~~~~~~~~~~~~~~

#syntax de un range(): range(start, stop, step) 
x = [*range(2,4,2)]

#2 x 3= 6
print(x)

#2 x 6 = 12

# otras notas de clase: 
# python es un lenguaje interpretado, NO compilado