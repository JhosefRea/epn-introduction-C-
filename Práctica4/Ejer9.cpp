#include <iostream>

using namespace std;

int pedirDato();
int main(){
    int x;
    float factorial = 1;
    x = pedirDato();
    for(int i = x; i >=1 ; i--){
        factorial *= i;
    }
    cout << "El factorial de: " << x << " es: " << factorial << endl;

   return 0;
}

int pedirDato(){
    int num;
   
     do{
        cout << "Digite un número entero: ";
        cin >> num;
        if (num < 0){
            cout << "Debe ser positvo" << endl;
        }
    }while(num < 0);
    
    return num;
}