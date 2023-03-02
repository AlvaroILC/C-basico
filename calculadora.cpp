#include <iostream>
using namespace std;

int Suma(int a, int b){
    int c= a+b;
    return c;
}

int resta(int a, int b){
    int c= a-b;
    return c;
}

int multiplicacion(int a, int b){
    int c= a*b;
    return c;
}

int division(int a, int b){
    int c= a/b;
    return c;
}

int main(){

    int o,n1,n2,c,resultado;
    cout <<" ingrese su tipo de operacion 1 para suma 2 para resta 3 para multiplicacion 4 para division";
    cin >>o;
    cout <<" ingrese el primer numero";
    cin >>n1;
    cout <<"ingrese el segundo numero";
    cin >>n2;

switch(o){
case 1: resultado = Suma(n1,n2);
cout << resultado;
break;

case 2: resultado = resta(n1,n2);
cout << resultado;
break;

case 3: resultado = multiplicacion(n1,n2);
cout << resultado;
break;

case 4:resultado = division(n1,n2);
cout << resultado;
break;
}
return 0;
}