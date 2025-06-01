#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int multiplicacion[10];
    int numero, i;
    
    cout << "TABLA DE MULTIPLICACIÓN" << endl;
    cout << "Ingrese un número entre 1 y 100: ";
    cin >> numero;

    i = 0;
    while(numero > 0 && i <10){
            multiplicacion[i] = (i + 1) * numero;
            i++;
    }

    if(numero > 0 && numero <= 100){
        cout << "\n" << setw(10) << "TABLA" << " DE MULTIPLICACIÓN DEL NÚMERO: " << numero << endl;
        for(int i = 0; i < 10; i++){
            cout << i + 1 << " * " << numero << " = " << multiplicacion[i] << endl; 
        }
    }else{
        cout << "El número no pertencece al intervalo" << endl;

    }
    return 0;
}
