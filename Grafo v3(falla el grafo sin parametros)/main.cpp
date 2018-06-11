/*
Este main es solo para probar, hay que borrarlo
despues. Se deberia poder usar algo como esto en
python una vez wraped.
*/
#include "grafo.h"
#include <iostream>
using namespace std;

int Node::numero_nodos = 0;
int main(){
    cout << "\nInicio programa." << endl;
    /*  Prueba de grafo     */
    Grafo mapa_1 (24500);//Llamada al constructor.
    cout << mapa_1.GetName() << endl;
    for (int cantidad_de_nodos = 0; cantidad_de_nodos < 15; cantidad_de_nodos++){
        cout << mapa_1.AddNodo() << endl;
    }
    cout << "Nodos en la red: " << mapa_1.GetCantidad_nodos() << endl;
    mapa_1.AddConexion(1,13, 24);
    cout << "Se creo un camino de 1 a 13, con peso 24" << endl;
    if (mapa_1.hay_arco(1, 13)){
        cout << "Hay camino de 1 a 13" << endl;
    }
    
    //cout << mapa_1.PrintAllConexions(1) << endl;
    cout << "Fin programa.\n\n"<<endl;
}