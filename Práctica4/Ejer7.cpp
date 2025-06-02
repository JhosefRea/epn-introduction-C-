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
} 