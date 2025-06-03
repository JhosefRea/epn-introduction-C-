#include <iostream>
using namespace std;
long int numero(long int& num);
int* inverso(long int x, int& cont);
int* entero(int x, int& cont);
const int MAXIMO = 100;

int main(){
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
    return 0;
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

int* inverso(long int x, int& cont){ //guardo cad dígito invertido en una X arrray
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
int* entero(int x,  int& cont){//guardo cad dígito en una X arrray
    int copia, divisor = 1;
    static int y[MAXIMO];
   // int *ptr = &y[MAXIMO];
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
 //   return ptr;
    return y;
}


