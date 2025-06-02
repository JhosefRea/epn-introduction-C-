#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

const double Precios[5] = {0.15, 1.10, 0.9, 0.6, 1.80 };
int main() {
  string nombreCliente;  
  float descuento=0, precio=0, impuestoCerveza=0, precioTotal=0, subtotal=0;
  double producto[5], precioProducto[5];
  cout << setw(10) << "LISTA" << " PRODUCTOS" << endl;
  cout << "1. Huevos       (0.15)/unidad" << endl;
  cout << "2. Aceite       (1.10)/unidad" << endl;
  cout << "3. Leche        (0.90)/unidad" << endl;
  cout << "4. Libra Arroz  (0.60)/unidad" << endl;
  cout << "5. Cerveza      (1.80)/unidad" << endl;
  
  cout << "Ingrese su nombre completo: ";
  getline(cin,nombreCliente);
  cout << "Ingrese la cantidad de cada producto enlistado: " << endl;
  for(int i = 0; i < 5;i ++){
      cout << "Producto número " << (i+1) <<": ";
      cin >> producto[i];
      
  }
  for(int i=0; i<5;i++){
      precioProducto[i] = producto[i]* Precios[i]; 

  }

  for(int i=0; i<5;i++){
      precio += precioProducto[i];
      
  }
    descuento = precio/100;
    impuestoCerveza = precioProducto[4] * 1.05;
    subtotal = precio + impuestoCerveza - descuento;
    precioTotal = subtotal *1.12;
    

    cout << setw(30) << "FACTURA" << endl;
    cout << "\nNombre Cliente: " << nombreCliente << endl;
    cout << "Productos" << setw(45) << "CANTIDAD"  << setw(25) << "Precio" << endl;
    for (int i = 0; i < 5; i++){
        cout << "Producto número de la lista: "<< (i+1) << setw(20) << producto[i] << setw(28) << precioProducto[i] << endl;
        
    }
    
    cout << "Descuento: " << descuento << endl;
    cout << "Impuesto de Cerveza: " << impuestoCerveza << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "IVA: 12%" << endl;
    cout << "Precio Total: $" << precioTotal << endl;

  return 0;
}