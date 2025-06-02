#include <iostream>

using namespace std;
int pedirDato(int& lado);

int main(){
    int lado;
    lado = pedirDato(lado);
    for(int i = 1 ; i <= lado ; i++){
        for(int j = 1; j <= lado; j++){
            if(i == 1 || i == lado || j == 1 || j == lado){
                cout << "*";

            }else{
                cout << " ";

            }           
        }
        cout << endl;
    }
    cout << endl;
   
   return 0;
}

int pedirDato(int& lado){
    do{
        cout << "Ingerese el tamaño del cuadrado: ";
        cin >> lado;
        if(lado <= 0){
            cout << "Este valor no es válido" << endl;
        }
        if(lado > 20){
            cout << "Sólo entre 1 y 20" << endl;
        }
    }while(lado > 20 || lado <= 0 );
    
    return lado;
}