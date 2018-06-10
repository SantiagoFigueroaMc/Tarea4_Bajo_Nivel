#ifndef _GRAFO
#define _GRAFO

#include <string>
#include <sstream>
#include "node.h"

using namespace std;

class Grafo {
private:
//Atributos:
//  Tipo:           Nombre:
    string          name;// Nombre del grafo ("Mapa de Chile", "Red de amigos de Facebook", etc)
    vector<Node>    Nodos_pertenecientes;
    int             cantidad_nodos;
public:
//Constructor:
	//falta el constructor vacío
    Grafo(string);// recibe el nombre del grafo
//Metodos:
//  Tipo:           Nombre:
    string          GetName();
    Node            GetNodo(int);   // se le pasa el id del nodo y devuelve el nodo en la posicion int
    void            AddNodo();      // se crea y agrega un nodo
    void            DeleteNodo(int);   // borra el nodo en el indice
    string          PrintAllNodes();// muestra todos los nodos
};

#endif
