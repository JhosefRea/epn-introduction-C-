#include <iostream>
using namespace std;

int main(){
   int numeros[3];
   int aux;
   for(int i = 0; i < 3; i++){
       cout << "Digite  el número entero " << i + 1 << "): ";
       cin >> numeros[i];

   }
   for (int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++ ){
           if(numeros[j+1] < numeros[j]){
           aux = numeros[j];
           numeros[j] = numeros[j+1];
           numeros[j+1] = aux;
          }
       }
       
   }
   cout << "Los números ordenados de forma ascendente son: "<< endl;
   int j =0;
   char comas[] = {',', ',', '.'};
    while(j !=3){
           cout << numeros[j] << comas[j];
          j++;
    }
   cout << endl; 
    return 0;
}