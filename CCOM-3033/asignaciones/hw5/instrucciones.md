[repo link](https://github.com/CCOM3033-002/hw5-desteny-hernandez)

# Función isPrime

Este laboratorio tiene un valor de 15 puntos. La fecha de entrega es está en moodle. Entregas tardías perderán 1 punto por cada día o fracción de día que se entrege tarde.  

### Antes de comenzar

Se dice que un entero positivo `n` es un número primo si $n$ es mayor que dos y sus *únicos* divisores positivos son $1$ y $n$.

### Instrucciones

Escriba un programa que:

- Contenga una función llamada `isPrime` que reciba un número entero (tipo `int`) y devuelva un valor booleano dependiendo si el argumento es primo o no. En otras palabras, la función debe detectar si el argumento es un número primo o no. 
- En `main`, abra un archivo llamado `primos.txt` y escriba en él los primeros 100 números primos. 
  - **Importante**: deben salir exactamente 100 números primos en ese archivo, **no los primos del 2 al 100**. 


### Rúbrica

Su programa debe...

- Seguir las instrucciones detalladas arriba (11 pts):
  - Implementar correctamente la función `isPrime` (esto incluye su nombre)(4 pts)
  - Incluir un prototipo para la función `isPrime` y definir la función luego de `main` (2 pts)
  - Procesar y nombrar el archivo correctamente (2 pt)
  - Escribir los primeros 100 números primos en el archivo (3 pts)
    - Esto debe ser mediante el uso de un ciclo y la función `isPrime`. Bajo ninguna circumstancia debe "hardcode" los número primos al programa ni al archivo. El archivo de debe escribir, no leer. 

- Tener una indentación apropiada que facilite la legibilidad de su código (1 pt)
- Debe estar debidamente comentado de manera que su código sea entendible (2 pt)
  - Brinde explicaciones donde el proceso no sea obvio, incluya su razonamiento de por qué su implementación funciona.
- Debe contener un *header* con su información y colaboraciones en un comentario (1 pts)

- El programa **NO** pide *input* del usuario 
- Si su programa no corre o se interrumpe, perderá la mitad de los puntos
- Utilizar **solamente** los conceptos discutidos en clase, de incluir conceptos o estructuras no establecidas en clase, perderán 1/3 de los puntos