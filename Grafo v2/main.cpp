
#include "grafo.h"
#include <iostream>
using namespace std;

int Node::numero_nodos = 0;
int main(){
    /*  Prueba de grafo     */
    Grafo mapa_1 ("Santiago de Chile.");//Llamada al constructor.
    cout << mapa_1.GetName() << endl;
    mapa_1.AddNodo();
    mapa_1.AddNodo();
    mapa_1.AddNodo();
    cout << "Nodos en la red: " << mapa_1.PrintAllNodes() << endl;
    mapa_1.DeleteNodo(2);
    cout << "Nodos en la red: " << mapa_1.PrintAllNodes() << endl;
    mapa_1.AddNodo();
    cout << "Nodos en la red: " << mapa_1.PrintAllNodes() << endl;
    
}