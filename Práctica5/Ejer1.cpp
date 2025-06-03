#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//double exponencial(int x, int y);
double potencia(int x, int y);
long int factorial(int y);
double exponencial(int x);


int main(){
    int num, y;
    cout << "Serie de Taylor\n";
    cout << "Digite el número: ";
    cin >> num;
    cout << "La serie de taylor es: " << fixed << setprecision(3)<< potencia(num, y =10) << endl;
    float t = potencia(num, y =10);
    cout<<"------------------"<<t<<endl;

    cout << "Función exponencial: " << exponencial(num) << endl;
    cout << "Como se esperaba son valores aproximados" << endl;
    cout << "O sii " <<t;
   return 0;
}   
long int factorial(int y){
    long int permuta = 1;
    for(int i = 1; i <= y; i++){
        permuta *= i; 
    }
    return permuta;
}

double  potencia(int x, int y){
    double taylor, suma = 0;
    for(int i = 0; i < y; i++ ){
        taylor = pow(x, i) / factorial(i);
        suma += taylor; 
    }
    return suma;
}

/*double exponencial(int x, int y){
    double sumataylor = 0, taylor;
    for(int i = 0; i < y; i++){
        taylor = potencia(x, i)/factorial(i);
        sumataylor += taylor;
    }    
    return sumataylor;
}*/

double exponencial(int x){
    double euler = 0;
    euler = exp(x);
    return  euler;
}

    
