#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
   double precio, precioparcial = 0, subtotal = 0, iva=0, precioTotal = 0, descuento =0;;
   int unidad;
   char letra;
   string nombreCliente, direccion, cedula, nombreProducto;

   cout << "Ingrese el precio del producto: ";
   cin >> precio;
   cout << "Ingrese las unidades del producto: ";
   cin >> unidad;
   cout << "Descuento(s/n)? : ";
   cin >> letra;
   cout << "Ingrese su nombre:" ;
   cin >> nombreCliente;
   cout << "Ingrese su cédula: ";
   cout.flush();
   cin >> cedula;
   cout << "Ingrese su diección: ";
   cin >> direccion;
   cout << "Ingrese el nombre del producto: ";
   cin >> nombreProducto;

    precioparcial = precio * unidad;

    if(letra == 's' || letra == 'S'){
        subtotal = precioparcial * 0.85;
        descuento = subtotal - precioparcial;
        iva = subtotal * 0.12;
        precioTotal = subtotal * 1.12;
        
    
    }else if(letra == 'n' || letra == 'N'){
        cout << "No Tiente descuento" << endl;
        iva = precioparcial * 0.12;
        precioTotal = precioparcial * 1.12;
       
    }else{
        cout << "Contestó mal al descuento " << endl;
        precio = 0;
        precioparcial = 0;
        unidad = 0;
    }

   cout << "\nFACTURA\n";  
   cout << setw(40) << nombreCliente << endl;
   cout << setw(40) << direccion << endl;
   cout << setw(40) << cedula << endl;
   cout << "Producto: " << nombreProducto << endl;
   cout << "Precio unitario \n" << setw(40) << fixed << setprecision(2) << precio  << endl; 
   cout << "Unidades \n" << setw(40) << fixed << setprecision(2) << unidad << endl;
   cout << "subtotal \n" << setw(40) << fixed << setprecision(2) << precioparcial << endl;
   cout << "Descuento \n" << setw(40) << fixed << setprecision(2) << descuento << endl;
   cout << "Total tras descuento \n" << setw(40) << fixed << setprecision(2) << subtotal << endl; 
   cout << "I.V.A. \n" << setw(40) << fixed << setprecision(2) << iva << endl;
   cout << "Precio final \n" << setw(40) << fixed << setprecision(2) << precioTotal << endl;

    return 0;
}




