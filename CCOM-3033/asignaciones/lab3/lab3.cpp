#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

 /*
 Hora que comenzó la llamada Tarifa por minuto ($)
00:00 a 06:59 0.05
07:00 a 19:00 0.45
19:01 a 23:59 0.20
*/

 // ingresar la hora de inicio de llamada (HH.MM, 24 hrs)
 int horaHH, minutosMM;
 // guardamos el punto del keyboard buffer aqui
 char punto;

 cout << "Entre la hora de inicio de la llamada en HH.MM: ";
 cin >> horaHH >> punto >> minutosMM;

 // ingresar duracion de la llamada en minutos
 // int minutos;
 // cout << "Entre la duracion de la llamada en minutos: ";
 // cin >> minutos;

 if (minutosMM >= 0 && minutosMM <= 59)
 {
  cout << "Esto es una hora valida :-)" << endl;
 }
 else
 {
  cout << "Los minutos no son validos!!" << endl;
 }

 // if (hora >= 00.00 && hora <= 23.59)
 // {
 // 	if (hora >= 00.00 && hora <= 06.59)
 // 	{
 // 		precio = minutos * 0.5;
 // 	}
 // 	else if (hora >= 07.00 && hora <= 19.00)
 // 	{
 // 		precio = minutos * 0.45;
 // 	}
 // 	else if (hora >= 19.01 && hora <= 23.59)
 // 	{
 // 		precio = minutos * 0.20;
 // 	}
 // 	cout << "El precio de la tarifa es: $" << setprecision(2) << fixed << showpoint << precio << endl;
 // 	cout << "modulo de la " << hora << " es: " << modulo << endl;
 // }
 // else
 // {
 // 	cout << "la hora no es valida" << endl;
 // }

 // como verificar los puntos decimales de un double??
 return 0;
}