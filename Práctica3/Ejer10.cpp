#include <iostream>
using namespace std;

void pedirDatos();
void valores(double real1, double real2, double real3);

double real1, real2, real3;

int main(){
    pedirDatos();
    valores(real1,  real2, real3);
    return 0;
}

void pedirDatos(){
    
    do{
        cout << "Digite 3 números reales: ";
        cin >> real1 >> real2 >> real3;

    }while(real1 <= 0 || real2 <= 0 || real3 <=0);
    cout << "Los números son positivos" << endl;
}

void valores(double real1, double real2, double real3){
        if((real1 + real2)> real3){
            cout << "Estos valores si pueden representar los lados de un triángulo." << endl;
        }else{
        cout << "Estos valores no pueden representar los lados de un triángulo." << endl;   
        }  
}    

