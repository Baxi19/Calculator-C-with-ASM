#include <iostream>
#include <cstdlib>
#include <string.h>
#include <cstring>
#include <sstream>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <fstream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

/// Estas son las llamadas de todos los menus
int decimalABinario(int n, int binarioEntero);
int binarioADecimal(int n);
void menuSuma();
void menuResta();
void menuMult();
void menuDiv();
void menuPotencia();
void menuRaiz();
void menuIEEE();
void menuCalc();
void decimalIEEE();
void IEEEdecimal();

void menuPrincipal();


void menuTipoCambio();
void colonDolar();
void dolarColon();
void euroColon();
void colonEuro();
void dolarEuro();
void euroDolar();

//void cambioEuroDolar();


int result = 0;
double dolar = 0;
double colon = 0;
double euro = 0;
//void operacionPotencia();

///----------------------------------------Menu principal------------------------------------------------///


void menuPrincipal(){
    menuCalc();
}



void menuCalc(){
    //system("clear");
    char opcion = '0';
    cout << endl << "---------Calculadora de operaciones matemáticas---------"<<endl;
    cout << endl <<"Escoja lo que desea hacer: ";
    cout << endl <<"1. Suma";
    cout << endl <<"2. Resta";
    cout << endl <<"3. Multiplicación";
    cout << endl <<"4. División";
    cout << endl <<"5. Potencia";
    cout << endl <<"6. Radical";
    cout << endl <<"7. IEEE 754";
    cout << endl <<"8. Tipo de Cambio";
    cout << endl <<"9. Salir";
    cin >>opcion;

    if (opcion == '1'){
        menuSuma();
    }
    else if(opcion == '2'){
        menuResta();
    }
    else if(opcion == '3'){
        menuMult();
    }
    else if(opcion == '4'){
        menuDiv();
    }
    else if(opcion == '5'){
        menuPotencia();
    }
    else if(opcion == '6'){
        menuRaiz();
    }
    else if (opcion == '7'){
        menuIEEE();
    }
    else if(opcion == '8'){
        menuTipoCambio();
    }
    else if(opcion == '9'){
        return;
    }
  else{
    menuCalc();
  }
}


///----------------------------------------Menus operaciones------------------------------------------------///

void menuSuma(){
    char x ='1';

    while (x == '1'){
        system("clear");
        float num1,num2,resultado;

        cout <<endl <<"------------Suma------------";
        cout << endl <<"Digite el primer numero: ";
        cin >> num1;

        cout << endl <<"Digite el Segundo numero: ";
        cin >> num2;

        __asm__ ( "fld %1;"
              "fld %2;"
              "faddp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

        cout << endl <<"El resultado es: "  <<resultado;

        cout << endl << endl <<"--> Presione una tecla para salir....";
        cin >> x;
    }
    menuCalc();
}

void menuResta(){
    char x ='1';

    while (x == '1'){
        system("clear");
        float num1,num2,resultado;

        cout <<endl <<"------------Resta------------";
        cout << endl <<"Digite el primer numero: ";
        cin >> num1;

        cout << endl <<"Digite el Segundo numero: ";
        cin >> num2;

        __asm__ ( "fld %2;"
              "fld %1;"
              "fsubp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;
        cout << endl <<"El resultado es: "  <<resultado;

        cout << endl << endl <<"--> Presione una tecla para salir....";
        cin >> x;
    }
    menuCalc();
}

void menuMult(){
    char x ='1';

    while (x == '1'){
        system("clear");
        float num1,num2,resultado;

        cout <<endl <<"------------Multiplicación------------";
        cout << endl <<"Digite el primer numero: ";
        cin >> num1;

        cout << endl <<"Digite el Segundo numero: ";
        cin >> num2;

        __asm__ ( "fld %1;"
                  "fld %2;"
                  "fmulp;"
                  "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

        cout << endl <<"El resultado es: "  <<resultado;
        cout << endl << endl <<"--> Presione una tecla para salir....";
        cin >> x;
    }
    menuCalc();
}

void menuDiv(){
    char x ='1';

    while (x == '1'){
        system("clear");
        float num1,num2,resultado;

        cout <<endl <<"------------División------------";
        cout << endl <<"Digite el primer numero: ";
        cin >> num1;

        cout << endl <<"Digite el Segundo numero: ";
        cin >> num2;

        __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

        cout << endl <<"El resultado es: "  <<resultado;

        cout << endl << endl <<"--> Presione una tecla para salir....";
        cin >> x;
    }
    menuCalc();
}

void menuPotencia(){
    char x ='1';

    while (x == '1'){
        system("clear");
        float num1,num2,resultado;


        cout <<endl <<"------------Potencia------------";
        cout << endl <<"Digite la base: ";
        cin >> num1;

        cout << endl <<"Digite el exponente: ";
        cin >> num2;

        float cont = 1;
        resultado = num1;

        while (cont<num2){
            __asm__ ( "fld %1;"
                      "fld %2;"
                      "fmulp;"
                      "fstp %0;" : "=m" (resultado) : "m" (resultado), "m" (num1) ) ;

             cont++;
            }

        cout << endl <<"El resultado es: "  <<resultado;
        cout << endl << endl <<"--> Presione una tecla para salir....";
        cin >> x;
    }
    menuCalc();
}

void menuRaiz(){
    char x ='1';

    while (x == '1'){
        system("clear");
        float num1,num2,resultado;
        resultado = 2;
        float unMedio = 0.5;

        cout <<endl <<"------------Radical------------";
        cout << endl <<"Digite el numero: ";
        cin >> num1;

        cout << endl <<"Digite el exponente: ";
        cin >> num2;

        int contador = 1;
        unMedio = 1/num2;
        float temp =0;
        float temp2 =0;

        while(contador<=9){
            temp = resultado;
            temp2 = resultado;
            __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (temp) : "m" (num1), "m" (temp) ) ;

            __asm__ ( "fld %1;"
              "fld %2;"
              "faddp;"
              "fstp %0;" : "=m" (temp2) : "m" (temp2), "m" (temp) ) ;

            __asm__ ( "fld %1;"
                  "fld %2;"
                  "fmulp;"
                  "fstp %0;" : "=m" (resultado) : "m" (unMedio), "m" (temp2) ) ;

            contador++;

        }

        cout << endl <<"El resultado es: "  <<resultado;
        cout << endl << endl <<"--> Presione una tecla para salir....";
        cin >> x;


    }
    menuCalc();
}



void menuTipoCambio(){
    //system("clear");
    char opcion = '0';
    cout << endl << "---------Tipos de Cambio---------"<<endl;
    cout << endl <<"Seleccione una opcion para continuar: ";
    cout << endl <<"1. De Colon a Dolar";
    cout << endl <<"2. De Dolar a Colon";
    cout << endl <<"3. De Euro a Colon";
    cout << endl <<"4. De Colon a Euro";
    cout << endl <<"5. De Dolar a Euro";
    cout << endl <<"6. De Euro a Dolar";
    cout << endl <<"7. Salir";
    cin >>opcion;
    if (opcion == '1'){
        colonDolar();
    }
    else if(opcion == '2'){
        dolarColon();
    }
    else if(opcion == '3'){
        euroColon();
    }
    else if(opcion == '4'){
        colonEuro();
    }
    else if(opcion == '5'){
        dolarEuro();
    }
    else if(opcion == '6'){
        euroDolar();
    }else if(opcion == '7'){
        menuCalc();
    }
}

///------------------------------------Convertir a IEEE desde decimal y viceversa-----------------------------------///

void menuIEEE(){
    char opcion = '0';
    cout << endl << "---------Conversion IEEE---------"<<endl;
    cout << endl <<"Seleccione una opcion para continuar: ";
    cout << endl <<"1. Decimal a IEEE";
    cout << endl <<"2. IEEE a decimal";
    cout << endl <<"3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;
    if (opcion == '1'){
        decimalIEEE();
    }
    else if (opcion == '2'){
        IEEEdecimal();
    }
    else{
        menuCalc();
    }
}

void decimalIEEE(){
    int valor = 0;
    cout << "Digite la parte ENTERA SOLAMENTE: ";
    cin >> valor;

    int signo = 0;
    if (valor < 0){
        signo = 1;
    }

    double parteDeci = 0;
    cout << "Digite la parte DECIMAL (formato: 0.decimales a escoger.): ";
    cin >> parteDeci;

    if(parteDeci >= 1){
        cout << "Decimales insertados en formato no indicado." << endl;
    }
    else {
        int binarioEntero = 0;
        binarioEntero = decimalABinario(valor, binarioEntero);

        //Convertir los decimales a binario.
        int parteDecimal[23];
        std::string out_string;
        std::stringstream ss;

        //Ciclo para llevar a cabo la conversión, se hace 23 veces para tener los 23 bits de mantisa.
        for(int i = 0; i < 23; i++){

            parteDeci *= 2;

            //Pasos necesarios para pasar de double a string.
            ss.str("");
            out_string = "";
            ss << parteDeci;
            out_string = ss.str();
            //----------------------------------------------
            //El resultado da el codigo asccii del numero, por lo que se le resta siempre 48 para obtener el numero real.
            parteDecimal[i] = int(out_string[0]  - 48);

            //Cuando el resultado de la multiplicacion sea mayor a 1, se le resta 1 para que vuelva al rango de 0 y 1.
            if(parteDeci >= 1){
                parteDeci -= 1;
            }

        }
        //---------------------------------------------
        out_string = "";
        ss.str("");
        ss << binarioEntero;
        out_string = ss.str();

        int exponente = out_string.length() -1;
        exponente += 127;
        binarioEntero = 0;
        exponente = decimalABinario(exponente, binarioEntero);

        cout << "Signo: " << signo << endl;
        cout << "Exponente: " << exponente << endl;
        cout << "Mantisa: ";
        for (int k = 0; k < 23; k++){
            cout << parteDecimal[k];
        }
        cout << endl;
    }


        menuIEEE();
}

int decimalABinario(int n, int binarioEntero)
{
    // array para los binarios.
    int binaryNum[32];

    // contador del array de binarios.
    int i = 0;
    while (n > 0) {

        // Se almacena el residuo en el array de binarios.
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // se recorre la lista de binarios de atras para adelante.
    for (int j = i - 1; j >= 0; j--){

        binarioEntero += binaryNum[j];
        binarioEntero *= 10;

    }
    //Siempre sobra un 0 por lo que se le quita con el /10.
    binarioEntero = binarioEntero / 10;
    return binarioEntero;
}

void IEEEdecimal(){

    int signo = 0;
    cout << "Digite el primer bit: " << endl;
    cin >> signo;

    int exponente = 0;
    cout << "Digite los siguientes ocho bits: " << endl;
    cin >> exponente;

    int mantisa = 0;
    cout << "Digite los 23 bits restantes: " << endl;
    cin >> mantisa;

    exponente = binarioADecimal(exponente);
    exponente = exponente - 127;

    int decimales[23];
    for(int i = 0; i < 23; i++){

        decimales[i] = mantisa%10;
        mantisa = mantisa/10;
    }

    double resultadoMantisa = 0;
    for(int k = 1; k < 24; k++){
        resultadoMantisa = decimales[k-1]*pow(2, -k);
    }

    signo = pow(-1, signo);
    resultadoMantisa = 1 + resultadoMantisa;
    exponente = pow(2, exponente);

    double resultadoTotal = signo*resultadoMantisa*exponente;

    cout << "El resultado en decimal es: " << resultadoTotal << endl;

    menuIEEE();

}

int binarioADecimal(int n){

    int num = n;
    int valorDecimal = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp) {
        int ultimoDigito = temp % 10;
        temp = temp / 10;

        valorDecimal += ultimoDigito * base;

        base = base * 2;
    }

    return valorDecimal;
}

///----------------------------------Operaciones tipo de cambio-----------------------------------------------------///
void actualizarValores(){
    dolar = 0.0;
    colon = 0.0;
    euro = 0.0;
    cout << endl << "-------------------------------------"<<endl;
    //precio colon
    fstream archivoC("precioColon.txt");
    std::string lineaC;
    if(!archivoC.is_open())
    {
        archivoC.open("precioColon.txt", ios::in);
    }
    while(getline(archivoC, lineaC)){
        cout << endl <<"Precio del Colon: ₡";
        cout << lineaC << "\n";
        stringstream x(lineaC);
        x>>colon;

    }
    //precio de dolar
    fstream archivoD("precioDolar.txt");
    string lineaD;
    if(!archivoD.is_open())
    {
        archivoD.open("precioDolar.txt", ios::in);
    }
    while(getline(archivoD, lineaD)){
        cout << endl <<"Precio del Dolar: $";
        cout << lineaD << "\n";
       stringstream x(lineaD);
        x>>dolar;

    }
    //precio euro
    fstream archivoE("precioEuro.txt");
    string lineaE;
    if(!archivoE.is_open())
    {
        archivoE.open("precioEuro.txt", ios::in);
    }
    while(getline(archivoE, lineaE)){
        cout << endl <<"Precio del Euro: €";
        cout << lineaE << "\n";
        stringstream x(lineaE);
        x>>euro;
    }

}


void colonDolar(){
    actualizarValores();
    cout << endl <<"Digite la cantidad de Colones que desea convertir a Dolares: ";
    double cantidad = 0.0;
    cin >> cantidad;
    double total = 0.0;
    total = cantidad / dolar;
    cout << endl <<"La cantidad de Dolares es: $" ;
    cout << total ;
    menuTipoCambio();
}


void dolarColon(){
    actualizarValores();
    cout << endl <<"Digite la cantidad de Dolares que desea convertir a Colones: ";
    double cantidad = 0.0;
    cin >> cantidad;
    double total = 0.0;
    total = cantidad * dolar;
    cout << endl <<"La cantidad de Colones es: ‎₡" ;
    cout << total ;
    menuTipoCambio();
}


void euroColon(){
    actualizarValores();
    cout << endl <<"Digite la cantidad de Euros que desea convertir a Colones: ";
    double cantidad = 0.0;
    cin >> cantidad;
    double total = 0.0;
    total = cantidad * euro;
    cout << endl <<"La cantidad de Colones es: ₡" ;
    cout << total ;
    menuTipoCambio();
}


void colonEuro(){
    actualizarValores();
    cout << endl <<"Digite la cantidad de Colones que desea convertir a Euros: ";
    double cantidad = 0.0;
    cin >> cantidad;
    double total = 0.0;
    total = cantidad / euro;
    cout << endl <<"La cantidad de Euros es: €" ;
    cout << total ;
    menuTipoCambio();
}


void dolarEuro(){
    actualizarValores();
    cout << endl <<"Digite la cantidad de Dolares que desea convertir a Euros: ";
    double cantidad = 0.0;
    cin >> cantidad;
    double total = 0.0;
    total = cantidad * dolar;

    total = total / euro;
    cout << endl <<"La cantidad de Euros es: €" ;
    cout << total ;

    menuTipoCambio();
}

void euroDolar(){
    actualizarValores();
    cout << endl <<"Digite la cantidad de Euros que desea convertir a Dolares: ";
    double cantidad = 0.0;
    cin >> cantidad;
    double total = 0.0;
    total = cantidad * euro;

    total = total / dolar;
    cout << endl <<"La cantidad de Dolares es: $" ;
    cout << total ;
    menuTipoCambio();
}

int main(void) {
    menuPrincipal();
    return 0;
}
