#include "grafo.h"

//Constructor:
Grafo::Grafo(string mi_name){
    name = mi_name;
};

//Metodos:
string Grafo::GetName(){
    return name;
};

Node Grafo::GetNodo(int mi_id){
    return Nodos_pertenecientes.at(mi_id);
};

void Grafo::AddNodo(Node mi_nodo){
    Nodos_pertenecientes.push_back(mi_nodo);
};
