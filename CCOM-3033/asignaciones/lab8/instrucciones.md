[github link](https://github.com/CCOM3033-002/lab8-desteny-hernandez)

# Divisor mayor común (gcd)

Este laboratorio tiene un valor de 15 puntos. La fecha de entrega está en moodle. Entregas tardías perderán 1 punto por cada día o fracción de día que se entrege tarde. 

## Antes de comenzar

El **divisor mayor común** de dos números enteros positivos $a$ y $b$, donde $b\neq0$, se denota como $gcd(a,b)$ y se define como el número entero más grande que divide a ambos $a$ y $b$. La definición formal establece que el $gcd(a,b)$ cumple con la siguiente premisa:

El número $d$ es igual al $gcd(a,b)$ sí y solo sí se cumplen:

1. $d$ divide a $a$ y $d$ divide a $b$,
2. si existe $c$ tal que $c$ divide a ambos $a$ y $b$, entonces $d \geq c$.

Algunas propiedades de `gcd` son:

1. $gca(a,b) = gcd(b, a)$
2. $gcd(a, gcd(b, c)) = gcd( gcd(a, b), c)$

Según el Algoritmo de Euclides, se define como:

- $gcd(a,b) = b$, $\qquad$ si $b$ divide a $a$, 
- $gcd(a,b) = gcd(b,$ el residuo de la división $a/b)$, $\qquad$ si $b$ no divide a $a$ 

## Instrucciones

Defina una función recursiva que calcule el $gcd$ de dos números enteros no-negativos. Utilice la propiedad del Algoritmo de Euclides establecida previamente para implementar la recursión. La función debe llamarse `gcd`. 

En `main`, pídale al usuario que entre dos números enteros no-negativos y utilice la función `gcd` para calcular y desplegar el `gcd` de los inputs. 

Su programa debe...

- Desplegar el propósito
- Pedir los inputs al usuario y verificar que ambos sean no-negativos (*input validation*)
- Debe hacer *input validation* para verificar que al menos uno de los inputs no sea igual a 0 
- Calcular el $gcd$ de los inputs
- Desplegar el $gcd$ correcto de los inputs

**Ejemplos de output:**

```
Este programa calcula el divisor mayor común (gcd) de dos números enteros no-negativos, donde al menos uno de los números no es igual a 0.

Entre el primer número: 15
Entre el segundo número: 25

El gcd(15, 25) = 5.
```

```
Este programa calcula el divisor mayor común (gcd) de dos números enteros no-negativos, donde al menos uno de los números no es igual a 0.

Entre el primer número: 15
Entre el segundo número: 0

El gcd(15, 0) = 15
```

```
Este programa calcula el divisor mayor común (gcd) de dos números enteros no-negativos, donde al menos uno de los números no es igual a 0.

Entre el primer número: 0
Entre el segundo número: 10

El gcd(0, 10) = 10
```

```
Este programa calcula el divisor mayor común (gcd) de dos números enteros no-negativos, donde al menos uno de los números no es igual a 0.

Entre el primer número: 0
Entre el segundo número: 0

Los números no pueden ambos ser iguales a cero. Entre nuevamente los números.

Entre el primer número: 12
Entre el segundo número: 4

El gcd(12, 4) = 4
```

```
Este programa calcula el divisor mayor común (gcd) de dos números enteros no-negativos, donde al menos uno de los números no es igual a 0.

Entre el primer número: -15

El número no puede ser negativo, intente de nuevo.
Entre el primer número: 8
Entre el segundo número: 2

El gcd(8, 2) = 2
```

```
Este programa calcula el divisor mayor común (gcd) de dos números enteros no-negativos, donde al menos uno de los números no es igual a 0.

Entre el primer número: 7
Entre el segundo número: -3

El número no puede ser negativo, intente de nuevo.
Entre el segundo número: 3

El gcd(7, 3) = 1
```



## Rúbrica

- Seguir las instrucciones detalladas arriba (11 pts):
  - Desplegar propósito (1 pt)

  - Validar que los inputs sean no-negativos (2 pts)

  - Validar que los inputs no sean ambos igual a 0 (2 pts)

  - Desplegar el `gcd` correcto de los inputs (2 pts)

  - Definir correctamente la función recursiva `gcd` utilizando el Algoritmo de Euclides (4 pts)
    - Importante: su función debe funcionar cuando el primer input es 0 y el segundo es distinto de cerso; y también debe funcionar cuando el primer input es distinto de 0 y el segundo input es igual a 0. (**HINT**:  recuerde que el segundo operando de módulo no puede ser 0)

- Tener nombres apropiados para las variables y funciones (1 pt)

- Tener una indentación apropiada y consistente que facilite la legibilidad de su código (1 pt)
- Debe estar debidamente comentado de manera que su código sea entendible (1 pt)
  - Brinde explicaciones donde el proceso no sea obvio, incluya su razonamiento de por qué su implementación funciona.
- Debe contener un *header* con su información y colaboraciones en un comentario (1 pt)
  - No es recomendado el uso de LLM para ningun trabajo, pero de utilizarlo debe incluir en el *header* un link a la conversación completa con los prompts hechos y las contestaciones brindadas por el LLM. De no hacerlo, si se detecta que su código fue copiado de un LLM, recibirá 0 en su trabajo.
- Si su programa no corre o se interrumpe, perderá la mitad de los puntos
- Utilizar **solamente** los conceptos discutidos en clase, de incluir conceptos o estructuras no establecidas en clase, perderán 1/3 de los puntostos