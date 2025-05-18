#include <iostream>
#include <string>
using namespace std;

// https://www.reddit.com/r/learnprogramming/comments/rgieqc/can_someone_help_me_understand_the_purpose_of/

int main()
{
 int num;
 string oracion, otra;

 cout << "entre un numero! ";
 cin >> num;
 // si no tengo un cin.ignore(), entonces el [enter] que esta en el keyboard buffer me va a contar para el getline que pido ya que getline(cin,string) y cin.get(char) guardan whitespaces.
 // cin ignore(int,char)
 // tambien lo podemos dejar solo
 cin.ignore();

 cout << "entre un string: ";
 getline(cin, oracion);

 cout << "entre otro string: ";
 getline(cin, otra);
 return 0;
}