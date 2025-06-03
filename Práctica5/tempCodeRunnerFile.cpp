#include <iostream>
#include <math.h>
using namespace std;

void par(int num);
int main(){
    int num;
    cout << "Digite el tamaño del mapa: ";
    cin >> num;
    if(num %2 == 0){
        par(num);
    }else{

    }


   return 0;
} 