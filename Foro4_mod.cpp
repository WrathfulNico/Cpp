#include <cstdlib>
#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
  int A[10];
  int i, numero;
  cout << "Introduce un numero" << endl;
  cin >> numero;
  cout << "Antes del ciclo se carga la variable numero con el valor" << endl;
  cout << numero <<endl;
  cout <<"\n\n\n" <<endl;
  for (i = 1; i <= 10; i++) {
      cout <<"##############################################" <<endl;
      cout <<"Se ingresa al ciclo for" <<endl;
      cout << "Introduce un numero" << endl;

      cin >> A[i];

      cout << "\nvalor de A para i en esta iteracion\n" <<endl;
      cout << A[i] <<endl;

      cout <<"\n\nvalor de i en esta iteracion\n" <<endl;
      cout << i <<endl;
      cout <<"\n\n" <<endl;
      cout <<"##############################################" <<endl;
    }
  cout << "Salimos del ciclo for\n" <<endl;
  i = 1;

  cout << "i vuelve a 1\n\n\n" <<endl;
  cout << "ingresamos a ciclo while" <<endl;
  while ((i < 11) && (numero != A[i]))  {
      i = i + 1;

      cout << i <<endl;
      cout << "valor de i para cada iteracion\n" <<endl;
      cout << numero <<endl;
      cout << "\nvalor de numero para cada iteracion\n" <<endl;

      if (i == 11)
     {
          cout << "NO";
     }

     else
     {
         cout << "SI";
     }
    }
  cout << "\nsalimos del ciclo while y termina el programa" << endl;
  system ("PAUSE");

  return EXIT_SUCCESS;

}