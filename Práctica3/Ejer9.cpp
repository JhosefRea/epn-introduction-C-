#include <iostream>
#include <chrono>

using namespace std;
const float costo = 60;

int main(){
    char letra;
    cout << "Iniciar llamada: ";
    cin >> letra;
    cout << "Finalizar llamada: ";
    cin >> letra;
    auto start = chrono::system_clock::now();
    auto end = chrono::system_clock::now();

    chrono::duration<double, milli> duration = end - start;
    cout << "El costo de la llamada es: " << duration.count() * costo << " centavos" << endl; 

    return 0;
}