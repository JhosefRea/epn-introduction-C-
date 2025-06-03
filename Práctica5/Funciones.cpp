//JHOSEF REA

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void ejercicio1();
double potencia(int x, int y);
long int factorial(int y);
double exponencial(int x);

void ejercicio2();
void segundo_despues(float x, float y, float z, bool& valor);
void segundo_despues(float x, float y, float z, bool& valor);

void ejercicio3();
double hipotenusa(double x, double y);

void ejercicio4();

void ejercicio5();
bool capicua(int y, bool& numero);
long int inverso(int x);

void ejercicio6();
void pedirDatos(int hora, int minutos, int segundo);
void imprimir(int hora, int minutos, int segundo);
long int segundoTime(int x, int y, int z);

int j = 0;
long int valor = 0; 
int cifras[] = { 0 };
int main(){
    int opc;
    do{
        cout << "\nPráctica N° 5" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Ejercicio 4" << endl;
        cout << "5. Ejercicio 5" << endl;
        cout << "6. Ejercicio 6" << endl;
        cout << "7. Salir" << endl;
        cout << "Opción: ";
        cin >> opc;
        cout << endl;
        switch(opc){
            case 1: { 
                    ejercicio1();
                    break;
                }
            case 2: { 
                    ejercicio2();
                    break;
                }    
            case 3: { 
                    ejercicio3();
                    break;
                }
            case 4:{
                    ejercicio4(); // Este ejercicio genera un número que no cumple
                                // Si ejecuta pero genera una destrucción de la pila, no estoy seguro
                                //si esta es la causa Ingenniero.
                    break;
            }
            case 5:{
                    ejercicio5();
                    break;
            }
            case 6:{
                    ejercicio6();
                    break;
            }
            default:
                    cout << "Opción no válida" << endl;
        }
    }while(opc != 7);

    return 0;
}

// RESOLUCIÓN DEL EJERCICIO 1
void ejercicio1(){
    int num, y;
    cout << "Serie de Taylor\n";
    cout << "Digite el número: ";
    cin >> num;
    cout << "La serie de taylor es: "<< potencia(num, y =10) << endl;
    cout << "Función exponencial: " << exponencial(num) << endl;
    cout << "Son equivalentes en la parte entera. Sin embargo, difieren en sus decimales" << endl;

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

double exponencial(int x){
    double euler = 0;
    euler = exp(x);
    return  euler;
}

// RESOLUCIÓN DEL EJERCICIO 2
void ejercicio2(){
    float hora, minutos, segundo;
    bool valor = false;
    
    cout << "Ingrese la hora: ";
    cin >> hora;
    cout << "Ingrese los minutos: ";
    cin >> minutos;
    cout << "Ingrese los segundos: ";
    cin >> segundo;
    cout << "Hora ingresada: ";
        if(hora < 10){
            cout << "0";
        }
        cout << hora << ":";
        if(minutos < 10){
            cout << "0"; 
        }
        cout << minutos << ":";
        if(segundo < 10){
            cout << "0";
        }
        cout << segundo << endl;

    cout <<  "Hora un segundo despues: " ;
    segundo_despues(hora, minutos, segundo, valor);
}
void segundo_despues(float x, float y, float z, bool& w){
    if((x < 24 && y < 60 && z < 60) && (x >= 0 && y >= 0 && z >= 0  )){
        z += 1;
        if(z == 60){
            z = 0;
            y += 1;
            if(y == 60){
                y = 0;
                x +=1;
                if(x == 24){
                    x = 0;
                } 

            }
        }
        w = true;
        if(x < 10){
            cout << "0";
        }
        cout << x << ":";
        if(y < 10){
            cout << "0"; 
        }
        cout << y << ":";
        if(z < 10){
            cout << "0";
        }
        cout << z << endl;

    }else{
        w = false;
        cout << "valores incorrectos" << endl;    
    }    
}

// RESOLUCIÓN DEL EJERCICIO 3
void ejercicio3(){
    double trianguloLado1, trianguloLado2;
    int num = 1;
    int opc;
    do{
   
        do{
            cout << "Triángulo N°: " << num << endl;
            cout << "Digite el primer lado: ";
            cin >> trianguloLado1;
            cout << "Digite el segundo lado: ";
            
            cin >> trianguloLado2;
            if(trianguloLado1 > 0 && trianguloLado2 > 0){
                cout<< "Triángulo " << num << endl
                    << "Lado1 = " << trianguloLado1 << endl
                    << "Lado2 = " << trianguloLado2 << endl 
                    << "Hipotenusa = " << hipotenusa(trianguloLado1, trianguloLado2) << endl;
                cout << "Desea ingresar más datos?, Digite cualquier número\nDigite '0' para salir";
                cout << "\nOpción: ";
                cin >> opc;
                num++;
            
            }else{
                cout << "No existen estas dimensiones como unidades de longitud" << endl;
            } 

        }while(trianguloLado1 <= 0|| trianguloLado2 <=0);

    }while(opc !=0);    
                               
}
double hipotenusa(double x, double y){
    double hipotenusa;
    hipotenusa = sqrt(pow(x, 2) + pow(y, 2));
    return hipotenusa;
}

// RESOLUCIÓN DEL EJERCICIO 4
void ejercicio4(){
    int  numero = 0, divisor = 0, suma = 0;
    int resultado = 0, cont=0, j=0;
    int num[] = { 0 }; 
    for(int i = 100; i < 1000 ; i++){
        if((i % 9 == 0 && i %17 == 0) || ( i % 37 == 0 && i % 11 == 0) || ( i % 37 == 0 && i % 10 == 0)){       
            while(j <= cont){
                num[j] =i;
                cifras[j] = i;
                j++;
               
            }
            cont++;   
        }              
    }
    cout << "Cantidad de números posibles: "<<cont<< endl;
    cout << "Los números son: \n";

    for(int i = 0; i < cont; i++){
        while(num[i] > 0 ){
            resultado = num[i] % 10;
            num[i] /= 10; 
            divisor++;
            /*if(divisor <= 3){
               cout << resultado << " - "; //Los dígitos de cada número se imprimen al revés
                
            }*/

            if(divisor < 4){
                suma += pow(resultado, 3);
                if(divisor == 3){
                    for(int i = 0; i < cont; i++){ 
                        if(suma == cifras[i]){
                            cout << cifras[i];
                        }
                    }
                    cout << endl;
                    numero ++;
                    divisor = 0;
                    suma = 0;
                }   
            }
           
        }
    }
}

// RESOLUCIÓN DEL EJERCICIO 5
void ejercicio5(){
    long int numero;
    bool num = false, capiCua;
    do{
        cout << "\nDigite un número: ";
        cin >> numero;
        if(numero >0){       
            cout << "Invertido: " << inverso(numero) << endl;
             capiCua = capicua(numero, num);
            if(num == true){
                cout << "Es un número capicúa" << endl; 
            }else{
                cout << "No es capicúa" << endl;
            }
        }
        
    }while(numero > 0);
    cout << "Ha digitado un número negativo o cero" << endl;
}

long int inverso(int x){
    long int invertido = 0, resto;
    while(x > 0){
        resto = x % 10;
        x /= 10;
        invertido = invertido *10 + resto;         
    }
    return invertido;
}

bool capicua(int y, bool& numero){ 
    if(y == inverso(y)){
        numero = true;
    }else{
        numero = false;
    }
    return numero;
}

// RESOLUCIÓN DEL EJERCICIO 6
void ejercicio6(){
    int  hora, minutos, segundo;
    bool valor = false;
    pedirDatos(hora, minutos, segundo);
}
void pedirDatos(int hora, int minutos, int segundo){
    do{
        cout << "Ingrese la hora: ";
        cin >> hora;
        if(hora > 12){
            cout << "Debe estar dentro de un ciclo de 12 horas\n";
        }
    }while(hora <= 0|| hora > 12);
    
    do{
        cout << "Ingrese los minutos: ";
        cin >> minutos;
        cout << "Ingrese los segundos: ";
        cin >> segundo;
        if(minutos > 60 || segundo > 60 || minutos < 0 || segundo < 0){
            cout << "Datos inválidos\n";
        }
    }while(minutos > 60 || segundo > 60 || minutos < 0 || segundo < 0);
    imprimir(hora, minutos, segundo);    
}

long int segundoTime(int x, int y, int z){
    long int sumaSegundos; 
    j++; 
    if(j > 0){
        if(j == 1){
            sumaSegundos = x*3600 + y*60 +z;
            valor = sumaSegundos; 
        }
             
        if(j == 2){
            sumaSegundos = (x*3600 + y*60 +z) - valor;
       } 
    }    
    return sumaSegundos;
}

void imprimir(int hora, int minutos, int segundo){
    cout << "Hora ingresada: ";
    if(hora < 10){
        cout << "0";
    }
    cout << hora << ":";
    if(minutos < 10){
        cout << "0"; 
    }
    cout << minutos << ":";
    if(segundo < 10){
        cout << "0";
    }
    cout << segundo << endl;
    switch(j){
        case 0:{
            cout << "El número de segundos transcurridos desde las 12:00:00 son: " 
                << segundoTime(hora, minutos, segundo) << endl;
            pedirDatos(hora, minutos, segundo);
            break;
        }
        case 1: {
            cout << "El número de segundos transcurridos desde la primera hora que ingresó son:  " 
                << segundoTime(hora, minutos, segundo) << endl;
            break;
        }
        default:
            break;
    }             
}
