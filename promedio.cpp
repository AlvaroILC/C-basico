#include <iostream>
using namespace std;

int PR(int a, int b, int c){
    int d = ((a+b+c)/3);
    return d;
}

int main (){
    int not1,not2,not3,resultado;
    cout << "ingrese primera nota";
    cin >> not1;

    cout << "ingrese segunda nota";
    cin >> not2;

    cout << "ingrese tercera nota";
    cin >> not3;

    resultado = PR(not1,not2,not3);
    if (resultado>10){
        cout << resultado;
        cout << "aprobado";
    } else{
        cout << resultado;
        cout << "desaprobado";
    }


return 0;
}