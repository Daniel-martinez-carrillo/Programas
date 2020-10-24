// Problema 19: Suma de los numeros del 1 al 1000
// Daniel martinez carrillo 16210552

#include <cstdlib>
#include <iostream>
using namespace std;
int main(){

int Final = 1000;
for(int Numero_inicial = 0; Numero_inicial <= Final; Numero_inicial++)
{
    
int Numero = Numero + Numero_inicial;
// int Numero2 = Numero;
// int Suma =  Suma+ Numero2;

if( Numero_inicial == Final ){
    cout << Numero << " ";
}
}

return 0;
}
