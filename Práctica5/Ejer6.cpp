#include <iostream>
#include <math.h>
using namespace std;
void pedirDatos(int hora, int minutos, int segundo);
void imprimir(int hora, int minutos, int segundo);
long int segundoTime(int x, int y, int z);

int j = 0;
long int valor = 0; 
int main(){
    int  hora, minutos, segundo;
    bool valor = false;
    pedirDatos(hora, minutos, segundo);

    return 0;
}    

void pedirDatos(int hora, int minutos, int segundo){
    do{
        cout << "Ingrese la hora: ";
        cin >> hora;
        if(hora > 12){
            cout << "Debe estar dentro de un ciclo de 12 horas\n";
        }
    }while(hora <= 0|| hora > 12);
    
    do{
        cout << "Ingrese los minutos: ";
        cin >> minutos;
        cout << "Ingrese los segundos: ";
        cin >> segundo;
        if(minutos > 60 || segundo > 60 || minutos < 0 || segundo < 0){
            cout << "Datos inválidos\n";
        }
    }while(minutos > 60 || segundo > 60 || minutos < 0 || segundo < 0);
    imprimir(hora, minutos, segundo);    
}

long int segundoTime(int x, int y, int z){
    long int sumaSegundos; 
     
    j++; 
    if(j > 0){
        if(j == 1){
            sumaSegundos = x*3600 + y*60 +z;
            valor = sumaSegundos;
        }
             
        if(j == 2){
            sumaSegundos = fabs((x*3600 + y*60 +z) - valor);         
       } 
    }
        
     
    return sumaSegundos;
}

void imprimir(int hora, int minutos, int segundo){
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
    switch(j){
        case 0:{
            cout << "El número de segundos transcurridos desde las 12:00:00 son: " 
                << segundoTime(hora, minutos, segundo) << endl;
            pedirDatos(hora, minutos, segundo);
            break;
        }
        case 1: {
            cout << "El número de segundos transcurridos desde la primera hora que ingresó son:  " 
                << segundoTime(hora, minutos, segundo) << endl;
            break;
        }
        default:
            break;

    }          
   
}