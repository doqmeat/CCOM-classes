[github link](https://github.com/CCOM3033-002/hw8-desteny-hernandez)

# Calcular el GPA

Este laboratorio tiene un valor de 15 puntos. La fecha de entrega está en moodle. Entregas tardías perderán 1 punto por cada día o fracción de día que se entrege tarde. 

## Antes de comenzar

Para calcular el GPA de un estudiante, primero se necesita una lista de los cursos que haz cogido y para cada uno necesitas saber la letra de calificación (A, B, C, D, F) y la cantidad de créditos. Luego se hace lo siguiente:

1. Para cada curso:
   1. Convierte las calificaciones a puntos usando la escala: 
      - A = 4, B = 3, C = 2, D = 1, F = 0
   2. Multiplica los puntos de la calificación por los créditos del curso
2. Suma todos los puntos resultados del paso 1
3. Suma todos los créditos
4. Divide los puntos totales entre los créditos totales, esto te da el GPA

**Ejemplo:**

Con los siguientes cursos,

| Calificación | Cantidad de Créditos |
| ------------ | -------------------- |
| A            | 3                    |
| C            | 3                    |
| B            | 2                    |
| C            | 4                    |

Se obtiene el siguiente GPA:

- PuntosTotales = $A \times 3 + C \times 3 + B \times 2 + C \times 4$

  PuntosTotales = $4 \times 3 + 2 \times 3 + 3 \times 2 + 2 \times 4$

  PuntosTotales = $12 + 6 + 6 + 8 = 32$

- CantidadCreditos = $3 + 3 + 2 + 4 = 12$

- GPA = PuntosTotales / CantidadCreditos = $32 / 12 = 2.67$ 

## Instrucciones

Escriba un programa que le pida al usuario las notas y créditos de todos los cursos que ha tomado y luego calcula su GPA. Su programa debe cumplir con las siguientes especificaciones:

- Defina un enumerador (llamado `Escala`) para la escala de calificación donde cada letra tiene el valor correcto (e.g. A = 4, B = 3, C = 2, etc.)
- Defina un struct para los cursos (llamado `Curso`) que contenga una escala (enumerador `Escala`) y la cantidad de créditos del curso. 
- Defina un struct de estudiantes (llamado `Estudiante`) que contenga su nombre, un vector de cursos (vector de `Curso`s), y un GPA.
- Defina una función llamada `getGPA` que reciba un `Estudiante` por referencia, calcule su GPA y lo almacene en su respectivo GPA.
- En main debe:
  - Pedir el nombre y la cantidad de cursos que ha cogido y guardarlos en una variable de tipo `Estudiante` 
  - Por cada curso, pedir la calificación (letra obtenida) y la cantidad de créditos, y guardarlos en el vector de cursos del estudiante
  - Invocar la función `getGPA` 
  - Desplegar un mensaje al usuario con su GPA 

**Ejemplo de output:**

```
Entre su nombre: Juan del Pueblo
¿Cuantos cursos ha tomado? 4
Entre la nota (A-F) y la cantidad de créditos de cada curso:
	1. Nota: A
	1. Creditos: 3

	2. Nota: C
	2. Creditos: 3

	3. Nota: B
	3. Creditos: 2

	4. Nota: C
	4. Creditos: 4
Juan del Pueblo, su promedio es: 2.66667
```

**AYUDA:** Si desea, puede utilizar la siguiente función en su programa:

```c++
// en esta función, 'nota' es el miembro de tipo Escala de la estructura Curso
// puede cambiar 'nota' por el nombre que escogió para su struct Curso
void setScale(Curso& c, char letter){
    switch (letter){
        case 'a':
        case 'A': c.nota = A; break;
        case 'b':
        case 'B': c.nota = B; break;
        case 'c':
        case 'C': c.nota = C; break;
        case 'd':
        case 'D': c.nota = D; break;
        default: c.nota = F;
    }
}
```

La función recibe un `Curso` por referencia y un `char` de una calificación, y le asigna la calificación dada al curso. Esto se hace porque no se puede utilizar `cin >> var` con una variable enumeradora. 

## Rúbrica

Su programa debe...

- Seguir las instrucciones detalladas arriba (11 pts):
  - Definir el enumerador `Escala` y los structs `Curso` y `Estudiante` correctamente con los valores y miembros correctos (3 pts)
  - Implementar la función `getGPA` correctamente con las especificaciones dadas (4 pts)
  - Calcular correctamente el GPA (2 pts)
  - Pedir los inputs y procesarlos correctamente (1 pts)
  - Desplegar el resultado final (1 pt)
  - No tiene que hacer _input validation_
- Tener nombres apropiados para las variables, funciones, y estructuras (1 pt)

- Tener una indentación apropiada y consistente que facilite la legibilidad de su código (1 pt)
- Debe estar debidamente comentado de manera que su código sea entendible (1 pt)
  - Brinde explicaciones donde el proceso no sea obvio, incluya su razonamiento de por qué su implementación funciona.
- Debe contener un *header* en la parte superior del programa con su información y colaboraciones en un comentario (1 pt)
  - No es recomendado el uso de LLM para ningun trabajo, pero de utilizarlo debe incluir en el *header* un link a la conversación completa con los prompts hechos y las contestaciones brindadas por el LLM. De no hacerlo, si se detecta que su código fue copiado de un LLM, recibirá 0 en su trabajo.
- Si su programa no corre o se interrumpe, perderá la mitad de los puntos
- Utilizar **solamente** los conceptos discutidos en clase, de incluir conceptos o estructuras no establecidas en clase, perderán 1/3 de los puntos