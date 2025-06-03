/*Calificaciones Realizar un programa que permita ingresar un número determinado de
calificaciones (max 50), donde el usuario decida cuando terminar de ingresar calificaciones.
Además, usando los diferentes algoritmos permita agregar, buscar, eliminar, insertar y ordenar
dichas calificaciones.*/
#include <iostream>
using namespace std;

const int MAX = 50;

float* pedirDatos(float x[MAX], float& cont);
float* ordenar(float x[MAX], float& k);
void buscar(float *&elemento, float y);
void insertar(float *inserta, float nums[], float k);
void eliminar(float *elimina, float& k );


int main(){
    float *ptrOrdenar;
    float notas[MAX], igualValor[MAX];
    float cont=0;
    ptrOrdenar = ordenar(notas, cont);
    cout << "\n----------------------"<< endl;
    for(int i =0; i < cont; i++){
        //cout << *(ptrOrdenar+i) << "\t";
        igualValor[i] = *(ptrOrdenar+i);
    } 

    buscar(ptrOrdenar, cont);

    insertar(ptrOrdenar, igualValor, cont);
  //  eliminar(ptrOrdenar, cont);

   return 0;
} 

float* pedirDatos(float x[MAX], float& cont){
    char opc = '7';  
    static float numero[MAX];
    while(opc != '*'){
        for(int i = cont; i < cont+1; i++){
            cout << "Digite la nota " << i+1 << ": ";
            cin >> x[i];
            if(x[i] >= 0){
                numero[i] = x[i];
                
            }else{
                cout << "Dato inválido" << endl;
                cont --;
            }
            
        }
        cont ++;
        cout << "Digite '*' para salir, sino cualquier tecla: ";
        cin >> opc; 
    }
    return numero;
}

float* ordenar(float x[], float& k){
    int aux, min;
    float *ptr = pedirDatos(x, k);
    for(int i = 0; i < k; i++){
        min = i;
        for(int j = i+1; j < k; j++){
            if(*(ptr+j) < *(ptr+min)){
                min = j;
            }
        }
        aux = *(ptr+i);
        *(ptr+i) = *(ptr+min);
        *(ptr+min) = aux;
    }
    
    cout << "\nNotas ordenadas: \n";
    for(int i = 0; i < k; i++){
        cout << *(ptr+i) << "\t";
        x [i] = *(ptr+i);
    }
    return x;
}

void buscar(float *&elemento, float k){
    float num;
    bool ok = false; 
    cout << "\nDigite el elemento a buscar: ";
    cin >> num;
    for(int i = 0; i < k; i++){
        if(*(elemento+i) == num){
            cout << "El elemento " << *(elemento+i) << " existe y está en la posición: " << i << endl;
            ok = true;
            i = k;
        }
    }
    if(!ok){
        cout << "Elemento no encontrado" << endl;
    }
}

void insertar(float *inserta, float nums[], float k){
    float x;
    int pos;
    cout << "Digite el número que desee ingresar al array: ";
    cin >> x;
    do{
        cout << "Digite la posición en la que desea ingresar: ";
        cin >> pos;
        if(pos < 0 || pos >= k){
            cout << "Dato inválido" << endl;
        }

    }while(pos < 0 || pos >= k);
    
    for(int i = k; i >= pos; i--){
        nums[i+1] = nums[i];
        
    }
    nums[pos] = x;
    *(inserta+pos) = x;

    
    for(int i = 0; i <= k; i++){
        cout << nums[i] << "\t";
    }
    k++;
    eliminar(nums, k);
    
}

void eliminar(float *elimina, float& k ){
    int pos, min, aux;
    cout << "\nARREGLO" << endl;
    for(int i = 0; i < k; i++){
        cout << *(elimina+i) << "\t";
    }
    do{
        cout << "\nDigite la posición del elemento a eliminar: ";
        cin >> pos;
        if(pos < 0 || pos >= k){
            cout << "Dato inválido" << endl;
        }
    }while(pos < 0 || pos >= k);
    

    int i = 0;
    for(int i = 0; i < k; i++){
        if(i == pos){
            while(i < k){
                *(elimina+i) = *(elimina+i+1);
                i++;
            }
            break;
        }
    }
    k--;

    cout << "Nuevo arreglo: " << endl;
    for(int i = 0; i < k; i++){
        cout << *(elimina+i) << "\t";
    }

    for(int i = 0; i < k; i++){
        min = i;
        for(int j = i+1; j < k; j++){
            if(*(elimina+j) < *(elimina+min)){
                min = j;
            }
        }
        aux = *(elimina+i);
        *(elimina+i) = *(elimina+min);
        *(elimina+min) = aux;
    }
    
    cout << "\nNotas ordenadas: \n";
    for(int i = 0; i < k; i++){
        cout << *(elimina+i) << "\t";
    }
    cout << endl;
}
