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
    string x[100][100];
    string y[100][100];
    string suma[100][100];

    for(int i =0; i < num; i++){
        for(int j =0; j < num; j++){
            if(i == 0 || j ==0 || i == num-1 || j == num-1){
               x[i][j] =  "*";
            }else{
                x[i][j] = " ";
            }
        }
            
       
    }
    for(int i =0; i < num; i++){
        for(int j =0; j < num; j++){
            if(i == 2 || j ==2 || i == num-3 || j == num-3){
               y[i][j] = "*";
            }else{
               y[i][j] = " ";
            }
        }            
    }
    for(int i =0; i < num; i++){
        for(int j =0; j < num; j++){
            suma[i][j] = x[i][j] +y[i][j];
        }

    }
    for(int i =0; i < num; i++){
        for(int j =0; j < num; j++){
            
                cout << suma[i][j];
            
                
            if(i==num/2  && j==num/2 ){
                cout << "*";
            }
            
        }
        cout << endl;

    }

   

}   