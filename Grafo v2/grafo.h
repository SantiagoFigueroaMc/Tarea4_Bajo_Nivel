#ifndef _GRAFO
#define _GRAFO

#include <string>
#include "node.h"

using namespace std;

class Grafo {
private:
//Atributos:
//  Tipo:           Nombre:
    string          name;
    vector<Node>    Nodos_pertenecientes;
public:
//Constructor:
    Grafo(string);// recibe el nombre del grafo
//Metodos:
//  Tipo:           Nombre:
    string          GetName();
    Node            GetNodo(int);// se le pasa el id del nodo
    void            AddNodo(Node);// se entrega un nodo
};

#endif