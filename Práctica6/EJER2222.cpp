#include <iostream>
using namespace std;
long int numero(long int& num);
int* inverso(long int x, int& cont);
int* entero(int x, int& cont);
const int MAX = 100;

int main(){
    long int num;
    int cont = 0;
    bool palindromo = true;
    num = numero(num);
    int *ptrInverso = inverso(num, cont);
    
    int *ptrEntero = entero(num, cont);
    cout << "////////////////" << cont << endl;
    for(int i = 0; i < cont; i++){
        cout << *(ptrInverso+i) << "\t";
    }
    cout << "////////////////" << endl;
    for(int i = 0; i < cont; i++){
        cout << *(ptrEntero+i) << "\t";
    }
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

int* inverso(long int x, int& cont){
    int invertido = 0, resto;
    static int num[MAX];
    int i = 0;
    while(x > 0 && i <= cont){
        resto = x % 10;
        x /= 10;
        cont++;
        invertido = invertido *10 + resto;
        num[i] = resto;
        i++;        
    }
    for(int i = 0; i < cont; i++){
        cout << num[i] << "\t";
    }
    return num;
}
int* entero(int x,  int& cont){
    int copia, divisor = 1;
    static int y[MAX];
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
    for(int j = 0; j < cont; j++){
        cout << "\n****************\n";
        cout << y[j] << "\t";
    }
    return y;
}



