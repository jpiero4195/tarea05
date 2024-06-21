//Fecha: 13-06-2024
//Author: Jean Valencia
//Tema: Diseñe la funcion que imprima una tabla de multiplicar que
//se pasa como parametro

#include <iostream>

using namespace std;

void tablaMultiplicar(int tabla){// viod es vacio y returna automaticamente
    cout<<endl<<"Tabla de multiplicar del"<<tabla;
    for(int k=1;k<=12;k++){
        cout<<endl<<tabla<<" X "<<k<<" = "<< tabla*k;
    }
}
//Funcion que imprime la tabal de multiplicar.La funcion establece 
//el limite inferior y limite superior de la tabla

void tablaMultiplicarLimite(int tabla, int ini=1, int fin=12){// viod es vacio y returna automaticamente

    //DENTRO DE ESTA FUNCION DEBE LLAMAR A tablaMultiplicar
    
    cout<<endl<<"Tabla de multiplicar del "<<tabla;
    for(int k=ini;k<=fin;k++){
        cout<<endl<<tabla<<" X "<<k<<" = "<< tabla*k;
    }
    cout<<endl;
}
int main() {
    /*cout << endl << "Funcion tabla de multiplicar.";
    tablaMultiplicar(5);cout<<endl;//llamada de la funcion
    tablaMultiplicar(10);cout<<endl;
    tablaMultiplicar(7);cout<<endl;
    int x,y,z;
    cout << endl << "Ingrese el número que quieres multiplicaro: ";
    cin >> x;
    tablaMultiplicar(x);
    //tabla con limites
    tablaMultiplicarLimite(3,4,10);cout<<endl;
    tablaMultiplicarLimite(12,2,8);cout<<endl;
    tablaMultiplicarLimite(11);cout<<endl;//la funcion asume los valores por defecto 1 y 12 lo qu ees opcional
    cout << endl << "Ingrese el número de que va inicar la tabla: ";
    cin >> y;
    cout << endl << "Ingrese el número de que va terminar la tabla: ";
    cin >> z;
    cout << endl << "Ingrese el número que quieres multiplicaro: ";
    cin >> x;
    tablaMultiplicarLimite(x,y,z);
    */
   for (int i=1;i<=30;i++){
        tablaMultiplicarLimite(i);
   }
   
    return 0;
}
