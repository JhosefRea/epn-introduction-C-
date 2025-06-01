#include <iostream>
#include <iomanip>
using namespace std;

int sumar(int x, int y, int z);
float promediar(int x, int y, int z);
float producto (int x, int y, int z);
void comparacion(int x, int y, int z);

int main(){
    int entero1, entero2, entero3; 
    int i;
    i = 0;
    do{ 
        cout << "Digite 3 números: ";
        cin >> entero1 >> entero2 >> entero3;
        i++;
    }while(entero1 == entero2 || entero2 == entero3 || entero1 == entero3);
       
    cout << "La suma es: " << sumar(entero1, entero2, entero3) << endl;
    cout << "El promedio es: " << promediar(entero1, entero2, entero3) << endl;
    cout << "El producto es: " << producto(entero1, entero2, entero3) << endl;
    comparacion(entero1, entero2, entero3);

    return 0;
}

int sumar(int x, int y, int z){
    int suma = x + y + z;
    return suma;
}

float promediar(int x, int y, int z){
    float promedio = (x +y + z)/3;
    return promedio;
}

float producto (int x, int y, int z){
    float multipicacion = x * y * z;
    return multipicacion;
}

void comparacion(int x, int y, int z){
    int numeros[3] = {x,y,z};
    int  menor = 0, mayor = 0;
    for(int i = 0; i < 3 ; i++){
        if (numeros[i] > mayor){
        mayor = numeros[i];
        }
        if(i == 0){
            menor = numeros[i];
        }else if(numeros[i] < menor){
            menor = numeros[i];
        }
    }
    cout << "El número más pequeño es: " << menor << endl;
    cout << "El número más grande es: " << mayor << endl;
}
