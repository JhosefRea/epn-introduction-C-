//JHOSEF REA
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAXI = 36000;
const int MAX = 50;
const int MAXIMO = 100;
const int NETO = 20;

int menu(int op);

void ejercicio1();
float* pedirDatos(float x[MAX], float& cont);
float* ordenar(float x[MAX], float& k);
void buscar(float *&elemento, float y);
void insertar(float *inserta, float nums[], float k);
void eliminar(float *elimina, float& k );

void ejercicio2();
long int numero(long int& num);
int* inverso(long int x, int& cont);
int* entero(int x, int& cont);

void ejercicio3();
void pedirDatos(float x[MAX]);

void ejercicio4();
void dados();

int main(){
    int op;
    do{
        switch(menu(op)){
                case 1:{
                    ejercicio1();
                    cout << endl; 
                    system("read -p 'Presiona Enter para continuar...' var");
                    break;
                }
                case 2:{
                    ejercicio2();
                    cout << endl;
                    system("read -p 'Presiona Enter para continuar...' var"); 
                    break;
                }
                case 3:{
                    ejercicio3();
                    cout << endl;

                    system("read -p 'Presiona Enter para continuar...' var"); 
                    break;
                }
                case 4:{
                    ejercicio4();
                    cout << endl; 
                    system("read -p 'Presiona Enter para continuar...' var");
                    
                    break;
                }
                default: {
                    op = 5;
                    cout << "Fin del programa" << endl;
                    system("read -p 'Presiona Enter para continuar...' var"); 
                    break;
                }

        }
        system("clear");
    }while(op != 5);

   return 0;
} 

int menu(int op){
    do{
        cout<<"SELECIONE UNA OPCIÓN DEL MENÍ"<<endl;
        cout << "  1- Calificaciones " << endl;
        cout << "  2- Palíndromo " << endl;
        cout << "  3- Duplicados" << endl;
        cout << "  4- Dados" << endl;
        cout << "  5- Salir" << endl;
        cout<<  "  OPCION: ";
        cin >> op;
        if((op< 0) || (op > 5)){
            cout << "Opción no válida" << endl;
        }

    }while(op < 0|| op > 5);
    return op;

}
//EJERCICIO 1

void ejercicio1(){
    float *ptrOrdenar;
    float notas[MAX], igualValor[MAX];
    float cont=0;
    ptrOrdenar = ordenar(notas, cont);
    cout << "\n----------------------"<< endl;
    for(int i =0; i < cont; i++){
        igualValor[i] = *(ptrOrdenar+i);
    } 

    buscar(ptrOrdenar, cont);

    insertar(ptrOrdenar, igualValor, cont);
}

float* pedirDatos(float x[MAX], float& cont){
    char opc = '7';  
    static float numero[MAX];
    while(opc != '*'){
        for(int i = cont; i < cont+1; i++){
            cout << "Digite la nota " << i+1 << ": ";
            cin >> x[i];
            if((x[i] >= 0) && (x[i] <= 20)){
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

//EJERCICIO 2

void ejercicio2(){
    long int num;
    int cont = 0;
    bool palindromo = true;
    num = numero(num);
    int *ptrInverso = inverso(num, cont);
    
    int *ptrEntero = entero(num, cont);
    for(int i = 0; i < cont && palindromo; i++){
        if((*(ptrInverso+i) != *(ptrEntero+i)) ){
            palindromo = false;
        }   
    }
    if(palindromo){
        cout << "El número " << num << " es un palíndromo" << endl;

    }else{
        cout << "El número " << num << " no es un palíndromo" << endl;
    }

}

long int numero(long int& num){
    do{
        cout << "Digite un número: ";
        cin >> num;
        if(num < 0){
            cout << "Se requiere un entero positivo" << endl;
        }
    }while(num < 0);  

    return num;
}

int* inverso(long int x, int& cont){
    int invertido = 0, resto;
    static int num[MAXIMO];
    int i = 0;
    while(x > 0 && i <= cont){
        resto = x % 10;
        x /= 10;
        cont++;
        invertido = invertido *10 + resto;
        num[i] = resto;
        i++;        
    }
    return num;
}
int* entero(int x,  int& cont){
    int copia, divisor = 1;
    static int y[MAXIMO];
    copia = x;
    while(x/10 != 0){
        x /= 10;
        divisor *= 10;   
    }

    int i = 0;
    while(divisor != 0){
        y[i] = copia / divisor;
        copia %= divisor;
        divisor /= 10;
        i++;
    }
    return y;
}

//EJERCICIO 3

void ejercicio3(){
    float numeros[NETO];
    pedirDatos(numeros);

}
void pedirDatos(float x[NETO]){
    float valorValido;
    float y[NETO];
    int num = 0, cont = 0;
    bool duplicado = false;
    for(int i = 0; i < NETO; i++){
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
    for(int i = 0; i < NETO; i++){     
        for(int j = i+1; j < NETO; j++){
            if(x[i] == x[j] ){
                x[i] = 0;
                 num++;
            }
        }
    }

    cout << "\nArray con ceros en elementos iguales:\n";
    for(int i = 0; i < NETO; i++){
        cout << x[i] << "\t";
    }

    for(int i = 0; i < NETO; i++){
        if(x[i] == 0){
            while(i < NETO-1){
                x[i] = x[i+1];
                i++;
                
            }
            break;
        }
    }
    
    cout << "Total de número repetido: " <<  num << endl;
    cout << "\nArray sin elementos repetidos:\n";
    for(int i = 0; i < NETO - num; i++){
        cout << x[i] << "\t";
    }
}

//EJERCICIO 4

void ejercicio4(){
    dados();
    cout << "En cada lanzamiento se comprueba que la suma de los 2 dados en cada tiro que sea '7', es " 
         << "aproximadamente la sexta parte de 36000."
        <<"\n y respecto a la suma de 2 y 12 están entre un intervalo [1/35, 1/37] del total de tiros. " << endl;
}
void dados(){
    int x, y;
    int numeros[MAXI];
    int sumas[11] = { 0 };
    srand((unsigned)time(NULL));
   
    for(int j = 0; j < MAXI; j++){
        x = 1 + rand() % ((6+1) - 1);
        y = 1 + rand() % ((6+1) - 1);
        numeros[j] = x+y;
    }
       
    for(int i = 0; i < MAXI; i++){
        if(numeros[i] == 2){
            sumas[0] += 1; 
        }else if(numeros[i] == 3){
            sumas[1] += 1;
        }else if(numeros[i] == 4){
            sumas[2] += 1;
        }else if(numeros[i] == 5){
            sumas[3] += 1;
        }else if(numeros[i] == 6){
            sumas[4] += 1;
        }else if(numeros[i] == 7){
            sumas[5] += 1;
        }else if(numeros[i] == 8){
            sumas[6] += 1;
        }else if(numeros[i] == 9){
            sumas[7] += 1;
        }else if(numeros[i] == 10){
            sumas[8] += 1;
        }else if(numeros[i] == 11){
            sumas[9] += 1;
        }else if(numeros[i] == 12){
            sumas[10] += 1;
        }
    }
    cout << "Suma Dados" << "\tTotal de la suma" << endl;
    for(int j = 0; j < 11; j++){
          cout << (j + 2) << "\t\t\t" <<  sumas[j] << endl;
    }
}   





