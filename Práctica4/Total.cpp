// EJERCICIO 1

/*#include <iostream>
using namespace std;

int main(){
   int numeros[3];
   int aux;
   for(int i = 0; i < 3; i++){
       cout << "Digite  el número entero " << i + 1 << "): ";
       cin >> numeros[i];

   }
   for (int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++ ){
           if(numeros[j+1] < numeros[j]){
           aux = numeros[j];
           numeros[j] = numeros[j+1];
           numeros[j+1] = aux;
          }
       }
       
   }
   cout << "Los números ordenados de forma ascendente son: "<< endl;
   int j =0;
   char comas[] = {',', ',', '.'};
    while(j !=3){
           cout << numeros[j] << comas[j];
          j++;
    }
   cout << endl; 
    return 0;
}*/


//EJERCICIO 2
/*
#include <iostream>
#include <math.h>
using namespace std;

int main(){
   double dinero, parteDecimal = 0, parteEntera;
   int decena = 0;
   char letra;
   double unidad = 0;
   int j = 0, i = 0, k = 0, l = 1;

   
   cout << "Digite la cantidad en $: ";
   cin >> dinero;

   parteDecimal = modf(dinero, &parteEntera); 
   decena = int (parteDecimal *10);
   unidad = (parteDecimal * 100) - decena * 10;

   cout << "Monedas de 1 dólar: " << parteEntera << endl;

   if(decena != 2 && decena < 5){
      while(j<decena){
       j++;
      }
      cout << "Monedas de 50 centavos: " << i << endl;
      cout << "Monedas de 25 centavos: " << i << endl;
      cout << "Monedas de 10 centavos: " << j << endl;
      cout << "Monedas de 5 centavos: " << i << endl;
      if(unidad !=0){
          cout << "Monedas de 1 centavo: " << unidad << endl;

      }else{
          cout << "Monedas de 1 centavo: " << "0" << endl;
      }
      
  
   
   }else if(decena >= 5){
        if (unidad  !=5){
            while(j < decena){
                j++;
            }
            i++;
            cout << "Monedas de 50 centavos: " << i << endl;
            cout << "Monedas de 10 centavos: " << j-5 << endl;
            cout << "Monedas de 25 centavos: " << k << endl;
            cout << "Monedas de 5 centavos: " << k << endl;
            cout << "Monedas de 1 centavo: " << unidad << endl;
        }
      
       
      switch (decena){  
            case 7:     k++;  
                        cout << "Monedas de 50 centavos: " << k << endl;
                        cout << "Monedas de 25 centavos: " << k << endl;
                        k--;
                        cout << "Monedas de 10 centavos: " << k << endl;
                        cout << "Monedas de 5 centavos: " << k << endl;
                        cout << "Monedas de 1 centavo: " << k << endl;
            break;
       }
      

   }else if (decena == 2){
            cout << "Monedas de 50 centavos: " << k << endl;
            k++;  
            cout << "Monedas de 25 centavos: " << k << endl;
            k--;
            cout << "Monedas de 10 centavos: " << k << endl;
            cout << "Monedas de 5 centavos: " << k << endl;
            cout << "Monedas de 1 centavo: " << k << endl;

   }

   return 0;
}
*/

//EJERCICIO 3
/*#include <iostream>

using namespace std;


const float Vestido = 80;
const float Zapato = 50; 
const float Cartera = 40;

void pedirDatos(int&, int&, int&);
double calculos(int x, int y, int z, int& totalPrendas, double& compraParcial);


double totalCompra = 0;
int totalPrendas = 0;
double compraParcial = 0;
int main(){
    int  numVestidos = 0, numZapatos = 0, numCartera = 0;

    pedirDatos(numVestidos, numZapatos, numCartera);
    totalCompra = calculos(numVestidos, numZapatos, numCartera, totalPrendas, compraParcial);
    cout << "El total de vestidos es: " << numVestidos << endl;
    cout << "El total de zapatos es: " << numZapatos << endl;
    cout << "El total de carteras es: " << numCartera << endl;
    cout << "El total de prendas es: " << totalPrendas << endl;
    cout << "La Subotal es: " << compraParcial << endl;
    cout << "El total de compra es: " << totalCompra << endl;

   return 0;
}

void pedirDatos(int& numVestidos, int& numZapatos, int& numCartera){
    
    while(numVestidos <= 0 || numZapatos <=0 || numCartera <=0){
        cout << "Ingrese el total de vestidos a comprar: ";
        cin >> numVestidos;
        cout << "Ingrese el total de zapatos a comprar: ";
        cin >> numZapatos;
        cout << "Ingrese el total de carteras a comprar: ";
        cin >> numCartera;
        if(numCartera < 0 || numZapatos < 0 || numVestidos < 0){
            cout << "Ha ingresado algún valor no válido" << endl;
        }
    }
    calculos(numVestidos, numZapatos, numCartera, totalPrendas, compraParcial); 
}

double calculos(int x, int y, int z, int& totalPrendas, double& compraParcial){
    totalPrendas = x+y+z;
    compraParcial = x * Vestido + y * Zapato + z * Cartera;
    
    if(totalPrendas > 10 && totalPrendas < 20){
        totalCompra = compraParcial * 0.9; 
    
    }else if(totalPrendas > 20 && totalPrendas < 30){
        totalCompra = compraParcial * 0.8;

    }else if (totalPrendas > 30){
        totalCompra = compraParcial * 0.6;

    }else{
        cout << "No recibe descuento" << endl;
        totalCompra = compraParcial;
    }
    return totalCompra;     
}
*/

//EJERCICIO 4
/*#include <iostream>

using namespace std;

void opcion(int& opc, float& calif);
string estado(int& opc, float& calif, string& cupo);

string cupo = "ab";
int main(){
    int opc = 0;
    float calif = 0;
    string letra, carreras[4] = {"Ingeniería", "Medicina", "Licenciatura", "Técnico"};

    opcion(opc, calif);
    letra = estado(opc, calif, cupo);
    if(letra == "Aceptado"){
        cout << "Ha obtenido un cupo en: " << carreras[opc-1] << endl;
        cout << "Su nota es: " << calif << endl;
        cout << letra << endl; 

    }else{
        cout << "No aceptado" << endl;
    }
    
   
   return 0;
}

void opcion(int& opc, float& calif){
    int i = 0;
    
    while(opc >= 5 || opc <= 0){
        cout << "1. Ingeniería" << endl;
        cout << "2. Medicina" << endl;
        cout << "3. Licenciatura" << endl;
        cout << "4. Técnico" << endl;
        cout << "Digite el número de opción: ";
        cin >> opc; 
        
        while((opc < 5 && opc >=0) && i <1){
            cout << "Digite la calificación obtenida: ";
            cin >> calif;
            i++;
        }

    }
    estado(opc, calif, cupo);
}

string estado(int& opc, float& calif, string& cupo){
    string a = "Aceptado";
    string b = "No Aceptado";
    switch(opc){
        case 1: 
                if(calif >= 8.8){
                    cupo = a;

                }else{
                    cupo = b;
        
                }
            break;    
        case 2:
                if(calif > 8.5){
                    cupo = a;

                }else{
                    cupo = b;
                }
            break;    
        case 3:
                if(calif >= 8.3){
                    cupo = a;

                }else{
                    cupo = b;
                }
            break;    

        case 4:
                if(calif >= 7.8){
                    cupo = a;

                }else{
                    cupo = b;
                }
            break;    
    }
    return cupo;
}
*/
// EJERCICIO 5
/* #include <iostream>
#include <iomanip>
using namespace std;


double venta(int , int);

int main(){
    int  producto = 0, cantidad, num = 0;
    double total = 0, preciofinal = 0;
    double vendidos[2];
    cout << "Nuestros productos y precios son los siguientes: " << endl;
    cout << "Producto1) $2.98" << endl;
    cout << "Producto2) $4.50" << endl;
    cout << "Producto3) $9.98" << endl;
    cout << "Producto4) $4.49" << endl;
    cout << "Producto5) $6.87" << endl; 
    cout << "Digite (-1) para salir: " << endl;

    while(producto != -1){
        cout << "Digite el número del producto: ";
        cin >> producto;
        
        if(producto <=5 && producto >= 1){
            cout << "Digite la cantidad vendida: ";
            cin >> cantidad; 
            total = venta(producto,cantidad);
            cout << "El total de venta es: " << total << endl;
            preciofinal += total;
            
        }else{
            cout << "Valor inválido" << endl;
        }

    }
  
    cout << "El precio final es: " << fixed << setprecision(2) << preciofinal << endl;

    return 0;
       
}     

    double venta(int y, int x){
        double totalVenta = 0;
        switch(y){
            case 1: 
                totalVenta = x *2.98;
                break;

            case 2: 
                totalVenta = x *4.5;
                break;

            case 3: 
                totalVenta = x *9.98;
                break;

            case 4: 
                totalVenta = x *4.49;
                break;

            case 5: 
                totalVenta = x *6.87;
                break;    
        }
        return totalVenta;
    }
*/


//EJERCICIO 6
/* #include <iostream>

using namespace std;

int main(){
    int numeros;
    for(int i = 0; i < 5; i++){
        cout << "Ingrese el número: ";
        cin >> numeros;
        for(int j = 1; j <= numeros ; j++){
           cout << "*";
        }   
        cout << endl;
    }

   return 0;
}
*/
//EJERCICIO 7
/*
#include <iostream>
using namespace std;

int main(){
    int x = 1, i = 1;
    string verso [] = {"El primer día de Navidad, mi verdadero amor me envió: Una perdiz en un peral.",
     "El segundo día de Navidad, mi verdadero amor me envió: Dos tórtolas y una Perdiz en un peral.", 
     "El tercer día de Navidad, mi verdadero amor. amor me envió: Tres gallinas francesas Dos palomas de la tortuga y una perdiz en un peral", 
     "en el cuarto día de Navidad mi verdadero amor me envió: Cuatro pájaros de llamada Tres gallinas francesas Dos palomas de la tortuga y una perdiz en un peral",
     "en el quinto día de Navidad que me envió mi verdadero amor: cinco anillos de oro cuatro pájaros voladores Tres gallinas francesas Dos palomas de la tortuga y una perdiz en un peral",
     "En el sexto día de Navidad mi verdadero amor me envió: Seis gansos una colocación Cinco anillos de oro Cuatro pájaros de llamada de tres gallinas francesas Dos palomas de la tortuga y una perdiz en un peral", 
     
    "En el séptimo día de Navidad, mi verdadero amor me envió: Siete cisnes, una natación, seis gansos, un tendido, cinco anillos de oro, cuatro pájaros voladores, tres gallinas francesas, dos tórtolas y una perdiz en un peral. ",
    "El octavo día de Navidad, mi verdadero amor fue enviado a yo: ocho criadas un ordeño Siete cisnes a nadar Seis gansos a Poner Cinco anillos de oro Cuatro pájaros voladores Tres gallinas francesas Dos tórtolas y una perdiz en un peral",
    "El noveno día de Navidad me envió mi verdadero amor: Nueve damas bailando ocho doncellas a Ordeñando siete cisnes a Nadar Seis gansos y poner Cinco anillos de oro Cuatro pájaros voladores Tres gallinas francesas Dos tórtola y una perdiz en un peral", 
    "El décimo día de Navidad, mi verdadero amor me envió: Diez señores, nueve saltando, nueve damas bailando, ocho criadas, ordeñando siete cisnes. una natación Seis gansos y cinco anillos de oro, cuatro pájaros voladores, tres gallinas francesas, dos tórtolas y una perdiz en un peral.",
    "El undécimo día de Navidad me envió mi verdadero amor: once gaiteros, diez señores, saltando, nueve damas bailando, ocho sirvientas y ordeñando. Siete cisnes nadando Seis gansos tendidos Cinco anillos de oro Cuatro pájaros voladores Tres gallinas francesas Dos tórtolas y una perdiz en un peral",
    "En el duodécimo día de Navidad me envió mi verdadero amor: 12 tambores tamborileando once gaiteros entonando diez señores saltando Nueve damas bailando ocho doncellas un ordeño siete cisnes una natación seis gansos un tendido cinco anillos de oro cuatro pájaros voladores tres gallinas francesas dos tórtolas y una perdiz en un peral"};

    while(i <= 12){
        switch(i){
            case 1: cout << "primer día" << endl;
            break;
            case 2: cout << "segundo día" << endl;
            break;
            case 3: cout << "tercer día" << endl;   
            break;
            case 4: cout << "cuarto día" << endl;
            break;
            case 5: cout << "quinto día" << endl;
            break;
            case 6: cout << "sexto día" << endl;
            break;
            case 7: cout << "séptimo día"<< endl;
            break;
            case 8: cout << "octavo día"<< endl;
            break;
            case 9: cout << "noveno día"<< endl;
            break;
            case 10: cout << "décimo día"<< endl;
            break;
            case 11: cout << "undécimo día"<< endl;
            break;
            case 12: cout << "duodécimo día"<< endl;
            break;
        }
        switch(i){
                    case 1: cout << verso[0] << endl;
                    break;
                    case 2: cout << verso[1] << endl;
                    break;
                    case 3: cout << verso[2] << endl;
                    break;
                    case 4: cout << verso[3] << endl;
                    break;
                    case 5: cout << verso[4] << endl;
                    break;
                    case 6: cout << verso[5] << endl;
                    break;
                    case 7: cout << verso[6] << endl;
                    break;
                    case 8: cout << verso[7] << endl;
                    break;
                    case 9: cout << verso[8] << endl;
                    break;
                    case 10: cout << verso[9] << endl;
                    break;
                    case 11: cout << verso[10] << endl;
                    break;
                    case 12: cout << verso[11] << endl;
                    break;
                    case 13: cout << verso[12] << endl;
                    break;
        }
        i++;      
    } 
    return 0;
} */

// EJERCICIO 8
/* #include <iostream>

using namespace std;
int pedirDato(int& lado);

int main(){
    int lado;
    lado = pedirDato(lado);
    for(int i = 1 ; i <= lado ; i++){
        for(int j = 1; j <= lado; j++){
            if(i == 1 || i == lado || j == 1 || j == lado){
                cout << "*";

            }else{
                cout << " ";

            }           
        }
        cout << endl;
    }
    cout << endl;
   
   return 0;
}

int pedirDato(int& lado){
    do{
        cout << "Ingerese el tamaño del cuadrado: ";
        cin >> lado;
        if(lado <= 0){
            cout << "Este valor no es válido" << endl;
        }
        if(lado > 20){
            cout << "Sólo entre 1 y 20" << endl;
        }
    }while(lado > 20 || lado <= 0 );
    
    return lado;
}*/

//EJERCICIO 9
/* #include <iostream>

using namespace std;

int pedirDato();
int main(){
    int x;
    float factorial = 1;
    x = pedirDato();
    for(int i = x; i >=1 ; i--){
        factorial *= i;
    }
    cout << "El factorial de: " << x << " es: " << factorial << endl;

   return 0;
}

int pedirDato(){
    int num;
   
     do{
        cout << "Digite un número entero: ";
        cin >> num;
        if (num < 0){
            cout << "Debe ser positvo" << endl;
        }
    }while(num < 0);
    
    return num;
}*/

//EJERCICIO 10
/*
#include <iostream>

using namespace std;

int main(){
    float suma = 0;
    for (int i  = 100; i <= 200; i++ ){
        if(i % 9 == 0){
            suma += i; 
        }    
    }
    cout << "La suma de los enteros entre 100 y 200, divisibles para 9 es: " << suma << endl;
   
   return 0;
}
*/



