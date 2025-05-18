[github link](https://github.com/CCOM3033-002/lab11-desteny-hernandez)

# Input Validation con Punteros

Este laboratorio tiene un valor de 15 puntos. La fecha de entrega está en moodle. Entregas tardías perderán 1 punto por cada día o fracción de día que se entrege tarde. 

## Antes de comenzar

### Strings como arreglos

Una manera de visualizar `strings` es como un arreglo de caracteres (`char`'s). Es por esto que es posible utilizar notación de arreglos con strings. 

Por ejemplo, utilizando el *header file* `string` podemos hacer lo siguiente:

```C++
string nombre = "Juan del Pueblo";
cout << nombre[0] << endl;  // desplegará el char 'J' en la pantalla
cout << &nombre[0] << endl; // desplegará la dirección del primer char del string nombre
```



### Casting de strings

Para hacer casting de lvalues tipo `string` a un `int` o `double` no se puede utilizar la función `static_cast<dataType>(value)` . Para esto se pueden utilizar las funciones `stoi` y `stod`. Por ejemplo:

```C++
string valor_entero = "15";      // string que contiene un int
int entero = stoi(valor_entero); // casting de string a int

string valor_real = "11.3";			 // string que contiene un número real
double real = stod(valor_real);  // casting de string a double

string valor = "123ABC456.7";    // string no-numérico
int error = stoi(valor); 	       // produce un error
```



### Uso de punteros para manipular `strings`

Los punteros tienen muchos usos, entre estos está la habilidad de manipular `strings`. Es posible cambiar su contenido sin crear un `string` nuevo o verificar su contenido **antes** de hacerle *casting* a otro tipo de dato. 

Por ejemplo, considere las siguientes dos funciones:

```C++
// helper function, helps document/understand toLower function
inline bool isUpper(char c){
    return c >= 'A' && c <= 'Z';
}

// inputs: direction of the first char of a string 
// changes all upper case characters in the string to lower case chars
void toLower(char* str){
    while (*str != '\0'){ // while end of str hasnt been reached
        if(isUpper(*str)) // verify if char is upper and add 32 to change to lower
            *str += ' ';  // dereferenced to change the argument's char
        str++; // change pointer to next char of str
    }
}
```

Recuerde que un `char` es representado internamente como un número entero, es decir, `char` es un tipo de dato numérico. Note que la distancia entre el `char 'A'` y el `char 'a'` en la tabla ASCII es 32. 

- ASCII del `char 'A'` es 65
- ASCII del `char 'a'` es 97
- 97 - 65 = 32

Lo mismo ocurre entre las otras letras del abecedarios desde su mayúscula a su minúscula. Podemos verificarlas todas y seguirá siendo cierto. Otro ejemplo sería:

- ASCII del `char 'M'` es 77
- ASCII del `char 'm'` es 109
- 109 - 77 = 32

Esto implica que si tenemos un `char` que es una letra mayúscula y le sumamos 32, nos dará el `char` de la misma letra pero en minúscula. Ahora note que el `char` del espacio vacío/en blanco `' '` tiene ASCII 32. Por ende, al sumarle `' '` a un `char` mayúscula, tendremos el `char` en minúscula. 



## Instrucciones

En este laboratorio estaremos creando funciones con parámetros que son punteros para verificar si un `string` contiene un numero entero o real y luego hacerle *casting* al `string` a `int` o `double`. 

Este laboratorio tiene dos partes, la primera se hará con la profesora y la segunda cada estudiante por su cuenta. Deben definir las siguientes funciones:

```C++
#include <string>
#include <iostream>
using namespace std;

// prototipos de funciones a definir

// helper function para isInteger y isDecimal
// input: un char (pass by value)
// output: true si el char contiene un dígito, false si no
inline bool isDigit(char c);

// input: dirección al primer char de un string (pass by reference)
// output: true is el string solamente contiene dígitos, false si no
/* Con el puntero (parámetro), se va iterando (como un arreglo) por el string
   verificando que cada character sea un dígito */
bool isInteger(const char* str);

// input: variable tipo int (pass by reference)
// output: void/none
/* La función le pide un número entero al usuario (sin prompt), lo almacena 
   en un string, verifica que sea un string que solo contenga dígitos, si no 
   es un número entero, le vuelve a pedir el input hasta que el usuario entre 
   un número entero, y por último le hace casting al string a int y lo almacena 
   en el parámetro */
void getInt(int& num);

// ----- las siguientes dos funciones las harán por su cuenta -----

// input: dirección al primer char de un string (pass by reference)
// output: true is el string solamente contiene dígitos y máximo un punto 
// decimal (puede tener 0 o 1 punto decimal), false si no es un número decimal
/* Con el puntero (parámetro), se va iterando (como un arreglo) por el string
   verificando que contenga solamente characteres válidos en un número decimal.
   Tome en cuenta que debe asegurarse de contar los puntos decimales */
bool isRealNumber(const char* str);

// input: variable tipo double (pass by reference)
// output: void/none
/* La función le pide un número real al usuario (sin prompt), lo almacena en 
	 un string, verifica que sea un string que contenga un número real, si no 
	 es un número real, le vuelve a pedir el input hasta que el usuario entre 
	 un número real, y por último le hace casting al string a double y lo almacena 
	 en el parámetro */
void getRealNumber(double& num);
```

Luego de definir las funciones, su código debe correr con la siguiente definición de `main`:

```C++
#include <string>
#include <iostream>
using namespace std;

int main(){
  // definir variables 
  int entero;
  double real;
  
  // darles valores a las variables
  cout << "Entre un número entero: ";
  getInt(entero);
  cout << "Entre un número real: ";
  getRealNumber(real);
  
  cout << "Usted entró los números: " << entero << " y " << real << endl;
  
  return 0;
}
```



## Rúbrica

Su programa debe...

- Seguir las instrucciones detalladas arriba (11 pts):
  - Definir las funciones `isInteger` y `getInt` con la funcionalidad descrita (3 pts)
  - Definir la función `isRealNumber` correctamente como está descrita (5 pts)
  - Definir la función `getRealNumber` correctamente como está descrita (3 pts)
- Tener nombres apropiados para las variables y funciones (1 pt)

- Tener una indentación apropiada y consistente que facilite la legibilidad de su código (1 pt)
- Debe estar debidamente comentado de manera que su código sea entendible (1 pt)
  - Brinde explicaciones donde el proceso no sea obvio, incluya su razonamiento de por qué su implementación funciona.
- Debe contener un *header* con su información y colaboraciones en un comentario (1 pt)
  - No es recomendado el uso de LLM para ningun trabajo, pero de utilizarlo debe incluir en el *header* un link a la conversación completa con los prompts hechos y las contestaciones brindadas por el LLM. De no hacerlo, si se detecta que su código fue copiado de un LLM, recibirá 0 en su trabajo.
- Si su programa no corre o se interrumpe, perderá la mitad de los puntos
- Utilizar **solamente** los conceptos discutidos en clase, de incluir conceptos o estructuras no establecidas en clase, perderán 1/3 de los puntos