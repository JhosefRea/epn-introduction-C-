#include <iostream>

using namespace std;

int main(){
    float suma = 0;
    for (int i  = 100; i <= 200; i++ ){
        if(i % 9 == 0){
            suma += i; 
        }    
    }
    cout << "La suma de los enteros entre 100 y 200, divisibles para 9 es: " << suma << endl;
   
   return 0;
}