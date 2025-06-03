#include <iostream>

using namespace std;

void segundo_despues(float x, float y, float z, bool& valor);
int main(){
    float hora, minutos, segundo;
    bool valor = false;
    
    cout << "Ingrese la hora: ";
    cin >> hora;
    cout << "Ingrese los minutos: ";
    cin >> minutos;
    cout << "Ingrese los segundos: ";
    cin >> segundo;
    cout << "Hora ingresada: ";
        if(hora < 10){
            cout << "0";
        }
        cout << hora << ":";
        if(minutos < 10){
            cout << "0"; 
        }
        cout << minutos << ":";
        if(segundo < 10){
            cout << "0";
        }
        cout << segundo << endl;

    cout <<  "Hora un segundo despues: " ;
    segundo_despues(hora, minutos, segundo, valor);
    
   
   return 0;
}    

void segundo_despues(float x, float y, float z, bool& w){
    if((x < 24 && y < 60 && z < 60) && (x >= 0 && y >= 0 && z >= 0  )){
        z += 1;
        if(z == 60){
            z = 0;
            y += 1;
            if(y == 60){
                y = 0;
                x +=1;
                if(x == 24){
                    x = 0;
                } 

            }
        }
        w = true;
        if(x < 10){
            cout << "0";
        }
        cout << x << ":";
        if(y < 10){
            cout << "0"; 
        }
        cout << y << ":";
        if(z < 10){
            cout << "0";
        }
        cout << z << endl;

    }else{
        w = false;
        cout << "valores incorrectos" << endl;    
    }    
}
