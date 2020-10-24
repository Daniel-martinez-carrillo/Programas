// Problema 71 : Numeros negativos random hasta el -100
// Daniel martinez carrillo 16210552

#include <cstdlib>
#include <iostream>

using namespace std;
int main(){
srand((unsigned)time(NULL));

int Final = 40;
for(int Numero_inicial = 1; Numero_inicial <= Final; Numero_inicial++)
{
    
int num = -rand()%(100);
int Numero_aleatorio = num;

    cout << Numero_aleatorio << " ";

}

return 0;
}