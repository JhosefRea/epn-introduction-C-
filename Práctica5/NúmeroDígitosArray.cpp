#include <iostream>
using namespace std;

int main(){
    int n[3] ={7450, 4505, 108};
    int cifras[4];
    int l =0;
    int i =0;
while( i <3){
    
    while(n[i] != 0){
        cifras[l] =(n[i] %10);
        n[i] /=  10;
        l++;
    } 
    i++;           
}   
cout << l << endl ;
    for(int j = l-1 ; j >= 0; j--){
        cout << cifras[j] << endl;
    }
     /*for(int j = 0 ; j < 7; j++){
        cout << cifras[j] << endl;
    }*/
        
    return 0;
}