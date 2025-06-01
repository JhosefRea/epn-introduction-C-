#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

const double G = 6.67e-11;
const double Metro = 0.01; 
const double Kg = 1e3; 

double conversion(double& x, double& y, double& z);
int main(){
    double masa1, masa2, distancia, fuerza;
    cout << "Ingrese la masas cuerpo 1 en [Ton]: ";
    cin >> masa1;
    cout << "Ingrese la masas cuerpo 2 en [Ton]: ";
    cin >> masa2;
    cout << "Introduzca distancia entre ellos en [cm]: ";
    cin >> distancia;

    (masa1, masa2, distancia) = conversion(masa1, masa2, distancia);
    fuerza = G * masa1 * masa2/pow(distancia, 2);
    cout << "Fuerza de atracción es: " << fixed << setprecision(6) << fuerza << " [N]" << endl; 

    return 0;
}

double conversion(double& x, double& y, double& z){
    x *= Kg;
    y *= Kg;
    z *= Metro; 
    return (x , y ,z);
}