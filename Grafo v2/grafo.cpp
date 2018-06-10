#include "grafo.h"

//Constructor:
Grafo::Grafo(int mi_name){
    name = mi_name;
    cantidad_nodos = 0;
};

//Metodos:
int Grafo::GetName(){
    return name;
};

Node Grafo::GetNodo(int mi_id){
    return Nodos_pertenecientes.at(mi_id);
};

void Grafo::AddNodo(){
    Node mi_nodo;
    cantidad_nodos++;
    Nodos_pertenecientes.push_back(mi_nodo);
};

void Grafo::DeleteNodo(int indice){
    Nodos_pertenecientes.erase(Nodos_pertenecientes.begin() + indice - 1);
    cantidad_nodos--;
}

string Grafo::PrintAllNodes(){
    stringstream salida;
    for (int i = 0; i < cantidad_nodos; i++){
        salida << Nodos_pertenecientes.at(i).GetId() << " ";
    }
    return salida.str();
};
