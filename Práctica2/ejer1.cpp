#include <iostream>

using namespace std; 

int main() {
  double horas, tarifa, tasaImpuestos;
  double sueldoBruto, impuesto, sueldoNeto;
  
  cout << "Ingrese el número de horas trabajadas: ";
  cin >> horas;
  cout << "Ingrese la tarifa horaria: ";
  cin >> tarifa;
  cout << "Ingrese la tasa de impuestos: ";
  cin >> tasaImpuestos;

  sueldoBruto = horas * tarifa;
  impuesto = (sueldoBruto * tasaImpuestos)/100; 
  sueldoNeto = sueldoBruto - impuesto;
   
  cout << "Su Sueldo Bruto es:  " << sueldoBruto << "$" << endl;
  cout << "El impuesto es: " << impuesto << "%" << endl;  
  cout << "Su Sueldo Neto es:" << sueldoNeto << "$" << endl;

  return 0;
}