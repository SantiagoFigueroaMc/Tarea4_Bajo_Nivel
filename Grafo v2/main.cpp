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
    mapa_1.AddNodo();
    mapa_1.AddNodo();
    mapa_1.AddNodo();
    cout << "Nodos en la red: " << mapa_1.PrintAllNodes() << endl;
    cout << "Se borrara el nodo 2." << endl;
    mapa_1.DeleteNodo(2);
    cout << "Nodos en la red: " << mapa_1.PrintAllNodes() << endl;
    cout << "Se agregara un nuevo nodo en la red." << endl;
    mapa_1.AddNodo();
    cout << "Nodos en la red: " << mapa_1.PrintAllNodes() << endl;
    cout << "Fin programa.\n\n"<<endl;
}