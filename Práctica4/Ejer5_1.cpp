#include <iostream>
#include <iomanip>
using namespace std;


double venta(int , int);

int main(){
    int  producto = 0, cantidad, num = 0;
    double total = 0, preciofinal = 0;
    double vendidos[2];
    cout << "Nuestros productos y precios son los siguientes: " << endl;
    cout << "Producto1) $2.98" << endl;
    cout << "Producto2) $4.50" << endl;
    cout << "Producto3) $9.98" << endl;
    cout << "Producto4) $4.49" << endl;
    cout << "Producto5) $6.87" << endl; 
    cout << "Digite (-1) para salir: " << endl;

    while(producto != -1){
        cout << "Digite el número del producto: ";
        cin >> producto;
        
        if(producto <=5 && producto >= 1){
            cout << "Digite la cantidad vendida: ";
            cin >> cantidad; 
            total = venta(producto,cantidad);
            cout << "El total de venta es: " << total << endl;
            preciofinal += total;
            
           /* num++;    
            for(int i = 0; i < num ; i++ ){
                vendidos[i] = total;
            }*/

        }else{
            cout << "Valor inválido" << endl;
        }

    }
   /* for(int i = 0; i < num ; i++ ){
        preciofinal +=  vendidos[i];
    }*/
    cout << "El precio final es: " << fixed << setprecision(2) << preciofinal << endl;

    return 0;
       
}     

    double venta(int y, int x){
        double totalVenta = 0;
        switch(y){
            case 1: 
                totalVenta = x *2.98;
                break;

            case 2: 
                totalVenta = x *4.5;
                break;

            case 3: 
                totalVenta = x *9.98;
                break;

            case 4: 
                totalVenta = x *4.49;
                break;

            case 5: 
                totalVenta = x *6.87;
                break;    
        }
        return totalVenta;
    }
