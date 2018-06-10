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
        mapa_1.AddNodo();
    }
    cout << "Nodos en la red: " << mapa_1.PrintAllNodes() << endl;
    cout << "Se borrara el nodo 2, 6 y 10." << endl;
    mapa_1.DeleteNodo(2);
    mapa_1.DeleteNodo(6);
    mapa_1.DeleteNodo(10);
    cout << "Nodos en la red: " << mapa_1.PrintAllNodes() << endl;
    cout << "Se agregara un nuevo nodo en la red." << endl;
    mapa_1.AddNodo();
    cout << "Nodos en la red: " << mapa_1.PrintAllNodes() << endl;
    cout << mapa_1.AddConexion(1,13) << endl;
    
    cout << mapa_1.PrintAllConexions(1) << endl;
    cout << "Fin programa.\n\n"<<endl;
}