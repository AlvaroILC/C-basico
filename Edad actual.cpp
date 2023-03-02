#include <iostream>
using namespace std;

int EA(int a){
    int b = 2023-a;
    return b;
}

int main(){
    int edad,resultado;
    cout << "ingrese su año de nacimiento  ";
    cin >> edad;

    resultado = EA(edad);
    cout << resultado;

    return 0;
}