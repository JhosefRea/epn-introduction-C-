#include <iostream>
#include <cstdlib>
using namespace std;

const int MAXI = 36000;
void dados();

int main(){
    dados();
    cout << "En cada lanzamiento se comprueba que la suma de los 2 dados en cada tiro que sea '7', es " 
         << "aproximadamente la sexta parte de 36000."
        <<"\n y respecto a la suma de 2 y 12 están entre un intervalo [1/35, 1/37] del total de tiros. " << endl;
    
   return 0;
} 

void dados(){
    int x, y;
    int numeros[MAXI];
    int sumas[11] = { 0 };
    srand((unsigned)time(NULL));
   
    for(int j = 0; j < MAXI; j++){
        x = 1 + rand() % ((6+1) - 1);
        y = 1 + rand() % ((6+1) - 1);
        numeros[j] = x+y;
    }
       
    for(int i = 0; i < MAXI; i++){
        if(numeros[i] == 2){
            sumas[0] += 1; 
        }else if(numeros[i] == 3){
            sumas[1] += 1;
        }else if(numeros[i] == 4){
            sumas[2] += 1;
        }else if(numeros[i] == 5){
            sumas[3] += 1;
        }else if(numeros[i] == 6){
            sumas[4] += 1;
        }else if(numeros[i] == 7){
            sumas[5] += 1;
        }else if(numeros[i] == 8){
            sumas[6] += 1;
        }else if(numeros[i] == 9){
            sumas[7] += 1;
        }else if(numeros[i] == 10){
            sumas[8] += 1;
        }else if(numeros[i] == 11){
            sumas[9] += 1;
        }else if(numeros[i] == 12){
            sumas[10] += 1;
        }
    }
    cout << "Suma Dados" << "\tTotal de la suma" << endl;
    for(int j = 0; j < 11; j++){
          cout << (j + 2) << "\t\t\t" <<  sumas[j] << endl;
    }
}   

