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

void par(int num){
    num++;
    for(int i =0; i < num; i++){
        cout << " *";
    }
    cout << endl;
    for(int i =0; i < num-2; i++){
        cout << " *";
        for(int j =0; j < num-2; j++){
            cout << "  ";            
        }
        cout << " *" << endl;;        
    }
    for(int i =0; i < num; i++){
        cout << " *";
    }
}