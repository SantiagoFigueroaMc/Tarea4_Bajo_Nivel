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
    int             name;// Nombre del grafo (un numero....)
    vector<Node>    Nodos_pertenecientes;
    int             cantidad_nodos;
public:
//Constructor:
	//falta el constructor vacío
    Grafo(int);// recibe el nombre del grafo
//Metodos:
//  Tipo:           Nombre:
    void            AddConexion(int, int, int); // se le entrega el nodo de donde parte el camino, el nodo a unir y el peso
    int             AddNodo();                  // se crea y agrega un nodo
    bool            Hay_Arco(int, int);      // revisa si hay camino de A a B. A-->B
    bool            GetAdventureMap(int,int);   // busca un camino entre el primer int y el segundo, que corresponden a nodos

    Node            GetNodo(int);               // se le pasa el id del nodo y devuelve el nodo en la posicion int
    int             GetName();
    int             GetCantidad_nodos();
};

#endif
