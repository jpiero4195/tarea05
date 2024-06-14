//Fecha: 13-06-2024
//Author: Jean Valencia
// 2) Diseñe la función que recibe como parámetro un 
//entero y devuelve verdadero si el número es par, 
//devuelve falso si es impar

#include <iostream>
using namespace std;

int contarcifra(int num){
    int ctd=0;
    while(num>0){
        num/=10;
        ctd++;
    }
    return ctd;
}

int main(){
    int number=0, cifra=0;
    cout << "Ingrese un número: ";
    cin >> number;
    cout << "El numero de cifras es: " << contarcifra(number) << endl;
    return 0;
}