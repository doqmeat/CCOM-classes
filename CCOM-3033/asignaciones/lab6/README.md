[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/BIvzQduz)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=18694474&assignment_repo_type=AssignmentRepo)
# Búsqueda de Nombres

Este laboratorio tiene un valor de 15 puntos. La fecha de entrega está en moodle. Entregas tardías perderán 1 punto por cada día o fracción de día que se entrege tarde.  

## Instrucciones

Escriba un programa que busque entre 4 archivos un nombre especificado por el usuario. Su programa debe...

- Pedirle un nombre al usuario para buscar
- Buscar entre los 4 archivos si el nombre entrado por el usuario está en la lista
  - Note que los nombres todos comienzan con letra mayúscula y no incluyen acento
- Si el nombre está en algún archivo, debe desplegarle al usuario el nombre del archivo donde está ubicado (no tiene que incluir repeticiones)
- Si el nombre no está en el archivo, debe desplegarle al usuario un mensaje para esos efectos

Utilice ciclos anidados para buscar entre los 4 archivos. Es decir, el ciclo externo debe iterar sobre los 4 archivos (una iteración por cada archivo) y el interno debe iterar sobre un archivo distinto cada vez que ejecute. 

**Ejemplo de output**

```
Entre un nombre escrito con mayúscula y sin acento: Pilar
El nombre Pilar está en el archivo "nombres3.txt".
```

```
Entre un nombre escrito con mayúscula y sin acento: Cristina
El nombre Cristina no está en los archivos.
```

**HINT:** para convertir un int a un string, puede utilizar la función `to_string()`.

```C++
int i = 2;
string x = to_string(i);
```

En el ejemplo anterior, la variable `x` contiene el literal `"2"`. 

## Rúbrica

Su programa debe..

- Seguir las instrucciones detalladas arriba (10 pts):
  - Utilizar correctamente los objetos de la librería `fstream` (2 pts)
  - Buscar entre los 4 archivos el nombre (2 pts)
  - Desplegar un mensaje apropiado con el resultado de la búsqueda (2 pts)
  - Utilizar ciclos anidados como especificado arriba para la búsqueda entre los 4 archivos (4 pts)
- Utilizar nombres apropiados para las variables (1 pt)

- Tener una indentación apropiada y consistente que facilite la legibilidad de su código (2 pt)
- Debe estar debidamente comentado de manera que su código sea legible (1 pt)
- Debe contener un *header* con su información y colaboraciones en un comentario (1 pts)

- El programa **NO** necesita validar el *input*  del nombre
- Si su programa no corre o se interrumpe, perderá la mitad de los puntos
- Utilizar **solamente** los conceptos discutidos en clase y/o el _hint_, de incluir conceptos o estructuras no establecidas en clase, perderán 1/3 de los puntos
