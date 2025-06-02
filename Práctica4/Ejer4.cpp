#include <iostream>

using namespace std;

void opcion(int& opc, float& calif);
string estado(int& opc, float& calif, string& cupo);

string cupo = "ab";
int main(){
    int opc = 0;
    float calif = 0;
    string letra, carreras[4] = {"Ingeniería", "Medicina", "Licenciatura", "Técnico"};

    opcion(opc, calif);
    letra = estado(opc, calif, cupo);
    if(letra == "Aceptado"){
        cout << "Ha obtenido un cupo en: " << carreras[opc-1] << endl;
        cout << "Su nota es: " << calif << endl;
        cout << letra << endl; 

    }else{
        cout << "No aceptado" << endl;
    }
    
   
   return 0;
}

void opcion(int& opc, float& calif){
    int i = 0;
    
    while(opc >= 5 || opc <= 0){
        cout << "1. Ingeniería" << endl;
        cout << "2. Medicina" << endl;
        cout << "3. Licenciatura" << endl;
        cout << "4. Técnico" << endl;
        cout << "Digite el número de opción: ";
        cin >> opc; 
        
        while((opc < 5 && opc >=0) && i <1){
            cout << "Digite la calificación obtenida: ";
            cin >> calif;
            i++;
        }

    }
    estado(opc, calif, cupo);
}

string estado(int& opc, float& calif, string& cupo){
    string a = "Aceptado";
    string b = "No Aceptado";
    switch(opc){
        case 1: 
                if(calif >= 8.8){
                    cupo = a;

                }else{
                    cupo = b;
        
                }
            break;    
        case 2:
                if(calif > 8.5){
                    cupo = a;

                }else{
                    cupo = b;
                }
            break;    
        case 3:
                if(calif >= 8.3){
                    cupo = a;

                }else{
                    cupo = b;
                }
            break;    

        case 4:
                if(calif >= 7.8){
                    cupo = a;

                }else{
                    cupo = b;
                }
            break;    
    }
    return cupo;
}


