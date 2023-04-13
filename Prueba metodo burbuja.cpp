#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int A[5],i,j,n;
    n=5;
    for (i=0; i<=4;i++)
    {
        cout <<"Ingrese un numero"<<endl;
        cin >> A[i];
    }

    for (i=0;i<n-1;i++) {
        for (j=0;j<n-i-1;j++){
            if (A[j]>A[j+1]){
                swap(A[j],A[j+1]);
            }
        }
    }

    cout <<"Arreglo ordenado: ";
    for (i=0;i<5;i++){
        cout <<A[i];
        cout <<" ";
    }
    cout <<"\n"<<endl;
system ("PAUSE");
return EXIT_SUCCESS;
}