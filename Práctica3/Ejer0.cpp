/*#include <iostream>
#include <iomanip>

int main()
{
    char cTecla;

    printf("\r\nPresione un Tecla ...");

    while(cTecla != 32)
    {
       cTecla = getchar();
       if(cTecla == 00)
           cTecla = getchar();
       
    }
    
    return 0;
}*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char cTecla, letra;
    double real;
    cout << "Digite el número: ";
    cin >> real;
    cout << "Presione tecla espaciadora: ";
    while(cTecla != 32){
       cTecla = getchar();

       if(cTecla == 32){
           cout << "Presione una letra: ";
           cin >> letra;
       }
       

    }
    
    return 0;
}



        