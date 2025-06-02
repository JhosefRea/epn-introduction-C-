#include <iostream>
using namespace std;

float cambio(int x);
double venta(int y);
float precio;
int main(){
    int num = 0, producto, cantidad;
    double total = 0;
    cout << "Nuestros productos y precios son los siguientes: " << endl;
    cout << "Producto1) $2.98" << endl;
    cout << "Producto2) $4.50" << endl;
    cout << "Producto3) $9.98" << endl;
    cout << "Producto4) $4.49" << endl;
    cout << "Producto5) $6.87" << endl; 

    while(num != 2){
        cout << "Digite el número del producto: ";
        cin >> producto;
        cout << "Digite la cantidad vendida: ";
        cin >> cantidad;
        cambio(producto);
        total = venta(cantidad);
        cout << "El total de venta es: " << total << endl;

        return 0;

    }
       
}    
    float cambio(int x){
        cout << "Cambio de precio del producto número " << x << endl;
        cout << "Digite el nuevo precio: ";
        cin >> precio;
        return precio;
    }    

    double venta(int y){
        float x = precio;
        double totalVenta = 0;
        totalVenta = x * y;
        return totalVenta;
    }

    
