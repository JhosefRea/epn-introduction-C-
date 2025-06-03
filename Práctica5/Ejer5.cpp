#include <iostream>

using namespace std;
bool capicua(int y, bool& numero);
long int inverso(int x);
int main(){
    long int numero;
    bool num = false, capiCua;

    do{
        cout << "\nDigite un número: ";
        cin >> numero;
        if(numero >0){       
            cout << "Invertido: " << inverso(numero) << endl;
             capiCua = capicua(numero, num);
            if(num == true){
                cout << "Es un número capicúa" << endl; 
            }else{
                cout << "No es capicúa" << endl;
            }
        }
        
    }while(numero > 0);
    cout << "Ha digitado un número negativo o cero" << endl;
   
   return 0;
}    

long int inverso(int x){
    long int invertido = 0, resto;
    while(x > 0){
        resto = x % 10;
        x /= 10;
        invertido = invertido *10 + resto;         
    }
    return invertido;
}

bool capicua(int y, bool& numero){ 
    if(y == inverso(y)){
        numero = true;
    }else{
        numero = false;
    }
    return numero;
}