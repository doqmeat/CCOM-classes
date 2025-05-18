[github](https://github.com/CCOM3033-002/hw7-desteny-hernandez)

# Union de Conjuntos

Este laboratorio tiene un valor de 15 puntos. La fecha de entrega está en moodle. Entregas tardías perderán 1 punto por cada día o fracción de día que se entrege tarde. 

## Antes de comenzar

***Definición*.** Un **conjunto** es una colección de elementos. La unión de dos conjuntos A y B es un conjunto que contiene los elementos que pertenecen al conjuntos A o pertenecen al conjunto B (o a ambos). La unión de dos conjuntos A y B se denota $A\cup B$. 

***Ejemplo*.** Si $A=${ $1,3,5,7$ } y $B=${ $3,6,7,9,11$ }, entonces $A\cup B=${ $1,3,5,6,7,9,11$ }. 

Note que el elemento $7$ está en ambos $A$ y $B$, pero sale solamente una vez en el conjunto $A\cup B$; esto es porque los conjuntos no incluyen repeticiones de elementos. 

***Ejemplo*.** El conjunto { $1,2,2,2,3$ } es equivalente al conjunto { $1,2,3$ }.   

**OJO.** El orden de los elementos de los conjuntos no importa, por ejemplo, los conjuntos { $1,3,5,7$ } y { $5,3,7,1$ } son equivalentes.

***Definición.*** La **cardinalidad** de un conjunto $C$, denotado $|C|$, es la cantidad de elementos que tiene el conjunto. 

***Ejemplo.*** Si $C=${ $17, 19, 141, 143$ }, entonces $|C|=4$ es decir, la cardinalidad de $C$ es 4.

## Instrucciones

Escribe un programa que representa los conjuntos $A$, $B$ y $A\cup B$ como arreglos de números enteros. El tamaño máximo de los arreglos $A$ y $B$ es 10. El programa debe preguntarle al usuario cuántos elementos tienen los conjuntos $A$ y $B$ (máximo 10, pueden tener cantidades distintas de elementos), luego debe pedirle al usuario que entre los valores de los elementos de los conjuntos. Finalmente el programa debe desplegar los elementos del conjunto $A\cup B$ **sin repeticiones**. 

El programa debe hacer *input validation* para la cantidad de elementos de los conjuntos $A$ y $B$, el programa no debe aceptar valores menores que 1 o mayores que 10.



**Ejemplo de output.**

```
Este programa calcula la union de dos conjuntos A y B no vacíos con a lo sumo 10 elementos. 
Entre la cantidad de elementos del conjunto A: 5
	Entre los elementos de A separados por espacio: 5 7 9 23 1

Entre la cantidad de elementos del conjunto B: 3
	Entre los elementos de B separados por espacio: 1 6 3 23 0

La union de A y B es el conjunto {5, 7, 9, 23, 1, 6, 3, 0}.
```

```
Este programa calcula la union de dos conjuntos A y B no vacíos con a lo sumo 10 elementos. 
Entre la cantidad de elementos del conjunto A: 5
	Entre los elementos de A separados por espacio: 5 4 3 2 1

Entre la cantidad de elementos del conjunto B: 3
	Entre los elementos de B separados por espacio: 2 3 4

La union de A y B es el conjunto {5, 4, 3, 2, 1}.
```



## Rúbrica

Su programa debe...

- Seguir las instrucciones detalladas arriba (11 pts):
  - Hacer *input validation* de los tamaños de los conjuntos $A$ y $B$ ($1\leq|A|,|B|\leq10$) (3 pts)
    - **NO** haga *input validation* para los valores de los elementos de los conjuntos
  - Desplegar el conjunto unión y:
    - que contenga todos los elementos que debe tener según la deifinición (4 pts)
    - que no contenga repeticiones de valores (4 pts)
- Tener nombres apropiados para las variables y funciones (1 pt)

- Tener una indentación apropiada y consistente que facilite la legibilidad de su código (1 pt)
- Debe estar debidamente comentado de manera que su código sea entendible (1 pt)
  - Brinde explicaciones donde el proceso no sea obvio, incluya su razonamiento de por qué su implementación funciona.
- Debe contener un *header* con su información y colaboraciones en un comentario (1 pt)
  - No es recomendado el uso de LLM para ningun trabajo, pero de utilizarlo debe incluir en el *header* un link a la conversación completa con los prompts hechos y las contestaciones brindadas por el LLM. De no hacerlo, si se detecta que su código fue copiado de un LLM, recibirá 0 en su trabajo.
- Si su programa no corre o se interrumpe, perderá la mitad de los puntos
- Utilizar **solamente** los conceptos discutidos en clase, de incluir conceptos o estructuras no establecidas en clase, perderán 1/3 de los puntos