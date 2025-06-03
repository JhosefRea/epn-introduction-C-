#include <iostream>
#include <math.h>
using namespace std;

int cifras[] = { 0 };
int main(){
    int  numero = 0, divisor = 0, suma = 0;
    int resultado = 0, cont=0, j=0;
    int num[] = { 0 }; 
    for(int i = 100; i < 1000 ; i++){
        if((i % 9 == 0 && i %17 == 0) || ( i % 37 == 0 && i % 11 == 0) || ( i % 37 == 0 && i % 10 == 0)){       
            while(j <= cont){
                num[j] =i;
                cifras[j] = i;
                j++;
               
            }
            cont++;   
        }              
    }
    cout << "Cantidad de úmeros posibles: "<<cont<< endl;
    int x[cont];
    cout << "Los números son: \n";

    for(int i = 0; i < cont; i++){
        while(num[i] > 0 ){
            resultado = num[i] % 10;
            num[i] /= 10; 
            divisor++;
            /*if(divisor <= 3){
               cout << resultado << " - "; //Los dígitos de cada número se imprimen al revés
                
            }*/

            if(divisor < 4){
                suma += pow(resultado, 3);
                if(divisor == 3){
                    for(int i = 0; i < cont; i++){ 
                        if(suma == cifras[i]){
                            cout << cifras[i];
                        }
                    }
                    cout << endl;
                    numero ++;
                    divisor = 0;
                    suma = 0;
                }   
            }
           
        }
    }
   
   return 0;
}

