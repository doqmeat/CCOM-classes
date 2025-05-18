[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/9sCK53ug)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=18641700&assignment_repo_type=AssignmentRepo)
# Distribución de notas

Este laboratorio tiene un valor de 15 puntos. La fecha de entrega es está en moodle. Entregas tardías perderán 1 punto por cada día o fracción de día que se entrege tarde.  

## Instrucciones

Escriba un programa que cree una tabla con la distribución de notas en un archivo llamado  `notas.txt`. Su programa debe:  

- Leer el archivo `notas.txt`
- Contabilizar cuántas As, Bs, Cs, Ds, y Fs hay en total
- Desplegar una tabla horizontal con un histograma de las notas

**OJO**: El programa debe funcionar con cualquier archivo que contenga data similar. El programa se verificará con una data *similar* a la provista en el archivo `notas.txt`.

La calificación sigue la escala, donde $P$ es el porciento:

| Porcentaje (P)       | Nota |
| -------------------- | ---- |
| $90 \leq P \leq 100$ | A    |
| $80 \leq P < 90$     | B    |
| $70 \leq P < 80$     | C    |
| $60 \leq P < 70$     | D    |
| $P < 60$             | F    |



**Ejemplo de output:** 

```
La distribución de notas en el archivo es la siguiente: 
A : ******* (7)
B : ***************** (17)
C : ********* (9)
D : ************ (12)
F : ******** (8)
```

Cada asterisco representa una nota y el número al final de cada barra es la cantidad total de personas con esas notas. 

## Rúbrica

Su programa debe...

- Seguir las instrucciones detalladas arriba (10 pts):
  - Procesar el archivo correctamente (2 pts)
  - Contabilizar las notas correctamente (3 pts)
  - Desplegar la tabla con los datos correctamente (3 pts)
  - Funcionar para cualquier archivo con el mismo nombre y data similar (2 pts)
- Utilizar nombres apropiados para las variables (1 pts)
- Tener una indentación apropiada y consistente que facilite la legibilidad de su código (2 pt)
- Debe estar debidamente comentado de manera que su código sea legible (1 pt)
- Debe contener un *header* con su información y colaboraciones en un comentario (1 pts)
- El programa **NO** necesita validar el *input*  del archivo
- Si su programa no corre o se interrumpe, perderá la mitad de los puntos
- Utilizar **solamente** los conceptos discutidos en clase, de incluir conceptos o estructuras no establecidas en clase, perderán 1/3 de los puntos