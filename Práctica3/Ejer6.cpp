#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    cout << "Números" << setw(15) << "Cuadrados" << setw(10) << "Cubos" << endl;
    for(int i=0; i < 10; i++){
        cout << i << "." << setw(15) << pow(i, 2) << setw(12) << pow(i,3) << endl;
    }
    return 0;
}