#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

const double Pulgadas = 2.54;
const double Millas = 1609.34;
const double GFarenheit = 5/9 ;
const double GalonLiquido = 3.78541;
const double Onzas = 28.3495;
const double Libras =  0.453592;


int main(){
   double real, conversion = 0;
   char tecla, letra, espacio;
   cout << "Digite el número: ";
   cin >> real;
   cout << "Presione tecla espaciadora: ";
   while(tecla != 32){
       tecla = getchar();

       if(tecla == 32){
           cout << "Presione una letra: ";
           cin >> letra;
       }else{
           cout << "nuevamente, "; 
       }
       

    }
    switch (letra){ 
        case 'p':   conversion = real * Pulgadas;
                    cout << real << " pulgadas es equivalente a  " << fixed << setprecision(3) << conversion << " centímetros" << endl; 
        break;

        case 'm':   conversion = real * Millas;
                    cout << real << " millas es equivalente a  " << fixed << setprecision(3) << conversion << " metros" << endl; 
        break;

        case 'f':   conversion = (real -32) * GFarenheit;
                    cout << real << " grados Fahrenheit es equivalente a  " << fixed << setprecision(3) << conversion << " grados Celsius" << endl; 
        break;

        case 'g':   conversion = real * GalonLiquido;
                    cout << real << " Galónes es equivalente a  " << fixed << setprecision(3) << conversion << " litros" << endl; 
        break;

        case 'o':   conversion = real * Onzas;
                    cout << real << " onzas es equivalente a  " << fixed << setprecision(3) << conversion << " gramos" << endl;
        break;

        case 'l':   conversion = real * Libras;
                    cout << real << " libras es equivalente a  " << fixed << setprecision(3) << conversion << " kilogramos" << endl; 
        break;

        default:    cout << "Ha digitado una letra no válida" << endl;
        break;

    }
    return 0;
}