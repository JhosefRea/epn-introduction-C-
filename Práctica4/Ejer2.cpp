#include <iostream>
#include <math.h>
using namespace std;

int main(){
   double dinero, parteDecimal = 0, parteEntera;
   int decena = 0;
   char letra;
   double unidad = 0;
   int j = 0, i = 0, k = 0, l = 1;

   
   cout << "Digite la cantidad en $: ";
   cin >> dinero;

   parteDecimal = modf(dinero, &parteEntera); 
   decena = int (parteDecimal *10);
   unidad = (parteDecimal * 100) - decena * 10;

   cout << "Monedas de 1 dólar: " << parteEntera << endl;

   if(decena != 2 && decena < 5){
      while(j<decena){
       j++;
      }
      cout << "Monedas de 50 centavos: " << i << endl;
      cout << "Monedas de 25 centavos: " << i << endl;
      cout << "Monedas de 10 centavos: " << j << endl;
      cout << "Monedas de 5 centavos: " << i << endl;
      if(unidad !=0){
          cout << "Monedas de 1 centavo: " << unidad << endl;

      }else{
          cout << "Monedas de 1 centavo: " << "0" << endl;
      }
      
  
   
   }else if(decena >= 5){
        if (unidad  !=5){
            while(j < decena){
                j++;
            }
            i++;
            cout << "Monedas de 50 centavos: " << i << endl;
            cout << "Monedas de 10 centavos: " << j-5 << endl;
            cout << "Monedas de 25 centavos: " << k << endl;
            cout << "Monedas de 5 centavos: " << k << endl;
            cout << "Monedas de 1 centavo: " << unidad << endl;
        }
      
       
      switch (decena){  
            case 7:     k++;  
                        cout << "Monedas de 50 centavos: " << k << endl;
                        cout << "Monedas de 25 centavos: " << k << endl;
                        k--;
                        cout << "Monedas de 10 centavos: " << k << endl;
                        cout << "Monedas de 5 centavos: " << k << endl;
                        cout << "Monedas de 1 centavo: " << k << endl;
            break;
       }
      

   }else if (decena == 2){
            cout << "Monedas de 50 centavos: " << k << endl;
            k++;  
            cout << "Monedas de 25 centavos: " << k << endl;
            k--;
            cout << "Monedas de 10 centavos: " << k << endl;
            cout << "Monedas de 5 centavos: " << k << endl;
            cout << "Monedas de 1 centavo: " << k << endl;

   }

   return 0;
}
