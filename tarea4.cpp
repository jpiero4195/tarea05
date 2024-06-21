//Fecha: 13-06-2024
//Author: Jean Valencia
// 2) Diseñe la función que recibe como parámetro un 
//entero y devuelve verdadero si el número es par, 
//devuelve falso si es impar

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int sumcantidades(int num1, int num2, int num3){
    srand(time(NULL));
    int suma = 0;
    for (int i = 0; i < num1; ++i) {
        int numale = num2 + rand() % (num3 - num2 + 1);
        cout << "El numero aleatorio es:" << numale << endl;
        suma += numale;
    }
    cout << "El numero de cifras es: " << suma << endl; //LA FUNCION NO DEBE IMPRIMIR

    return suma;
}

int main(){
    int number1=0, number2=0, number3=0;
    cout << "Ingrese cuantos números se van a generar: ";
    cin >> number1;
    cout << "Ingrese el rango inferior: ";
    cin >> number2;
    cout << "Ingrese el rango superior: ";
    cin >> number3;

    sumcantidades(number1,number2,number3);
    return 0;
}
