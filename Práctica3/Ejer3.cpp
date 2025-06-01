#include <iostream>
using namespace std;

int main(){
    double operando1, operando2, resultado = 0 ;
    char operador;
    char operadores[4] = {'+', '-', '*', '/'};

    cout << "Operando " <<  "Operador " << "Operando: " ;
    cin >> operando1 >> operador >> operando2;
    
    if(operador == operadores[0]){
        resultado = operando1 + operando2;
        cout << operando1 << " " << operador << " " << operando2 << "=" << " " << resultado << endl;

    }else if(operador == operadores[1]){
        resultado = operando1 - operando2;
        cout << operando1 << " " << operador << " " << operando2 << "=" << " " <<resultado << endl;

    }else if(operador == operadores[2]){
        resultado = operando1 * operando2;
        cout << operando1 << " " << operador << " " << operando2 << "=" << " " << resultado << endl;

    }else  if(operador == operadores[3]){
                if (operando2 != 0){
                    resultado = operando1 / operando2;
                    cout << operando1 << " " << operador << " " << operando2 << "=" << " "<< resultado << endl;

                }else{
                    cout << "No existe división para cero" << endl;
                }
    }

    return 0;
}