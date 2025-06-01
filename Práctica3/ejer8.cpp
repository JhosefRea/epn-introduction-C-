#include <iostream>
#include <iomanip>
using namespace std;

const float Euro = 1.12456;
const float Dolar = 0.8892;

int main(){
   int opc;
   float cantidad, resultado = 0;
   cout << "Conversor de divisas" << endl;
   cout << "1.dólares a euros" << endl;
   cout << "2.euros a dólares" << endl;
   cout << "3. Salir" << endl;
   cout << "Seleccione la conversión a realizar: "; 
   cin >> opc;

   if(opc == 1){
       cout << "Ingrese la cantidad a convertir: ";
       cin >> cantidad;
       resultado = cantidad * Dolar;
       cout << cantidad << " dólares son " << fixed << setprecision(2) << resultado << " euros." << endl; 


   }else if(opc == 2){
       cout << "Ingrese la cantidad a convertir: ";
       cin >> cantidad;
       resultado = cantidad * Euro;
       cout << cantidad << " euros son " << fixed << setprecision(2) << resultado << " dólares." << endl; 
   
   }else if(opc == 3){
       cout << "Ud. ha salido del sistema." << endl;
   }else{
       cout << "Ha digitado una opción inválida." << endl;
   }
    return 0;
}