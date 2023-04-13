#include <cstdlib>
#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
  int A[10];
  int i, numero;
  cout << "Introduce un número" << endl;
  cin >> numero;
  for (i = 1; i <= 10; i++)
    {
      cout << "Introduce un número" << endl;
      cin >> A[i];
    }
    
  i = 1;
  while ((i < 11) && (numero != A[i]))
     {
      i = i + 1;
      if (i == 11)
     {
          cout << "NO";
     }
     else
     {
         cout << "SI";
     }
    }

  system ("PAUSE");
  return EXIT_SUCCESS;

}