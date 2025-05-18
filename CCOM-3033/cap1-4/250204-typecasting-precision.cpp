#include <iostream>
// se incluye iomanip: input-output-manipulator para manipular el output en el terminal
#include <iomanip>

using namespace std;

// type casting (explicit): tipo de type conversion, nosotros hacemos el cambio del tipo de dato que es.

// se utiliza: static_cast<tipo-de-dato>(value)

int main()
{

   int libros = 20, meses = 12;
   double ratio = static_cast<double>(libros) / meses;
   double num = 123.4567, num2 = 98.765;
   int num3 = 123456;

   /*
- para manipular TODOS los digitos se utiliza SOLITO:
   setprecision(value)
   esto solo se utiliza con FLOATS, no con INTs

-si setprecision(value) es menor que el total de los digitos del valor, este sale en notacion cientifica.
   */

   //  el fixed de los couts anteriores me esta afectando los de abajo! !!!!!!!

   cout << "setprecision solo: " << setprecision(3) << ratio << " " << num << " " << num2 << " " << num3 << endl;

   cout << "setprecision, notacion cientifica por que (value) es menor que el total de los digitos: " << setprecision(2) << num2 << endl;

   /*
   static_cast<double>(ratio)

  esta incorrecto porque esta cogiendo el valor de 'ratio' (que ya es un entero y conviertiendolo a double.)
   */

   cout << "conversion de tipo de dato para hacer una division double: " << ratio << endl;

   /*
  - ahora quiero que 1.66667 solo tenga 2 espacios despues del punto decimal. esto se hace con:
    setprecision(value) << fixed

  - set preciosion(value) se le pone a todos en esa linea. no se tiene que repetir.
  */
   cout << "setprecision y fixed: " << setprecision(2) << fixed << ratio << " / " << num << " / " << num2 << endl;

   /* si:
   setprecision(value) << fixed
   se pasa de la cantidad de digitos que contiene DESPUES del punto, va a regresar un 0 en su lugar */
   cout << "setprecision y fixed, pasandose de la cantidad de digitos que tiene el value: " << setprecision(5) << fixed << num << endl;
   return 0;
}