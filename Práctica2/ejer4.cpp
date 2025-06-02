#include <iostream>
#include <iomanip>

using namespace std; 

int main() {
  int cantidadEspecie[6], pesoEspecie[6], pesoTotal[6] ;
  double suma=0;

  cout << setw(10) << "Especies" << " Animales" << endl;
  cout << "1. Perro" << endl;
  cout << "2. Gato" << endl;
  cout << "3. Conejo" << endl;
  cout << "4. Iguana" << endl;
  cout << "5. Cocodrilo" << endl;
  cout << "6. Ave" << endl;

  cout << "Ingrese la cantidad y peso promedio de cada especie: " << endl;

  for(int i = 0; i < 6 ;i ++){
      cout << "Especie número " << (i+1) << ", Cantidad: ";
      cin >> cantidadEspecie[i];
      cout << "Peso de la especie número " << (i+1) << " en [kg]: ";
      cin >> pesoEspecie[i];
  }
  
  for(int i = 0; i < 6; i ++){
      pesoTotal[i] = cantidadEspecie[i] * pesoEspecie[i];
  }

  for(int i = 0; i < 6; i ++){
      suma += pesoTotal[i];
  }

  cout << "El peso total del arca es: " << suma << "[kg]" << endl;

  return 0;
} 
      
