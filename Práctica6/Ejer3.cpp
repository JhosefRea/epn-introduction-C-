/*Use un arreglo unidimensional para resolver el siguiente problema. Recibir como
entrada 20 números, cada uno de los cuales debe estar entre 10 y 100, inclusive. A medida que se
lea cada número, validarlo y almacenarlo en el arreglo, sólo si no es un duplicado de un número
ya leído. Después de leer todos los valores, mostrar sólo los valores únicos que el usuario
introdujo. Prepárese para el “peor caso”, en el que los 20 números son diferentes. Use el arreglo
más pequeño que sea posible para resolver este problema.*/
#include <iostream>
using namespace std;

const int MAX = 20;
void pedirDatos(float x[MAX]);


int main(){
    float numeros[MAX];
    pedirDatos(numeros);
    
   return 0;
}

void pedirDatos(float x[MAX]){
    float valorValido;
    float y[MAX];
    int num = 0, cont = 0;
    bool duplicado = false;
    for(int i = 0; i < MAX; i++){
        cout << "Digite el elemento " << i+1 << ": ";
        cin >> valorValido;
        cont ++;
        if(valorValido <= 100 && valorValido >=10){
            x[i] = valorValido;          
        }else{
            cout << "valor fuera del rango" << endl;
            i --;
        }
    }
    for(int i = 0; i < MAX; i++){     
        for(int j = i+1; j < MAX; j++){
            if(x[i] == x[j] ){
                x[i] = 0;
                 num++;
            }
        }
    }

    cout << "\nArray con ceros en elementos iguales:\n";
    for(int i = 0; i < MAX; i++){
        cout << x[i] << "\t";
    }

    for(int i = 0; i < MAX; i++){
        if(x[i] == 0){
            while(i < MAX-1){
                x[i] = x[i+1];
                i++;
                
            }
            break;
        }
    }
    cout << "\nArray sin elementos repetidos:\n";
    cout << "Total de número repetido: " <<  num << endl;
    for(int i = 0; i < MAX - num; i++){
        cout << x[i] << "\t";
    }
}