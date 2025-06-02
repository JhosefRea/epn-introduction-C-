#include <iostream>

using namespace std; 

int main() {
 double calificaciones [3];
 double sumaPromedio=0, promedio;

 for(int i = 0; i < 3 ;i ++){
     cout << "Digite su calificación " << (i + 1) << ":";
     cin >> calificaciones[i];
    sumaPromedio += calificaciones[i]; 
 }
  
  promedio = sumaPromedio / 3;

  if(promedio == 10){
      cout << "Tu promedio es A" << endl;

  }else if(promedio == 9){
      cout << "Tu promedio es B" << endl;

  }else if(promedio == 8){
      cout << "Tu promedio es C" << endl;
  }
  else{
      cout << "REPROBADO";

  }


  return 0;
}