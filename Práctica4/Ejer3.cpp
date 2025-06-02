#include <iostream>

using namespace std;


const float Vestido = 80;
const float Zapato = 50; 
const float Cartera = 40;

void pedirDatos(int&, int&, int&);
double calculos(int x, int y, int z, int& totalPrendas, double& compraParcial);


double totalCompra = 0;
int totalPrendas = 0;
double compraParcial = 0;
int main(){
    int  numVestidos = 0, numZapatos = 0, numCartera = 0;

    pedirDatos(numVestidos, numZapatos, numCartera);
    totalCompra = calculos(numVestidos, numZapatos, numCartera, totalPrendas, compraParcial);
    cout << "El total de vestidos es: " << numVestidos << endl;
    cout << "El total de zapatos es: " << numZapatos << endl;
    cout << "El total de carteras es: " << numCartera << endl;
    cout << "El total de prendas es: " << totalPrendas << endl;
    cout << "La Subotal es: " << compraParcial << endl;
    cout << "El total de compra es: " << totalCompra << endl;

   return 0;
}

void pedirDatos(int& numVestidos, int& numZapatos, int& numCartera){
    
    while(numVestidos <= 0 || numZapatos <=0 || numCartera <=0){
        cout << "Ingrese el total de vestidos a comprar: ";
        cin >> numVestidos;
        cout << "Ingrese el total de zapatos a comprar: ";
        cin >> numZapatos;
        cout << "Ingrese el total de carteras a comprar: ";
        cin >> numCartera;
        if(numCartera < 0 || numZapatos < 0 || numVestidos < 0){
            cout << "Ha ingresado algún valor no válido" << endl;
        }
    }
    calculos(numVestidos, numZapatos, numCartera, totalPrendas, compraParcial); 
}

double calculos(int x, int y, int z, int& totalPrendas, double& compraParcial){
    totalPrendas = x+y+z;
    compraParcial = x * Vestido + y * Zapato + z * Cartera;
    
    if(totalPrendas > 10 && totalPrendas < 20){
        totalCompra = compraParcial * 0.9; 
    
    }else if(totalPrendas > 20 && totalPrendas < 30){
        totalCompra = compraParcial * 0.8;

    }else if (totalPrendas > 30){
        totalCompra = compraParcial * 0.6;

    }else{
        cout << "No recibe descuento" << endl;
        totalCompra = compraParcial;
    }
    return totalCompra;     
}
