//Fecha: 13-06-2024
//Author: Jean Valencia
//Resuelva los siguientes ejercicios con funciones - bucles - condicionales.
//1) Encuentre el valor de las siguientes expresiones, utilizando el depurador 
//  y la ventana watch:
//Ejemplo: Para este código: cuál es el valor de la expresión a > 6 || b==3 ?
//Resultado de la expresión es true

#include <iostream>
using namespace std;

int main(){

    //a) valores iniciales: x=5, y =0;    expresión:  if (x==5 && y!=0)
    int x=5, y=0;
    if(x==5 || y!=0){
        cout << "es verdadero";
    }else{
        cout << "es falso";
    }


    //b) valores iniciales: n=90;    expresión:  if (!(n>=1  &&  n<=100))

    int n=90;
    if (!(n>=1  &&  n<=100)){
        cout << "es verdadero";
    }else{
        cout << "es falso";
    }

    //c) valores iniciales: num=10;    expresión:  resultado = (3.14159 * num - (num*2)/3)

    int num =10, result=0;
    result = (3.14159 * num - (num*2)/3);
    cout << "el resultado es:" << result;

    //d) valores iniciales: p=15, q =20;    expresión:  if (p=15 || q>20)
/*
    int p=15, q=20;
    if(p==15 || q>20){
        cout << "el valor es verdadero";
    }
*/
//e) valores iniciales: p=2, q =1;    expresión:  if (p!=2 || q==5)

    int p=2, q=1;
    if(p!=2 || q==5){
        cout << "el valor es verdadero";
    }

    return 0;
}