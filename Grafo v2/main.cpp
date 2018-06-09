#include "node.h"
#include "grafo.h"
#include <iostream>
using namespace std;

int Node::numero_nodos = 0;
int main(){
    /*  Prueba de nodo      */
    Node casa_1;
    Node casa_2;
    casa_1.Add_path(casa_2);
    queue<Node> fila_de_nodos = casa_1.GetConexiones();
    cout << fila_de_nodos.front().GetId() << endl;

    /*  Prueba de grafo     */
    Grafo mapa_1 ("Santiago de Chile.");//Llamada al constructor.
    cout << mapa_1.GetName() << endl;
}