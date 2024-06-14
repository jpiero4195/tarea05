//Fecha: 13-06-2024
//Author: Jean Valencia
// 2) Diseñe la función que recibe como parámetro un 
//entero y devuelve verdadero si el número es par, 
//devuelve falso si es impar

#include <iostream>
using namespace std;

bool devolvercifra(int num){
    if(num % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int number=0;
    cout << "Ingrese un número: ";
    cin >> number;
    if(devolvercifra(number)){
        cout << "El número es par";
    }else{
        cout << "El número es impar";
    }
    return 0;
}