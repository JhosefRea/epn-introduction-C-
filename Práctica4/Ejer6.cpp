#include <iostream>

using namespace std;

int main(){
    int numeros;
    for(int i = 0; i < 5; i++){
        cout << "Ingrese el número: ";
        cin >> numeros;
        for(int j = 1; j <= numeros ; j++){
           cout << "*";
        }   
        cout << endl;
    }

   return 0;
}
